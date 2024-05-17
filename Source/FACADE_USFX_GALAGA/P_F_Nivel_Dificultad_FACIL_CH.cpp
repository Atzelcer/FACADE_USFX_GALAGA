// Fill out your copyright notice in the Description page of Project Settings.


#include "P_F_Nivel_Dificultad_FACIL_CH.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"


AP_F_Nivel_Dificultad_FACIL_CH::AP_F_Nivel_Dificultad_FACIL_CH()
{
	PrimaryActorTick.bCanEverTick = true;
	NivelActual = 1;
}


void AP_F_Nivel_Dificultad_FACIL_CH::BeginPlay()
{
	Super::BeginPlay();

	// Instanciar la fábrica
	FABRICA_NAVES = NewObject<AP_FM_FABRICA_NAVES_P>();

	// Inicializar temporizador para generación de naves
	TiempoDesdeUltimaNave = 0.0f;
	IntervaloNave = 5.0f;  // Intervalo en segundos para generar una nueva nave
}


void AP_F_Nivel_Dificultad_FACIL_CH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Actualizar temporizador para naves
		TiempoDesdeUltimaNave += DeltaTime;
	if (TiempoDesdeUltimaNave >= IntervaloNave && NivelActual <= 3) {
		TiempoDesdeUltimaNave = 0.0f;

		FString NaveID;
		switch (NivelActual) {
		case 1:
			NaveID = TEXT("Nave_Enemiga_01");
			break;
		case 2:
			NaveID = TEXT("Nave_Enemiga_02");
			break;
		case 3:
			NaveID = TEXT("Nave_Enemiga_03");
			break;
		}

		// Generar la nave correspondiente al nivel actual
		NAVE_ENEMIGA_A = FABRICA_NAVES->Crear_Nave(NaveID);
	}

	// Incrementar nivel después de cierto tiempo o eventos, este es un ejemplo básico
	TiempoNivel += DeltaTime;
	if (NivelActual < 3 && TiempoNivel >= 20.0f) {  // Incrementar nivel cada 60 segundos hasta el nivel 3
		NivelActual++;
		TiempoNivel = 0;  // Resetear contador de tiempo para el siguiente nivel
	}
}


void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Vida_Naves(float Vida)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		NAVE_ENEMIGA_A->Set_Vida(Vida);
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la vida de la nave"));
	}
}


void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Velocidad_Naves(float Velocidad)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		NAVE_ENEMIGA_A->Set_Velocidad_Nave(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la velocidad de la nave"));
	}
}


void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Danio_Disparo_Naves(float Danio_Disparo)
{
	if (NAVE_ENEMIGA_A != nullptr)
	{
		NAVE_ENEMIGA_A->Set_Danio_Disparo(Danio_Disparo);

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando el danio de disparo de la nave"));

	}
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Vida_Obstaculos(float Vida)
{
	if (OBSTACULOS_ESPACIALES_A != nullptr)
	{
		OBSTACULOS_ESPACIALES_A->Set_Vida_Obstaculos(Vida);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la vida del obstaculo"));
	}
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Danio_Obstaculos(float Velocidad)
{
	if (OBSTACULOS_ESPACIALES_A != nullptr)
	{
		OBSTACULOS_ESPACIALES_A->Set_Danio_Obstaculos(Velocidad);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando el danio del obstaculo"));

	}
}


void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Velocidad_Obstaculos(float Danio)
{
	if (OBSTACULOS_ESPACIALES_A)
	{
		OBSTACULOS_ESPACIALES_A->Set_Danio_Obstaculos(Danio);
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Cyan, TEXT("No se mando la velocidad del obstaculo"));
	}
}
