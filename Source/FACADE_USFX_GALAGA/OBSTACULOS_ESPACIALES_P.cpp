// Fill out your copyright notice in the Description page of Project Settings.

#include "OBSTACULOS_ESPACIALES_P.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"

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


    // Inicializar el sistema de partículas para la explosión
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ParticleAsset.Succeeded())
    {
        ParticulaColision = ParticleAsset.Object;
    }

    // Inicializar el sonido de la colisión
    static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
    if (SoundAsset.Succeeded())
    {
        SonidoColision = SoundAsset.Object;
    }

    // Crea un componente de colisión de caja y lo adjunta al componente raíz
    Colision_Estructura = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
    Colision_Estructura->SetupAttachment(RootComponent);

    Colision_Estructura->SetBoxExtent(FVector(50.f, 50.f, 50.f));

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


	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Vida del obstaculo : %f"), Life));

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Velocidad del obstaculo : %f"), Velocidad));

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Magenta, FString::Printf(TEXT("[OBSTACULOS_ESPACIALES_P]  Danio del obstaculo : %f"), Danio_Obst));


    // Verifica si la nave debe ser destruida
    if (Life <= 0)
    {
        Componente_Destruccion();
    }
    else
    {
        // Llama a la función de movimiento pasando DeltaTime directamente
        Movimiento_Ostaculos(DeltaTime);
    }
}

void AOBSTACULOS_ESPACIALES_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AFACADE_USFX_GALAGAPawn* Nave_Protagonista = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);

    if (Nave_Protagonista) 
    {
		Nave_Protagonista->Damage(Danio_Obst);

		Componente_Destruccion();
    }
}

void AOBSTACULOS_ESPACIALES_P::Recibir_Danio(float Danio_O)
{
	Life -= Danio_O;

}


void AOBSTACULOS_ESPACIALES_P::Movimiento_Ostaculos(float DeltaTime)
{
    if (!ensure(Mesh_Estructura_Espacial)) return;

    FVector PosicionActual = GetActorLocation();
    float Desplazamiento = Velocidad * DeltaTime;
    FVector NuevaPosicion = PosicionActual + FVector(-Desplazamiento, 0.f, 0.f);

    SetActorLocation(NuevaPosicion);

    // Restablecer la posición del obstáculo cuando cruza un límite específico, si es necesario
    if (NuevaPosicion.X < -1000.f)  // Asumiendo que 1000 es el límite superior
    {
        Componente_Destruccion();
    }
}

void AOBSTACULOS_ESPACIALES_P::Componente_Destruccion()
{
	// Reproducir el sonido de la colisión
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

	// Reproducir la partícula de la colisión
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

	// Destruir el obstáculo
	this->Destroy();
}

