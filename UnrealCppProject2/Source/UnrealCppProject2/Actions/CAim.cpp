#include "CAim.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"

UCAim::UCAim()
{
	CHelpers::GetAsset<UCurveFloat>(&Curve, "CurveFloat'/Game/Actions/CAim.CAim'");
}

void UCAim::BeginPlay(ACharacter * InCharacter)
{
	OwnerCharacter = InCharacter;
	SpringArm = CHelpers::GetComponent<USpringArmComponent>(OwnerCharacter);
	Camera = CHelpers::GetComponent<UCameraComponent>(OwnerCharacter);
	State = CHelpers::GetComponent<UCStateComponent>(OwnerCharacter);

	TimelineFloat.BindUFunction(this, "Zooming");
	Timeline.AddInterpFloat(Curve, TimelineFloat);

	Timeline.SetPlayRate(100);
}

void UCAim::OnAim()
{
	CheckFalse(IsAvailable());
	CheckTrue(bInZoom);

	bInZoom = true;

	SpringArm->TargetArmLength = 100.0f;
	SpringArm->SocketOffset = FVector(0, 30, 10);
	SpringArm->bEnableCameraLag = false;

	Camera->FieldOfView = 45;

	// #. TimeLine Start
	Timeline.PlayFromStart();
}

void UCAim::OffAim()
{
	CheckFalse(IsAvailable());
	CheckFalse(bInZoom);

	bInZoom = false;

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SocketOffset = FVector(0, 0, 10);
	SpringArm->bEnableCameraLag = true;

	Camera->FieldOfView = 90;

	// #. TimeLine Reverse
	Timeline.ReverseFromEnd();
}

void UCAim::Tick(float DeltaTime)
{
	Timeline.TickTimeline(DeltaTime);
}

void UCAim::Zooming(float Value)
{
	//CLog::Print(Value, 0);
	Camera->FieldOfView = Value;
}
