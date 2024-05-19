// Fill out your copyright notice in the Description page of Project Settings.


#include "NAVE_ENEMIGA_01.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"

ANAVE_ENEMIGA_01::ANAVE_ENEMIGA_01()
{
	//PrimaryActorTick.bCanEverTick = true;


	//|*| COMPONENTE MALLA DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mallas_Nave_Enemiga/Nave01/f882e2645990_enemy_spaceship__3d.f882e2645990_enemy_spaceship__3d'"));
	if (MeshAsset.Succeeded())
	{
		Nave_Mesh->SetStaticMesh(MeshAsset.Object);
		// Modificar la escala del componente de malla
		FVector NewScale(1.5f, 1.5f, 1.5f); // Escala modificada
		Nave_Mesh->SetWorldScale3D(NewScale);
	}

	//|*| COMPONENTE DE PARTICULA DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));

	if (ParticleAsset.Succeeded())
	{
		Explosion_Nave = Cast<UParticleSystem>(ParticleAsset.Object);
	}

	//|*| COMPONENTE DE SONIDO DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
	if (AssetExplosionSound.Succeeded())
	{
		Sonido_Nave = Cast<USoundBase>(AssetExplosionSound.Object);
	}

	//|*| PARA AJUSTAR LOS LIMITES DE COLISION DE LA NAVE |*|
	Colision_Nave->SetBoxExtent(FVector(80.f, 80.f, 80.f));

	//|*| INICIALIZANDO LOS ATRIBUTOS DE LA NAVE |*|

	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre 
	Identificador_Nave = "Nave_Enemiga_01";
}

void ANAVE_ENEMIGA_01::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_USFX_GALAGAPawn* Jugador = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);

	if (Jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("[NAVE_ENEMIGA_01]   Colision con el jugador"));

		Jugador->Damage(50.f);

		Recibir_Danio(50.f);
	}

}


void ANAVE_ENEMIGA_01::Recibir_Danio(float Danio)
{
	Life -= Danio;
}


void ANAVE_ENEMIGA_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("[Nave_Enemiga_01]  Vida de la nave: %f"), Life));

	if (Life <= 0)
	{
		Componente_Destruccion();
	}
}

void ANAVE_ENEMIGA_01::BeginPlay()
{
	Super::BeginPlay();


}

void ANAVE_ENEMIGA_01::Componente_Destruccion()
{
	// Reproducir el sonido de la colisión
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	// Reproducir la partícula de la colisión
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	// Destruir el asteroide
	this->Destroy();

}
