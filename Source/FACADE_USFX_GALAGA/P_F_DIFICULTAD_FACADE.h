// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_F_DIFICULTAD_FACADE.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_F_DIFICULTAD_FACADE : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_F_DIFICULTAD_FACADE();

public:

	class AP_F_Nivel_Dificultad_FACIL_CH* NivelFacil;

	class AP_F_Nivel_Dificultad_NORMAL_CH* NivelNormal;

	class AP_F_Nivel_Dificultad_DIFICIL_CH* NivelDificil;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Funciones para activar cada nivel de dificultad
	void ActivateFacilMode();
	void ActivateNormalMode();
	void ActivateDificilMode();

    // Parámetros de dificultad fácil
    float VidaFacil = 100.0f;
    float VelocidadFacil = 200.0f;
    float DanioDisparoFacil = 10.0f;
    float VidaObstaculosFacil = 50.0f;
    float DanioObstaculosFacil = 5.0f;
    float VelocidadObstaculosFacil = 100.0f;

    // Parámetros de dificultad normal
    float VidaNormal = 150.0f;
    float VelocidadNormal = 250.0f;
    float DanioDisparoNormal = 20.0f;
    float VidaObstaculosNormal = 100.0f;
    float DanioObstaculosNormal = 10.0f;
    float VelocidadObstaculosNormal = 150.0f;

    // Parámetros de dificultad difícil
    float VidaDificil = 200.0f;
    float VelocidadDificil = 300.0f;
    float DanioDisparoDificil = 30.0f;
    float VidaObstaculosDificil = 150.0f;
    float DanioObstaculosDificil = 15.0f;
    float VelocidadObstaculosDificil = 200.0f;


};
