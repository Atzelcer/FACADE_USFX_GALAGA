// Fill out your copyright notice in the Description page of Project Settings.


#include "MINA_GALACTICA.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"

AMINA_GALACTICA::AMINA_GALACTICA()
{
	PrimaryActorTick.bCanEverTick = true;

	// Inicializar el componente de malla estática
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Malla_Obstaculos/Obstaculos_05/b07ba8777ca0_a_red_and_purple_cr.b07ba8777ca0_a_red_and_purple_cr'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

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

	Identificador_Obstaculos = "Mina_Galactica";

}

void AMINA_GALACTICA::Tick(float DeltaTime)
{
}

void AMINA_GALACTICA::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_USFX_GALAGAPawn* MyPawn = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);

	if (MyPawn)
	{
		Componente_Destruccion();
	}

}

void AMINA_GALACTICA::Componente_Destruccion()
{
	// Reproducir el sonido de la colisión
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

	// Reproducir la partícula de la colisión
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

	// Destruir la mina
	Destroy();
}
