// Copyright Epic Games, Inc. All Rights Reserved.

#include "GP4_P01_ClimbingGameMode.h"
#include "GP4_P01_ClimbingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGP4_P01_ClimbingGameMode::AGP4_P01_ClimbingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
