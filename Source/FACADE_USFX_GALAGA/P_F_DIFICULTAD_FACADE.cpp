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

    VidaFacil = 100.0f;
    VelocidadFacil = 40.0f;
    DanioDisparoFacil = 20.0f;


    VidaObstaculosFacil = 50.0f;
    DanioObstaculosFacil = 15.0f;
    VelocidadObstaculosFacil = 100.0f;

    VidaNormal = 350.0f;
    VelocidadNormal = 80.0f;
    DanioDisparoNormal = 50.0f;


    VidaObstaculosNormal = 100.0f;
    DanioObstaculosNormal = 30.0f;
    VelocidadObstaculosNormal = 150.0f;

    VidaDificil = 500.0f;
    VelocidadDificil = 150.0f;
    DanioDisparoDificil = 100.0f;


    VidaObstaculosDificil = 150.0f;
    DanioObstaculosDificil = 75.0f;
    VelocidadObstaculosDificil = 200.0f;

}

// Called when the game starts or when spawned
void AP_F_DIFICULTAD_FACADE::BeginPlay()
{
	Super::BeginPlay();
	//// Inicializar o buscar instancias de las clases de dificultad
	//NivelFacil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_FACIL_CH>();
	//NivelNormal = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_NORMAL_CH>();
	//NivelDificil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_DIFICIL_CH>();
}

// Called every frame
void AP_F_DIFICULTAD_FACADE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_F_DIFICULTAD_FACADE::ActivateFacilMode()
{
    // Asegurarse de que la instancia del nivel fácil está activa
    if (!NivelFacil) {
        NivelFacil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_FACIL_CH>();
    }

    // Configurar directamente cada aspecto de las naves y obstáculos
    NivelFacil->ConfigurarTodo(VidaFacil, VelocidadFacil, DanioDisparoFacil, VidaObstaculosFacil, DanioObstaculosFacil, VelocidadObstaculosFacil);
}

void AP_F_DIFICULTAD_FACADE::ActivateNormalMode()
{
    if (!NivelNormal) {
        NivelNormal = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_NORMAL_CH>();
    }

    NivelNormal->ConfigurarTodo(VidaNormal, VelocidadNormal, DanioDisparoNormal, VidaObstaculosNormal, DanioObstaculosNormal, VelocidadObstaculosNormal);
}


void AP_F_DIFICULTAD_FACADE::ActivateDificilMode()
{
    if (!NivelDificil) {
        NivelDificil = GetWorld()->SpawnActor<AP_F_Nivel_Dificultad_DIFICIL_CH>();
    }

    NivelDificil->ConfigurarTodo(VidaDificil, VelocidadDificil, DanioDisparoDificil, VidaObstaculosDificil, DanioObstaculosDificil, VelocidadObstaculosDificil);
}