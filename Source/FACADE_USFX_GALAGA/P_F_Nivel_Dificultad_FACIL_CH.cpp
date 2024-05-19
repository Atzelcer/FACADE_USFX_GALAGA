// Fill out your copyright notice in the Description page of Project Settings.


#include "P_F_Nivel_Dificultad_FACIL_CH.h"
#include "NAVE_ENEMIGA_P.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "P_FM_FABRICA_NAVES_P.h"
#include "P_FM_FABRICA_OBSTACULOS_01.h"


AP_F_Nivel_Dificultad_FACIL_CH::AP_F_Nivel_Dificultad_FACIL_CH()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AP_F_Nivel_Dificultad_FACIL_CH::BeginPlay()
{
	Super::BeginPlay();

	FABRICA_NAVES_A = GetWorld()->SpawnActor<AP_FM_FABRICA_NAVES_P>(AP_FM_FABRICA_NAVES_P::StaticClass());
	FABRICA_OBSTACULOS_01 = GetWorld()->SpawnActor<AP_FM_FABRICA_OBSTACULOS_01>(AP_FM_FABRICA_OBSTACULOS_01::StaticClass());
	TiempoDesdeUltimaNave = 0.0f;
	IntervaloNave = 3.0f;
	TiempoDesdeUltimoObstaculo = 0.0f;
	IntervaloObstaculo = 8.0f;
}


void AP_F_Nivel_Dificultad_FACIL_CH::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TiempoDesdeUltimaNave += DeltaTime;
    if (TiempoDesdeUltimaNave >= IntervaloNave) {
        TiempoDesdeUltimaNave = 0.0f;
        GenerarYConfigurarNave();
    }

    TiempoDesdeUltimoObstaculo += DeltaTime;
    if (TiempoDesdeUltimoObstaculo >= IntervaloObstaculo) {
        TiempoDesdeUltimoObstaculo = 0.0f;
        GenerarYConfigurarObstaculo();
    }

}

ANAVE_ENEMIGA_P* AP_F_Nivel_Dificultad_FACIL_CH::GenerarYConfigurarNave()
{
    ANAVE_ENEMIGA_P* NuevaNave = FABRICA_NAVES_A->Crear_Nave(SeleccionarTipoDeNave());
    if (NuevaNave) {
        Configurar_Vida_Naves(NuevaNave, CurrentVidaNaves);
        Configurar_Velocidad_Naves(NuevaNave, CurrentVelocidadNaves);
        Configurar_Danio_Disparo_Naves(NuevaNave, CurrentDanioDisparoNaves);
    }
    return NuevaNave;
}

AOBSTACULOS_ESPACIALES_P* AP_F_Nivel_Dificultad_FACIL_CH::GenerarYConfigurarObstaculo()
{
    AOBSTACULOS_ESPACIALES_P* NuevoObstaculo = FABRICA_OBSTACULOS_01->Crear_Obstaculos(SeleccionarTipoDeObstaculo());
    if (NuevoObstaculo) {
        Configurar_Vida_Obstaculos(NuevoObstaculo, CurrentVidaObstaculos);
        Configurar_Danio_Obstaculos(NuevoObstaculo, CurrentDanioObstaculos);
        Configurar_Velocidad_Obstaculos(NuevoObstaculo, CurrentVelocidadObstaculos);
    }
    return NuevoObstaculo;
}

FString AP_F_Nivel_Dificultad_FACIL_CH::SeleccionarTipoDeNave() const
{
    int Tipo = FMath::RandRange(1, 2); // Selección aleatoria de tipo de nave
    switch (Tipo) {
    case 1: return TEXT("Nave_Enemiga_01");
    case 2: return TEXT("Nave_Enemiga_02");
    default: return TEXT("Nave_Enemiga_01");
    }
}

FString AP_F_Nivel_Dificultad_FACIL_CH::SeleccionarTipoDeObstaculo() const
{
    int Tipo = FMath::RandRange(1, 2); // Selección aleatoria de tipo de obstáculo
    switch (Tipo) {
    case 1: return TEXT("");
	case 2: return TEXT("");
    default: return TEXT("");
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::ConfigurarTodo(float VidaNaves, float VelocidadNaves, float DanioDisparoNaves, float VidaObstaculos, float DanioObstaculos, float VelocidadObstaculos)
{
    // Actualiza las variables de configuración
    CurrentVidaNaves = VidaNaves;
    CurrentVelocidadNaves = VelocidadNaves;
    CurrentDanioDisparoNaves = DanioDisparoNaves;
    CurrentVidaObstaculos = VidaObstaculos;
    CurrentDanioObstaculos = DanioObstaculos;
    CurrentVelocidadObstaculos = VelocidadObstaculos;
}



// Implementación de métodos de configuración

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Vida_Naves(ANAVE_ENEMIGA_P* Nave, float Vida) {
    if (Nave) {

		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, TEXT("Se paso la vida de la nave "));
        Nave->Set_Vida(Vida);
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Velocidad_Naves(ANAVE_ENEMIGA_P* Nave, float Velocidad) {
    if (Nave) {
        Nave->Set_Velocidad_Nave(Velocidad);
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Danio_Disparo_Naves(ANAVE_ENEMIGA_P* Nave, float Danio_Disparo) {
    if (Nave) {
        Nave->Set_Danio_Disparo(Danio_Disparo);
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Vida_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Vida) {
    if (Obstaculo) {
        Obstaculo->Set_Vida_Obstaculos(Vida);
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Danio_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Danio) {
    if (Obstaculo) {
        Obstaculo->Set_Danio_Obstaculos(Danio);
    }
}

void AP_F_Nivel_Dificultad_FACIL_CH::Configurar_Velocidad_Obstaculos(AOBSTACULOS_ESPACIALES_P* Obstaculo, float Velocidad) {
    if (Obstaculo) {
        Obstaculo->Set_Velocidad_Obstaculos(Velocidad);
    }
}

