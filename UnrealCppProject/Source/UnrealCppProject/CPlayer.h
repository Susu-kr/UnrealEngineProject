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

	UFUNCTION(BlueprintCallable)
		void ChangeColor(FLinearColor InColor);

	// #. Add Rifle
	FORCEINLINE class ACRifle* GetRifle() override { return Rifle; }

	// #. Shooting
	void GetLocationAndDirection(FVector& OutStart, FVector& OutEnd, FVector& OutDirection) override;
	void OnFocus() override;
	void OffFocus() override;
	void PlayCameraShake();
	
protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		class UCameraComponent* Camera;

	// #. Zoom in, Out
	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomIn();

	UFUNCTION(BlueprintImplementableEvent)
		void OnZoomOut();

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;


	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);

	void OnHorizontalLook(float Axis);
	void OnVerticalLook(float Axis);

	void OnRunning();
	void OffRunning();

	class UMaterialInstanceDynamic* BodyMaterial;
	class UMaterialInstanceDynamic* LogoMaterial;

	// #. Add Rifle
	class ACRifle* Rifle;
	void OnRifle();

	// #. Aim
	void OnAim();
	void OffAim();

	// #. CrossHair
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<class UCUserWidget_CrossHair> CrossHairClass;

	class UCUserWidget_CrossHair* CrossHair;

	// #. Fire
	void OnFire();
	void OffFire();

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
		TSubclassOf<class UCameraShake> CameraShakeClass;

};