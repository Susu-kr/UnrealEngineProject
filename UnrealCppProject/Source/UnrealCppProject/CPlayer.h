#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IRifle.h"

#include "CPlayer.generated.h"

UCLASS()
class UNREALCPPPROJECT_API ACPlayer : public ACharacter, public IIRifle
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	ACPlayer();

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);

	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);

	void OnRunning();
	void OffRunning();

	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

	// Add Rifle
	class ACRifle* Rifle;
	void OnRifle();

public:
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

	// Add Rifle
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }
};