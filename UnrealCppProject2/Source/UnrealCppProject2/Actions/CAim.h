#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/TimelineComponent.h"
#include "CAim.generated.h"

UCLASS()
class UNREALCPPPROJECT2_API UCAim : public UObject
{
	GENERATED_BODY()
	
public:
	UCAim();

	void BeginPlay(class ACharacter* InCharacter);

	void OnAim();
	void OffAim();

	void Tick(float DeltaTime);

	FORCEINLINE bool IsAvailable() { return SpringArm != NULL && Camera != NULL; }
	FORCEINLINE bool InZoom() { return bInZoom; }
	
private:
	class ACharacter*			OwnerCharacter;
	class UCStateComponent*		State;
	class USpringArmComponent*	SpringArm;
	class UCameraComponent*		Camera;
	class UCurveFloat*			Curve;
	class ACHUD*				Hud;

	bool bInZoom;
	FTimeline Timeline;
	FOnTimelineFloat TimelineFloat;

	UFUNCTION()
		void Zooming(float Value);
};
