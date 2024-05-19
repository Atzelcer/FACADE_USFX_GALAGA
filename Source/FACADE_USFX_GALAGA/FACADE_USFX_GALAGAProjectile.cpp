// Copyright Epic Games, Inc. All Rights Reserve

#include "FACADE_USFX_GALAGAProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"
#include "NAVE_ENEMIGA_P.h"
#include "NAVE_ENEMIGA_01.h"
#include "NAVE_ENEMIGA_02.h"
#include "NAVE_ENEMIGA_03.h"

#include "NAVE_ENEMIGA_05.h"
#include "OBSTACULOS_ESPACIALES_P.h"



AFACADE_USFX_GALAGAProjectile::AFACADE_USFX_GALAGAProjectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AFACADE_USFX_GALAGAProjectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AFACADE_USFX_GALAGAProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	ANAVE_ENEMIGA_P* Nave = Cast<ANAVE_ENEMIGA_P>(OtherActor);

	if (Nave)
	{
		Nave->Recibir_Danio(50.f);
		//Destroy();
	}

	AOBSTACULOS_ESPACIALES_P* Obstaculo = Cast<AOBSTACULOS_ESPACIALES_P>(OtherActor);

	if (Obstaculo)
	{
		Obstaculo->Recibir_Danio(50.f);
		//Destroy();
	}

	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}

