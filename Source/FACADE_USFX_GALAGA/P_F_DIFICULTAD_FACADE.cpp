// Fill out your copyright notice in the Description page of Project Settings.


#include "P_F_DIFICULTAD_FACADE.h"
#include "P_F_Nivel_Dificultad_FACIL_CH.h"

#include "P_F_Nivel_Dificultad_NORMAL_CH.h"

#include "P_F_Nivel_Dificultad_DIFICIL_CH.h"

// Sets default values
AP_F_DIFICULTAD_FACADE::AP_F_DIFICULTAD_FACADE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_F_DIFICULTAD_FACADE::BeginPlay()
{
	Super::BeginPlay();
	// Inicializar o buscar instancias de las clases de dificultad
	NivelFacil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_FACIL_CH>();
	NivelNormal = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_NORMAL_CH>();
	NivelDificil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_DIFICIL_CH>();
}

// Called every frame
void AP_F_DIFICULTAD_FACADE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_F_DIFICULTAD_FACADE::ActivateFacilMode()
{
    // Asegurarse de que las instancias de otros niveles estén desactivadas o destruidas
    if (NivelNormal)
    {
        NivelNormal->Destroy();
        NivelNormal = nullptr;
    }
    if (NivelDificil)
    {
        NivelDificil->Destroy();
        NivelDificil = nullptr;
    }

    // Asegurarse de que la instancia del nivel fácil está activa
    if (!NivelFacil)
    {
        NivelFacil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_FACIL_CH>();
    }

    // Configurar directamente cada aspecto de las naves y obstáculos
    NivelFacil->Configurar_Vida_Naves(VidaFacil);
    NivelFacil->Configurar_Velocidad_Naves(VelocidadFacil);
    NivelFacil->Configurar_Danio_Disparo_Naves(DanioDisparoFacil);
    NivelFacil->Configurar_Vida_Obstaculos(VidaObstaculosFacil);
    NivelFacil->Configurar_Danio_Obstaculos(DanioObstaculosFacil);
    NivelFacil->Configurar_Velocidad_Obstaculos(VelocidadObstaculosFacil);
}

void AP_F_DIFICULTAD_FACADE::ActivateNormalMode()
{
    // Destruir instancias de otros niveles
    if (NivelFacil)
    {
        NivelFacil->Destroy();
        NivelFacil = nullptr;
    }
    if (NivelDificil)
    {
        NivelDificil->Destroy();
        NivelDificil = nullptr;
    }

    // Asegurarse de que la instancia del nivel normal está activa
    if (!NivelNormal)
    {
        NivelNormal = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_NORMAL_CH>();
    }
    NivelNormal->Configurar_Vida_Naves(VidaNormal);
    NivelNormal->Configurar_Velocidad_Naves(VelocidadNormal);
    NivelNormal->Configurar_Danio_Disparo_Naves(DanioDisparoNormal);
    NivelNormal->Configurar_Vida_Obstaculos(VidaObstaculosNormal);
    NivelNormal->Configurar_Danio_Obstaculos(DanioObstaculosNormal);
    NivelNormal->Configurar_Velocidad_Obstaculos(VelocidadObstaculosNormal);

}


void AP_F_DIFICULTAD_FACADE::ActivateDificilMode()
{
    // Destruir instancias de otros niveles
    if (NivelFacil)
    {
        NivelFacil->Destroy();
        NivelFacil = nullptr;
    }
    if (NivelNormal)
    {
        NivelNormal->Destroy();
        NivelNormal = nullptr;
    }

    // Asegurarse de que la instancia del nivel difícil está activa
    if (!NivelDificil)
    {
        NivelDificil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_DIFICIL_CH>();
    }

    NivelDificil->Configurar_Vida_Naves(VidaDificil);
    NivelDificil->Configurar_Velocidad_Naves(VelocidadDificil);
    NivelDificil->Configurar_Danio_Disparo_Naves(DanioDisparoDificil);
    NivelDificil->Configurar_Vida_Obstaculos(VidaObstaculosDificil);
    NivelDificil->Configurar_Danio_Obstaculos(DanioObstaculosDificil);
    NivelDificil->Configurar_Velocidad_Obstaculos(VelocidadObstaculosDificil);
}

