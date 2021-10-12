#include "CProperty.h"

ACProperty::ACProperty()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACProperty::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACProperty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

