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

}



