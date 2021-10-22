#include "CLogActor.h"
#include "Global.h"

// Sets default values
ACLogActor::ACLogActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACLogActor::BeginPlay()
{
	Super::BeginPlay();
	
	CLog::Print(10);
	CLog::Print(20, 1);
	CLog::Print(30, 2, 20.0f);
	CLog::Print(40, 3, 2.0f);
	CLog::Print("UnrealCppProject");
	CLog::Print(GetActorLocation());
	CLog::Print(GetActorRotation());
	CLog::Log(33);
	CLog::Log(PI);
	CLog::Log("UnrealCppProject");
	CLog::Log(GetActorLocation());
	CLog::Log(GetActorRotation());
	CLog::Log(this);
	/*CLog::Log(__FUNCDNAME__, __LINE__);*/
	PrintLine();
}

// Called every frame
void ACLogActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Time += DeltaTime;
	CLog::Print(Time, 4);
}