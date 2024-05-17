// Fill out your copyright notice in the Description page of Project Settings.


#include "PROYECTIL_P.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "FACADE_USFX_GALAGAPawn.h"



// Sets default values
APROYECTIL_P::APROYECTIL_P()
{
	// Establece este actor para llamar a Tick() en cada cuadro
	PrimaryActorTick.bCanEverTick = true;

	// Creando la malla del proyectil
	Projectil_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectil_Mesh"));
	RootComponent = Projectil_Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		Projectil_Mesh->SetStaticMesh(MeshAsset.Object);

		//// Modificar la escala del componente de malla
		//FVector NewScale(3.0f, 10.0f, 0.0f); // Escala modificada
		//Projectil_Mesh->SetWorldScale3D(NewScale);
	}


	// Inicializar el sistema de part�culas para la explosi�n
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		Explosion_Particles = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisi�n
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		Projectil_Sound = SoundAsset.Object;
	}


	// Controlando el movimiento del proyectil
	Projectil_Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectil_Movement"));
	Projectil_Movement->UpdatedComponent = Projectil_Mesh;
	Projectil_Movement->InitialSpeed = 0.f; // velocidad inicial
	Projectil_Movement->MaxSpeed = 0.f; // velocidad m�xima
	Projectil_Movement->bRotationFollowsVelocity = true;
	Projectil_Movement->bShouldBounce = false; // no rebota
	Projectil_Movement->ProjectileGravityScale = 0.f; // sin gravedad

	// Creando el componente de colisi�n del proyectil
	Projectil_Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectil_Collision"));
	Projectil_Collision->SetupAttachment(RootComponent);

	// Estableciendo el tiempo de vida inicial del proyectil
	InitialLifeSpan = 0.f;

	// Da�o predeterminado del proyectil
	DanioProvocado = 0.f;

	//Determinando la velocidad del proyectil
	Projectil_Movement->InitialSpeed = 750.0f;
	Projectil_Movement->MaxSpeed = 850.0f;

	//Tiempo de vida del proyectil
	InitialLifeSpan = 6.0f;

	//Configurando el proyectil para que genere eventos de colision
	Projectil_Collision->SetCapsuleHalfHeight(160.0f);
	Projectil_Collision->SetCapsuleRadius(160.0f);
}

// Called when the game starts or when spawned
void APROYECTIL_P::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APROYECTIL_P::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APROYECTIL_P::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_USFX_GALAGAPawn* Jugador = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);

	if (Jugador)
	{
		DestroyPROYECTIL();
	}
}

void APROYECTIL_P::DestroyPROYECTIL()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Projectil_Sound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Particles, GetActorLocation());
	Destroy();
}

