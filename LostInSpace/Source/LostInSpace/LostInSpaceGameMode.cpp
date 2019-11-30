// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LostInSpaceGameMode.h"
#include "LostInSpaceHUD.h"
#include "LostInSpaceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostInSpaceGameMode::ALostInSpaceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALostInSpaceHUD::StaticClass();
}
