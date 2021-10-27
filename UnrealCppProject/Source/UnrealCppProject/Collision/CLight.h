#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CLight.generated.h"

UCLASS()
class UNREALCPPPROJECT_API ACLight : public AActor
{
	GENERATED_BODY()
	
public:	
	ACLight();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Scene;

	UPROPERTY(VisibleDefaultsOnly)
		class UTextRenderComponent* Text;

	UPROPERTY(VisibleDefaultsOnly)
		class UPointLightComponent* Light;

	UFUNCTION()
		void OnLight();

	UFUNCTION()
		void OffLight();
};
