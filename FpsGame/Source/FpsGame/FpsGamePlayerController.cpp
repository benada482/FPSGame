// Copyright Epic Games, Inc. All Rights Reserved.


#include "FpsGamePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "FpsGameCameraManager.h"

AFpsGamePlayerController::AFpsGamePlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AFpsGameCameraManager::StaticClass();
}

void AFpsGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
