#include "CDoAction_Melee.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CStatusComponent.h"

void ACDoAction_Melee::DoAction()
{
	Super::DoAction();

	CheckFalse(Datas.Num() > 0);

	if (bEnable == true)
	{
		bExist = true;
		bEnable = false;
		return;
	}


	CheckFalse(State->IsIdleMode());
	State->SetActionMode();

	const FDoActionData& data = Datas[0];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);
	data.bCanMove ? Status->SetMove() : Status->SetStop();

}

void ACDoAction_Melee::Begin_DoAction()
{
	Super::Begin_DoAction();

	// #. 1. Check
	CheckFalse(bExist);
	bExist = false;

	// #. 2. Stop Animation
	OwnerCharacter->StopAnimMontage();

	// #. 3. Increase Index
	Index++;

	// #. 4. Next Action
	const FDoActionData& data = Datas[Index];
	OwnerCharacter->PlayAnimMontage(data.AnimMontage, data.PlayRatio, data.StartSection);
	data.bCanMove ? Status->SetMove() : Status->SetStop();
}

void ACDoAction_Melee::End_DoAction()
{
	Super::End_DoAction();

	// #. Stop Combo

	const FDoActionData& data = Datas[Index];
	OwnerCharacter->StopAnimMontage(data.AnimMontage);

	State->SetIdleMode();
	Status->SetMove();

	Index = 0;
}

void ACDoAction_Melee::OnAttachmentBeginOverlap(ACharacter * InAttacker, AActor * InAttackCauser, ACharacter * InOtherCharacter)
{
	// CLog::Log(InOtherCharacter->GetName());

	Super::OnAttachmentBeginOverlap(InAttacker, InAttackCauser, InOtherCharacter);
	CheckNull(InOtherCharacter);
	
	for (const ACharacter* other : HittedCharacters)
	{
		if (InOtherCharacter == other)
			return;
	}

	HittedCharacters.Add(InOtherCharacter);

	// #. Hit Effect Particle
	UParticleSystem* hitEffect = Datas[Index].Effect;
	if (!!hitEffect)
	{
		FTransform transform = Datas[Index].EffectTransform;
		transform.AddToTranslation(InOtherCharacter->GetActorLocation());

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), hitEffect, transform);
	}

	// #. Slow Motion
	// UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 0.1f);
	float hitStop = Datas[Index].HitStop;
	if (FMath::IsNearlyZero(hitStop) == false)
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1e-3f);
		UKismetSystemLibrary::K2_SetTimer(this, "RestoreDilation", hitStop * 1e-3f, false);
	}

	// #. Shake Camera
	TSubclassOf<UCameraShake> shake = Datas[Index].ShakeClass;
	if (shake != NULL)
	{
		UGameplayStatics::GetPlayerController(GetWorld(), 0)
						->PlayerCameraManager
						->PlayCameraShake(shake);
	}

	FDamageEvent e;
	InOtherCharacter->TakeDamage(Datas[Index].Power, e, OwnerCharacter->GetController(), this);
}

void ACDoAction_Melee::OnAttachmentEndOverlap(ACharacter * InAttacker, AActor * InAttackCauser, ACharacter * InOtherCharacter)
{
}

void ACDoAction_Melee::OnAttachmentCollision()
{
}

void ACDoAction_Melee::OffAttachmentCollision()
{
	HittedCharacters.Empty();
}

void ACDoAction_Melee::RestoreDilation()
{
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.0f);
}
