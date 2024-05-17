// Fill out your copyright notice in the Description page of Project Settings.


#include "NAVE_ENEMIGA_P.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"

// Sets default values
ANAVE_ENEMIGA_P::ANAVE_ENEMIGA_P()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Crea un componente de escena que sirve como raíz del actor
    Scena = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = Scena;

    // Creando la Malla para la nave Padre
    Nave_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave_Mesh"));
    // Establecer la malla de la nave como el componente raíz de la nave
    Nave_Mesh->SetupAttachment(RootComponent);

    // Crear un componente de colisión en forma de caja y establecerlo como el componente raíz de la nave
    Colision_Nave = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Nave"));

    // Establecer la caja de colisión de la nave como el componente raíz de la nave
    Colision_Nave->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ANAVE_ENEMIGA_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANAVE_ENEMIGA_P::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	Recibir_Danio(Danio_Recibido);

}

void ANAVE_ENEMIGA_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_USFX_GALAGAPawn* Jugador = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);
    
    if (Jugador)
    {
		// Destruir la nave

		Jugador->Damege(Danio_Disparo);

		Componente_Destruccion();
    }
}

void ANAVE_ENEMIGA_P::Componente_Destruccion()
{
	// Reproducir el sonido de la nave
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	// Crear una explosion en la nave
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	// Destruir la nave
	Destroy(); 
}

void ANAVE_ENEMIGA_P::Recibir_Danio(float Danio)
{
	// Restar la vida de la nave
	Life -= Danio;

	// Si la vida de la nave es menor o igual a 0
	if (Life <= 0)
	{
		// Destruir la nave
		Componente_Destruccion();
	}
}

void ANAVE_ENEMIGA_P::Set_Vida(float Vida_A)
{

	Life = Vida_A;
}

void ANAVE_ENEMIGA_P::Disparar()
{
}

void ANAVE_ENEMIGA_P::Set_Velocidad_Nave(float Velocidad_A)
{
	Velocity = Velocidad_A;
}

void ANAVE_ENEMIGA_P::Mover_Nave(float Velocidad_Movimiento)
{

}

void ANAVE_ENEMIGA_P::Set_Danio_Disparo(float Danio_A)
{
	Danio_Disparo = Danio_A;
}

