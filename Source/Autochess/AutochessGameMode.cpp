// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutochessGameMode.h"
#include "AutochessPlayerController.h"
#include "AutochessCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutochessGameMode::AAutochessGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAutochessPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}