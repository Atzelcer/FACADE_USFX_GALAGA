// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NAVE_ENEMIGA_P.h"  // Incluir si estas clases se utilizarán en la interfaz
#include "OBSTACULOS_ESPACIALES_P.h"  // Incluir si estas clases se utilizarán en la interfaz
#include "P_F_Nivel_Dificultad_CA.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_F_Nivel_Dificultad_CA : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AP_F_Nivel_Dificultad_CA();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;



	// Métodos virtuales puros para configurar las naves
	virtual void Configurar_Vida_Naves(ANAVE_ENEMIGA_P* Nave, float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Naves, );
	virtual void Configurar_Velocidad_Naves(ANAVE_ENEMIGA_P* Nave, float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Naves, );
	virtual void Configurar_Danio_Disparo_Naves(ANAVE_ENEMIGA_P* Nave, float Danio_Disparo) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Disparo_Naves, );

	// Métodos virtuales puros para configurar los obstáculos
	virtual void Configurar_Vida_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Obstaculos, );
	virtual void Configurar_Danio_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Danio) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Obstaculos, );
	virtual void Configurar_Velocidad_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Obstaculos, );
};