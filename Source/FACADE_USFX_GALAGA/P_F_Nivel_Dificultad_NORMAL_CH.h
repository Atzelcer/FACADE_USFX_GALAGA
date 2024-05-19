// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_F_Nivel_Dificultad_CA.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"
#include "P_F_Nivel_Dificultad_NORMAL_CH.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API AP_F_Nivel_Dificultad_NORMAL_CH : public AP_F_Nivel_Dificultad_CA
{
	GENERATED_BODY()


public:

	AP_F_Nivel_Dificultad_NORMAL_CH();

protected:
	
	virtual void BeginPlay() override;

public:


	class AP_FM_FABRICA_OBSTACULOS_01* FABRICA_OBSTACULOS_B;

	class AP_FM_FABRICA_NAVES_P* FABRICA_NAVES_B;

	//temporizadores
	float TiempoDesdeUltimaNave;
	float TiempoDesdeUltimoObstaculo;
	float IntervaloNave;  
	float IntervaloObstaculo;

	virtual void Tick(float DeltaTime) override;
	

public:

	// Variables de configuración actual
	float CurrentVidaNaves;
	float CurrentVelocidadNaves;
	float CurrentDanioDisparoNaves;
	float CurrentVidaObstaculos;
	float CurrentDanioObstaculos;
	float CurrentVelocidadObstaculos;


public:

	FString SeleccionarTipoDeNave() const;
	FString SeleccionarTipoDeObstaculo() const;

	// Añade los tipos de retorno a las funciones.
	ANAVE_ENEMIGA_P* GenerarYConfigurarNave();
	AOBSTACULOS_ESPACIALES_P* GenerarYConfigurarObstaculo();


	// Métodos de configuración
	void Configurar_Vida_Naves(ANAVE_ENEMIGA_P* Nave, float Vida);
	void Configurar_Velocidad_Naves(ANAVE_ENEMIGA_P* Nave, float Velocidad);
	void Configurar_Danio_Disparo_Naves(ANAVE_ENEMIGA_P* Nave, float Danio_Disparo);


	void Configurar_Vida_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Vida);
	void Configurar_Danio_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Danio);
	void Configurar_Velocidad_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Velocidad);

	void ConfigurarTodo(float VidaNaves, float VelocidadNaves, float DanioDisparoNaves, float VidaObstaculos, float DanioObstaculos, float VelocidadObstaculos);
};


