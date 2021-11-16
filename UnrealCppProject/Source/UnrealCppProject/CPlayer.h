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

protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		class UCameraComponent* Camera;

private:
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

	// #. Aim
	void OnAim();
	void OffAim();

public:
	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

protected:
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomIn();

	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomOut();
public:
	// Add Rifle
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }
};