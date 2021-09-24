// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoFirstGameMode.h"
#include "DemoFirstCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoFirstGameMode::ADemoFirstGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
