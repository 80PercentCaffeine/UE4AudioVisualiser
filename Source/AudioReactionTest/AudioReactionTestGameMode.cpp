// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AudioReactionTestGameMode.h"
#include "AudioReactionTestHUD.h"
#include "AudioReactionTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAudioReactionTestGameMode::AAudioReactionTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAudioReactionTestHUD::StaticClass();
}
