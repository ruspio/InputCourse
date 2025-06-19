// Copyright Epic Games, Inc. All Rights Reserved.

#include "InputCourseGameMode.h"
#include "InputCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInputCourseGameMode::AInputCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
