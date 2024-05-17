// Copyright Epic Games, Inc. All Rights Reserved.

#include "FACADE_USFX_GALAGAGameMode.h"
#include "FACADE_USFX_GALAGAPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "MenuPlayerController.h"
#include "P_F_DIFICULTAD_FACADE.h"
#include "Kismet/GameplayStatics.h"
#include "MenuHUD.h"

AFACADE_USFX_GALAGAGameMode::AFACADE_USFX_GALAGAGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFACADE_USFX_GALAGAPawn::StaticClass();

	//Para controlar las entradas del jugador con la interfaz del menu
	PlayerControllerClass = AMenuPlayerController::StaticClass();

	// use our custom HUD class
	HUDClass = AMenuHUD::StaticClass();
}

void AFACADE_USFX_GALAGAGameMode::BeginPlay()
{
	Super::BeginPlay();
	// Crea el Facade si no existe
	if (!DifficultyFacade)
	{
		DifficultyFacade = GetWorld()->SpawnActor<AP_F_DIFICULTAD_FACADE>();
		if (DifficultyFacade)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("[GameMode] Facade creado y configurado correctamente."));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] Error al crear el Facade."));
		}
	}
}


void AFACADE_USFX_GALAGAGameMode::ChangeDifficulty(int DifficultyLevel)
{
	if (!DifficultyFacade)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[GameMode] DifficultyFacade no está inicializado."));
		return;
	}

	switch (DifficultyLevel)
	{
	case 1:
		DifficultyFacade->ActivateFacilMode();
		break;
	case 2:
		DifficultyFacade->ActivateNormalMode();
		break;
	case 3:
		DifficultyFacade->ActivateDificilMode();
		break;
	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("[GameMode] Nivel de dificultad inválido: %d"), DifficultyLevel));
		break;
	}
}

