// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	virtual void Configurar_Vida_Naves(float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Naves, );

	virtual void Configurar_Velocidad_Naves(float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Naves, );

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Disparo_Naves, );



	// Métodos virtuales puros para configurar los obstáculos
	virtual void Configurar_Vida_Obstaculos(float Vida) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Vida_Obstaculos, );

	virtual void Configurar_Danio_Obstaculos(float Velocidad) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Danio_Obstaculos, );

	virtual void Configurar_Velocidad_Obstaculos(float Danio) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::Configurar_Velocidad_Obstaculos, );


	//// Método virtual puro para configurar los parámetros de naves y obstáculos
	//virtual void ConfigurarParametros(float vidaNaves, float velocidadNaves, float danioDisparoNaves, float vidaObstaculos, float danioObstaculos, float velocidadObstaculos) PURE_VIRTUAL(AP_F_Nivel_Dificultad_CA::ConfigurarParametros, );

};
