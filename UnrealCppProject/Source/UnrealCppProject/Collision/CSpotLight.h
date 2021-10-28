#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSpotLight.generated.h"

UCLASS()
class UNREALCPPPROJECT_API ACSpotLight : public AActor
{
	GENERATED_BODY()
	
public:	
	ACSpotLight();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;

	UPROPERTY(VisibleDefaultsOnly)
		class USpotLightComponent* SpotLights[3];

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UFUNCTION()
		void OnLightColor(int32 InIndex, FLinearColor InColor);
};
