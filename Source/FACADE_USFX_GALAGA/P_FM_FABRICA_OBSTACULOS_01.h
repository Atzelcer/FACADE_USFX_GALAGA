// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_FM_FABRICA_OBSTACULOS.h"
#include "P_FM_FABRICA_OBSTACULOS_01.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API AP_FM_FABRICA_OBSTACULOS_01 : public AP_FM_FABRICA_OBSTACULOS
{
	GENERATED_BODY()

public:
	virtual AOBSTACULOS_ESPACIALES_P* Crear_Obstaculos(FString Obstaculo_Identificador) override;
};
