// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "P_F_Nivel_Dificultad_CA.h"
#include "P_F_Nivel_Dificultad_DIFICIL_CH.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API AP_F_Nivel_Dificultad_DIFICIL_CH : public AP_F_Nivel_Dificultad_CA
{
	GENERATED_BODY()

public:

	AP_F_Nivel_Dificultad_DIFICIL_CH();

protected:

	virtual void BeginPlay() override;

public:

	class ANAVE_ENEMIGA_P* NAVE_ENEMIGA_C;

	class AOBSTACULOS_ESPACIALES_P* OBSTACULOS_ESPACIALES_C;

	class AP_FM_FABRICA_OBSTACULOS_01* FABRICA_OBSTACULOS_C;

	class AP_FM_FABRICA_NAVES_P* FABRICA_NAVES_C;


	//temporizadores
	float TiempoDesdeUltimaNave;
	float TiempoDesdeUltimoObstaculo;
	float IntervaloNave;
	float IntervaloObstaculo;



	virtual void Tick(float DeltaTime) override;

	// Implementación de métodos virtuales puros
	virtual void Configurar_Vida_Naves(float Vida) override;

	virtual void Configurar_Velocidad_Naves(float Velocidad) override;

	virtual void Configurar_Danio_Disparo_Naves(float Danio_Disparo) override;

	virtual void Configurar_Vida_Obstaculos(float Vida) override;

	virtual void Configurar_Danio_Obstaculos(float Velocidad) override;

	virtual void Configurar_Velocidad_Obstaculos(float Danio) override;

};
