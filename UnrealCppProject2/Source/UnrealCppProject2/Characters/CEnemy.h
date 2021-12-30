#pragma once

#include "CoreMinimal.h"
#include "Characters/ICharacter.h"
#include "Components/CStateComponent.h"
#include "GameFramework/Character.h"
#include "CEnemy.generated.h"

UCLASS()
class UNREALCPPPROJECT2_API ACEnemy : public ACharacter, public IICharacter
{
	GENERATED_BODY()

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStatusComponent* Status;

	UPROPERTY(VisibleDefaultsOnly)
		class UCStateComponent* State;

	UPROPERTY(VisibleDefaultsOnly)
		class UCActionComponent* Action;

	UPROPERTY(VisibleDefaultsOnly)
		class UCMontagesComponent* Montages;

	UPROPERTY(EditAnywhere, Category = "Hitted")
		float LaunchAmount = 100.0f;

	class AController* DamageInstigator;
	float DamageValue;

protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UWidgetComponent* NameWidget;

	UPROPERTY(VisibleDefaultsOnly)
		class UWidgetComponent* HealthWidget;

public:
	virtual void ChangeColor(FLinearColor InColor) override;
	float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

private:
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

	UFUNCTION()
		void RestoreColor();

	void Hitted();
	void Dead();

public:
	virtual void Begin_Dead() override;
	virtual void End_Dead() override;
};
