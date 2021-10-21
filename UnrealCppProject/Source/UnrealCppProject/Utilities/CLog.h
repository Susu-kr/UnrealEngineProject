#pragma once

#include "CoreMinimal.h"

class UNREALCPPPROJECT_API CLog
{
public:
	static void Print(int32 InValue, int32 InKey = -1,
		float Duration = 10.0f,
		FColor inColor = FColor::Blue);

	static void Print(float& InValue, int32 InKey = -1,
		float Duration = 10.0f,
		FColor inColor = FColor::Blue);

	static void Print(const FString& InValue, int32 InKey = -1,
		float Duration = 10.0f,
		FColor inColor = FColor::Blue);

	static void Print(const FVector& InValue, int32 InKey = -1,
		float Duration = 10.0f,
		FColor inColor = FColor::Blue);

	static void Print(const FRotator& InValue, int32 InKey = -1,
		float Duration = 10.0f,
		FColor inColor = FColor::Blue);
};