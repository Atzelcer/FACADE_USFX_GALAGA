// Fill out your copyright notice in the Description page of Project Settings.


#include "P_F_Nivel_Dificultad_DIFICIL_CH.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"



AP_F_Nivel_Dificultad_DIFICIL_CH::AP_F_Nivel_Dificultad_DIFICIL_CH()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::BeginPlay()
{
	Super::BeginPlay();

	// Instanciar las fábricas
	FABRICA_NAVES_C = NewObject<AP_FM_FABRICA_NAVES_P>();
	FABRICA_OBSTACULOS_C = NewObject<AP_FM_FABRICA_OBSTACULOS_01>();

	// Inicializar temporizadores
	TiempoDesdeUltimaNave = 0.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloNave = 2.0f;  // Intervalo más corto para más desafío
	IntervaloObstaculo = 5.0f;  // Generación más frecuente de obstáculos
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Generación de naves basada en intervalos
	TiempoDesdeUltimaNave += DeltaTime;
	if (TiempoDesdeUltimaNave >= IntervaloNave) {
		TiempoDesdeUltimaNave = 0.0f;
		// Generar una nave aleatoria entre los tipos disponibles
		NAVE_ENEMIGA_C = FABRICA_NAVES_C->Crear_Nave(FString::Printf(TEXT("Nave_Enemiga_%d"), FMath::RandRange(1, 5)));
	}

	// Generación de obstáculos basada en intervalos
	TiempoDesdeUltimoObstaculo += DeltaTime;
	if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
		TiempoDesdeUltimoObstaculo = 0.0f;
		// Generar uno de los varios tipos de obstáculos al azar
		FString TipoObstaculo;
		switch (FMath::RandRange(1, 5)) {
		case 1: TipoObstaculo = TEXT("Asteroide"); break;
		case 2: TipoObstaculo = TEXT("Cometa"); break;
		case 3: TipoObstaculo = TEXT("Mina_Galactica"); break;
		case 4: TipoObstaculo = TEXT("Satelite"); break;
		case 5: TipoObstaculo = TEXT("Meteorito"); break;
		}
		OBSTACULOS_ESPACIALES_C = FABRICA_OBSTACULOS_C->Crear_Obstaculos(TipoObstaculo);
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_C != nullptr) 
	{
		NAVE_ENEMIGA_C->Set_Vida(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida de la nave"));
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_C != nullptr)
	{
		NAVE_ENEMIGA_C->Set_Velocidad_Nave(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad de la nave"));
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_C != nullptr) 
	{
		NAVE_ENEMIGA_C->Set_Danio_Disparo(Danio_Disparo);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio de disparo de la nave"));
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr)
	{
		OBSTACULOS_ESPACIALES_C->Set_Vida_Obstaculos(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Danio_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr)
	{
		OBSTACULOS_ESPACIALES_C->Set_Danio_Obstaculos(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio del obstaculo"));
	}
}

void AP_F_Nivel_Dificultad_DIFICIL_CH::Configurar_Velocidad_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_C != nullptr) 
	{
		OBSTACULOS_ESPACIALES_C->Set_Velocidad_Obstaculos(Danio);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad del obstaculo"));
	}
}
