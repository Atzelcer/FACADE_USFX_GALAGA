// Fill out your copyright notice in the Description page of Project Settings.


#include "OBSTACULOS_ESPACIALES_P.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

// Sets default values
AOBSTACULOS_ESPACIALES_P::AOBSTACULOS_ESPACIALES_P()
{
    // Habilita el tick del actor
    PrimaryActorTick.bCanEverTick = true;

    // Crea un componente de escena que sirve como raíz del actor
    DefaulSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = DefaulSceneRoot;

    // Crea un componente de malla estática y lo adjunta al componente raíz
    Mesh_Estructura_Espacial = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    Mesh_Estructura_Espacial->SetupAttachment(RootComponent);

    // Crea un componente de colisión de caja y lo adjunta al componente raíz
    Colision_Estructura = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
    Colision_Estructura->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AOBSTACULOS_ESPACIALES_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOBSTACULOS_ESPACIALES_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOBSTACULOS_ESPACIALES_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
}

void AOBSTACULOS_ESPACIALES_P::Set_Velocidad_Obstaculos(float Velocidad_Obstaculos)
{
    Velocidad_Obst = Velocidad_Obstaculos;
}

void AOBSTACULOS_ESPACIALES_P::Set_Vida_Obstaculos(float Vida_Obstaculos)
{
    Life = Vida_Obstaculos;

}

void AOBSTACULOS_ESPACIALES_P::Set_Danio_Obstaculos(float Danio_Obstaculos)
{
	Danio_Obst = Danio_Obstaculos;
}

void AOBSTACULOS_ESPACIALES_P::Componente_Destruccion()
{

}

