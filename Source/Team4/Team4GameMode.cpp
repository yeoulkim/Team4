// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team4GameMode.h"
#include "Team4Character.h"
#include "UObject/ConstructorHelpers.h"

ATeam4GameMode::ATeam4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

// 주석 추가합니다
