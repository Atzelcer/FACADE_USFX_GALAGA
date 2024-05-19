// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_FABRICA_OBSTACULOS.h"

// Sets default values
AP_FM_FABRICA_OBSTACULOS::AP_FM_FABRICA_OBSTACULOS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_FM_FABRICA_OBSTACULOS::BeginPlay()
{
	Super::BeginPlay();
	
}

AOBSTACULOS_ESPACIALES_P* AP_FM_FABRICA_OBSTACULOS::Get_Nave(FString Identificador)
{
	AOBSTACULOS_ESPACIALES_P* Obstaculo = Crear_Obstaculos(Identificador);
	return Obstaculo;
}

// Called every frame
void AP_FM_FABRICA_OBSTACULOS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

