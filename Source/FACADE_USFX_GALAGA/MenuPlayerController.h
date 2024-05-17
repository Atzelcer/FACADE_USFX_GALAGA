// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API AMenuPlayerController : public APlayerController
{
	GENERATED_BODY()


protected:
	AMenuPlayerController();

	// Vincula las acciones de apertura del menu
	virtual void SetupInputComponent() override;


	// Metodo para abrir el menu
	void OpenMenu();

	
};
