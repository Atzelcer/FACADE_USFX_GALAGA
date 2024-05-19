// Fill out your copyright notice in the Description page of Project Settings.


#include "SATELITE.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"


ASATELITE::ASATELITE()
{
	PrimaryActorTick.bCanEverTick = true;

	// Inicializar el componente de malla est�tica
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Malla_Obstaculos/Obstaculos_03/9da0a8d670a8_space_comet__3d_ass.9da0a8d670a8_space_comet__3d_ass'"));
	if (MeshAsset.Succeeded())
	{
		Mesh_Estructura_Espacial->SetStaticMesh(MeshAsset.Object);
	}

	// Inicializar el sistema de part�culas para la explosi�n
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Succeeded())
	{
		ParticulaColision = ParticleAsset.Object;
	}

	// Inicializar el sonido de la colisi�n
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion01.Explosion01'"));
	if (SoundAsset.Succeeded())
	{
		SonidoColision = SoundAsset.Object;
	}

	Identificador_Obstaculos = "Satelite";

}

void ASATELITE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASATELITE::Componente_Destruccion()
{
	// Reproducir el sonido de la colisi�n
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SonidoColision, GetActorLocation());

	// Reproducir la part�cula de la colisi�n
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticulaColision, GetActorLocation());

	// Destruir el sat�lite
	Destroy();		
}

void ASATELITE::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	
	AFACADE_USFX_GALAGAPawn* MyPawn = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);
	if (MyPawn)
	{
		//MyPawn->Recibir_Danio(40.0f);
		Componente_Destruccion();
	}
}
