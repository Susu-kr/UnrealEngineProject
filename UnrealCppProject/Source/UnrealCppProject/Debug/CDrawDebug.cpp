#include "CDrawDebug.h"
#include "Global.h"
#include "Engine.h"

ACDrawDebug::ACDrawDebug()
{
	PrimaryActorTick.bCanEverTick = true;

	InitLocation[0] = FVector::ZeroVector;
	InitLocation[1] = FVector(0, 400, 0);
	InitLocation[2] = FVector(0, 1000, 0);
	InitLocation[3] = FVector(0, 1600, 0);
	InitLocation[4] = FVector(300, 1000, 0);

	Box = FBox(FVector(-50, -100, -50), FVector(50, 100, 50));
	Transform.SetLocation(FVector(200, 1600, 0));
}

void ACDrawDebug::BeginPlay()
{
	Super::BeginPlay();
	for (int32 i = 0; i < 5; i++)
	{
		Location[i] = InitLocation[i] + GetActorLocation();
	}
	DrawDebugBox(GetWorld(), Location[0] + Box.GetCenter(), Box.GetExtent(), FColor::Red, true);
}

void ACDrawDebug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}