// Fill out your copyright notice in the Description page of Project Settings.


#include "NAVE_ENEMIGA_03.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/ShapeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Components/BoxComponent.h"
#include "FACADE_USFX_GALAGAPawn.h"

ANAVE_ENEMIGA_03::ANAVE_ENEMIGA_03()
{

	PrimaryActorTick.bCanEverTick = true;


	//|*| COMPONENTE MALLA DE LA NAVE |*|
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mallas_Nave_Enemiga/Nave03/Nivel03.Nivel03'"));
	if (MeshAsset.Succeeded())
	{
		Nave_Mesh->SetStaticMesh(MeshAsset.Object);

		//// Modificar la escala del componente de malla
		//FVector NewScale(0.500f, 0.500f, 0.500f); // Escala modificada
		//Nave_Mesh->SetWorldScale3D(NewScale);
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
	Colision_Nave->SetBoxExtent(FVector(50.f, 50.f, 50.f));

	//|*| INICIALIZANDO LOS ATRIBUTOS DE LA NAVE |*|

	Velocity = 40.0f;
	Tiempo_Disparo = 0;
	Danio_Recibido = 40.f;
	Tiempo_Disparo_Generar = 4.f;
	Distancia_Disparo = FVector(90.f, 0.f, 0.f);

	//Asignando un nombre 
	Identificador_Nave = "Nave_Enemiga_03";

}

void ANAVE_ENEMIGA_03::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AFACADE_USFX_GALAGAPawn* Jugador = Cast<AFACADE_USFX_GALAGAPawn>(OtherActor);

	if (Jugador)
	{
		Componente_Destruccion();
	}

}

void ANAVE_ENEMIGA_03::Componente_Destruccion()
{
	// Reproducir el sonido de la nave
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sonido_Nave, GetActorLocation());

	// Crear una explosion en la nave
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion_Nave, GetActorLocation());

	// Destruir la nave
	Destroy();
}

void ANAVE_ENEMIGA_03::Recibir_Danio(float Danio)
{
	Life -= Danio;

	if (Life <= 0)
	{
		Componente_Destruccion();
	}
}
