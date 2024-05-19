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
    float VidaFacil ;
    float VelocidadFacil ;
    float DanioDisparoFacil ;
    float VidaObstaculosFacil ;
    float DanioObstaculosFacil ;
    float VelocidadObstaculosFacil ;

    // Parámetros de dificultad normal
    float VidaNormal ;
    float VelocidadNormal ;
    float DanioDisparoNormal ;
    float VidaObstaculosNormal ;
    float DanioObstaculosNormal ;
    float VelocidadObstaculosNormal ;

    // Parámetros de dificultad difícil
    float VidaDificil ;
    float VelocidadDificil ;
    float DanioDisparoDificil ;
    float VidaObstaculosDificil ;
    float DanioObstaculosDificil ;
    float VelocidadObstaculosDificil ;


};
