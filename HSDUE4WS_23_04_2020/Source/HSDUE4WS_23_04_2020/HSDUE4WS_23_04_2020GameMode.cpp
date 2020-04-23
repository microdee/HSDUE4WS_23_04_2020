// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HSDUE4WS_23_04_2020GameMode.h"
#include "HSDUE4WS_23_04_2020Character.h"
#include "UObject/ConstructorHelpers.h"

AHSDUE4WS_23_04_2020GameMode::AHSDUE4WS_23_04_2020GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
