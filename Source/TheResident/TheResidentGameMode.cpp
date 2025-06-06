// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheResidentGameMode.h"
#include "TheResidentCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheResidentGameMode::ATheResidentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
