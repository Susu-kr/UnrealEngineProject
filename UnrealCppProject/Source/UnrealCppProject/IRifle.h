#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IRifle.generated.h"

UINTERFACE(MinimalAPI)
class UIRifle : public UInterface
{
	GENERATED_BODY()
};

class UNREALCPPPROJECT_API IIRifle
{
	GENERATED_BODY()

public:
	virtual class ACRifle* GetRifle() = 0;

};
