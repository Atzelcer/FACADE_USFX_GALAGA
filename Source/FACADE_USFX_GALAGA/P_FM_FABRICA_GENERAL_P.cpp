// Fill out your copyright notice in the Description page of Project Settings.
#include "P_FM_FABRICA_GENERAL_P.h"

// Sets default values
AP_FM_FABRICA_GENERAL_P::AP_FM_FABRICA_GENERAL_P()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANAVE_ENEMIGA_P* AP_FM_FABRICA_GENERAL_P::Get_Nave(FString Identificador)
{
	ANAVE_ENEMIGA_P* Nave = Crear_Nave(Identificador);
	return Nave;
}

// Called when the game starts or when spawned
void AP_FM_FABRICA_GENERAL_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_FM_FABRICA_GENERAL_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

