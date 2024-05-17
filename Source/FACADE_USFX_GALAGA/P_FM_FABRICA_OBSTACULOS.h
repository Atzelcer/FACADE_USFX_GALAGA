// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_OBSTACULOS.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_FM_FABRICA_OBSTACULOS : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_FM_FABRICA_OBSTACULOS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AOBSTACULOS_ESPACIALES_P* Get_Nave(FString Identificador);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//METODO QUE NOS AYUDA A OBTENER LOS IDENTIFICADORES DE LAS NAVES PARA LUEGO LLEGAR A CREALAS A CADA UNO DE ESTAS
	virtual AOBSTACULOS_ESPACIALES_P* Crear_Obstaculos(FString Obstaculo_Identificador) PURE_VIRTUAL(AP_FM_FABRICA_OBSTACULOS::Crear_Obstaculos, return nullptr;);

};
