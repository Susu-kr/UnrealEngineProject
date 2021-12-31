#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Characters/ICharacter.h"
#include "CPlayer.generated.h"

UCLASS()
class UNREALCPPPROJECT2_API ACPlayer : public ACharacter, public IICharacter
{
	GENERATED_BODY()

public:
	ACPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;
	class UCUserWidget_ActionList* ActionList;

	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleDefaultsOnly)
		class UCOptionComponent* Option;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;

	UPROPERTY(VisibleDefaultsOnly)
		class UCActionComponent* Action;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(VisibleAnywhere) // VisibleDefaultsOnly
		class UCTargetComponent* Target;


	UPROPERTY(VisibleDefaultsOnly)
		TSubclassOf<class UCUserWidget_ActionList> ActionListClass;
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

	void OnMoveForward(float InAxis);
	void OnMoveRight(float InAxis);
	void OnHorizontalLook(float InAxis);
	void OnVerticalLook(float InAxis);
	void OnAvoid();
	void OnFist();
	void OnOneHand();
	void OnTwoHand();
	void OnWarp();
	void OnFireStorm();
	void OnIceBall();
	void OnTarget();
	void OnTargetLeft();
	void OnTargetRight();
	void OnAim();
	void OffAim();
	void OnDoAction();
	void OnViewActionList();
	void OffViewActionList();

	void Begin_Roll();
	void Begin_Backstep();

public:
	void End_Roll();
	void End_Backstep();

	virtual void ChangeColor(FLinearColor InColor) override;

	FORCEINLINE class UCUserWidget_ActionList* GetActionList() { return ActionList; }
};
