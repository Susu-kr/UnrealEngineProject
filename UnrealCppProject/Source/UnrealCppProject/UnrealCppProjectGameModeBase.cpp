// Copyright Epic Games, Inc. All Rights Reserved.


#include "UnrealCppProjectGameModeBase.h"
#include "Global.h"

AUnrealCppProjectGameModeBase::AUnrealCppProjectGameModeBase()
{
	CHelpers::GetClass<APawn>(&DefaultPawnClass, L"Blueprint'/Game/BluePrint/BP_CPlayer.BP_CPlayer_C'");
}
