// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlowerDiary_web3GameMode.h"
#include "FlowerDiary_web3Character.h"
#include "UObject/ConstructorHelpers.h"

AFlowerDiary_web3GameMode::AFlowerDiary_web3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
