// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NAVE_ENEMIGA_P.h"
#include "P_FM_FABRICA_GENERAL_P.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_FM_FABRICA_GENERAL_P : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AP_FM_FABRICA_GENERAL_P();

public:

	ANAVE_ENEMIGA_P* Get_Nave(FString Identificador);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//METODO QUE NOS AYUDA A OBTENER LOS IDENTIFICADORES DE LAS NAVES PARA LUEGO LLEGAR A CREALAS A CADA UNO DE ESTAS
	virtual ANAVE_ENEMIGA_P* Crear_Nave(FString Nave_Identificador) PURE_VIRTUAL(AP_FM_FABRICA_GENERAL_P::Crear_Nave, return nullptr;);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
