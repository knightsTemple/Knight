// Copyright Epic Games, Inc. All Rights Reserved.

#include "KnightGameMode.h"
#include "KnightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKnightGameMode::AKnightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
