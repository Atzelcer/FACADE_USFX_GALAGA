// Fill out your copyright notice in the Description page of Project Settings.


#include "P_F_Nivel_Dificultad_NORMAL_CH.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"


AP_F_Nivel_Dificultad_NORMAL_CH::AP_F_Nivel_Dificultad_NORMAL_CH()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AP_F_Nivel_Dificultad_NORMAL_CH::BeginPlay()
{
	Super::BeginPlay();
	// Instanciar las fábricas
	FABRICA_NAVES_B = NewObject<AP_FM_FABRICA_NAVES_P>();
	FABRICA_OBSTACULOS_B = NewObject<AP_FM_FABRICA_OBSTACULOS_01>();

	// Inicializar temporizadores
	TiempoDesdeUltimaNave = 0.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloNave = 3.0f;  // Intervalo más corto para más desafío
	IntervaloObstaculo = 8.0f;  // Obstáculos menos frecuentes que las naves
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Generación de naves basada en intervalos
	TiempoDesdeUltimaNave += DeltaTime;
	if (TiempoDesdeUltimaNave >= IntervaloNave) {
		TiempoDesdeUltimaNave = 0.0f;
		// Generar diferentes tipos de naves
		NAVE_ENEMIGA_B = FABRICA_NAVES_B ->Crear_Nave(FString::Printf(TEXT("Nave_Enemiga_%d"), FMath::RandRange(1, 5)));
	}

	// Generación de obstáculos basada en intervalos
	TiempoDesdeUltimoObstaculo += DeltaTime;
	if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
		TiempoDesdeUltimoObstaculo = 0.0f;
		// Generar uno de los tres tipos de obstáculos al azar
		FString TipoObstaculo;
		switch (FMath::RandRange(1, 3)) {
		case 1: TipoObstaculo = TEXT("Asteroide"); break;
		case 2: TipoObstaculo = TEXT("Cometa"); break;
		case 3: TipoObstaculo = TEXT("Mina_Galactica"); break;
		}
		OBSTACULOS_ESPACIALES_B = FABRICA_OBSTACULOS_B->Crear_Obstaculos(TipoObstaculo);
	}

}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_B != nullptr) 
	{	
		NAVE_ENEMIGA_B->Set_Velocidad_Nave(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la vida de la nave"));
	}
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->Set_Velocidad_Nave(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando la velocidad de la nave"));
	}
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_B != nullptr)
	{
		NAVE_ENEMIGA_B->Set_Danio_Disparo(Danio_Disparo);
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se ha mando el danio de disparo de la nave"));
	}
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr) 
	{
		OBSTACULOS_ESPACIALES_B->Set_Vida_Obstaculos(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la vida del obstaculo"));
	}
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Danio_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->Set_Velocidad_Obstaculos(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando la velocidad del obstaculo"));
	}
}

void AP_F_Nivel_Dificultad_NORMAL_CH::Configurar_Velocidad_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_B != nullptr)
	{
		OBSTACULOS_ESPACIALES_B->Set_Danio_Obstaculos(Danio);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, TEXT("No se mando el danio del obstaculo"));
	}
}
