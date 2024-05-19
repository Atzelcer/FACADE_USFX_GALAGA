// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_FABRICA_GENERAL_P.h"
#include "P_FM_FABRICA_NAVES_P.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_FM_FABRICA_NAVES_P : public AP_FM_FABRICA_GENERAL_P
{
	GENERATED_BODY()


public:

	// metodo para la creacion de las naves
	virtual ANAVE_ENEMIGA_P* Crear_Nave(FString Nave_Identificador) override;
};
