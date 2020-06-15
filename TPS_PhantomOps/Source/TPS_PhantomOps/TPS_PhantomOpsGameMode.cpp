// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS_PhantomOpsGameMode.h"
#include "TPS_PhantomOpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPS_PhantomOpsGameMode::ATPS_PhantomOpsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
