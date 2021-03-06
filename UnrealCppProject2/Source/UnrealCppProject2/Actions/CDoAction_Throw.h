#pragma once

#include "CoreMinimal.h"
#include "Actions/CDoAction.h"
#include "CDoAction_Throw.generated.h"

UCLASS()
class UNREALCPPPROJECT2_API ACDoAction_Throw : public ACDoAction
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void DoAction() override;
	virtual void Begin_DoAction() override;
	virtual void End_DoAction() override;

	// #. Aim
	virtual void OnAim() override;
	virtual void OffAim() override;

private:
	// #. Aim
	class UCAim* Aim;

	UFUNCTION()
		void OnThrowBeginOverlap(FHitResult InHitResult);
};
