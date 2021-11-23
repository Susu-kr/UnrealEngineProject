#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CRifle.generated.h"

UCLASS()
class UNREALCPPPROJECT_API ACRifle : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		FName HandSocket = "Hand_Rifle";

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		FName HolsterSocket = "Holster_Rifle";

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		class UAnimMontage* GrabMontage;

	UPROPERTY(VisibleDefaultsOnly, Category = "Rifle")
		class UAnimMontage* UngrabMontage;

	class ACharacter* OwnerCharacter;

	bool bEquipped;
	bool bEquipping;
	bool bAiming;
	bool bFiring;

public:
	static ACRifle* Spawn(class UWorld* InWorld, class ACharacter* InOwner);

	FORCEINLINE bool GetEquipped() { return bEquipped; }
	FORCEINLINE bool GetEquipping() { return bEquipping; }
	FORCEINLINE bool GetAiming() { return bAiming; }

	// #. Equip Rifle
	void Equip();
	void Begin_Equip();
	void End_Equip();

	// #. Unequip Rifle
	void Unequip();
	void Begin_Unequip();
	void End_Unequip();

	// #. Aiming
	void Begin_Aiming();
	void End_Aiming();

	// #. Firing
	void Begin_Fire();
	void Firing();
	void End_Fire();

public:	
	ACRifle();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
