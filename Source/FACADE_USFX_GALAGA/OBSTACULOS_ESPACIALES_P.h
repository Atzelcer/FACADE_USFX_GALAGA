// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OBSTACULOS_ESPACIALES_P.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AOBSTACULOS_ESPACIALES_P : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOBSTACULOS_ESPACIALES_P();

	//|*| COMPONENTES DE RENDERIZADO PARA LA NAVE |*|

    //Componente de escena que sirve como raíz del actor
	UPROPERTY(EditAnywhere)
	class USceneComponent* DefaulSceneRoot;

	//Componente de malla estática y lo adjunta al componente raíz
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Mesh_Estructura_Espacial;

	//Componente de colisión de caja y lo adjunta al componente raíz
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UBoxComponent* Colision_Estructura;

	// Componente de sonido que se activa cuando hay una colision
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class USoundBase* SonidoColision;

	// Particula que se activa cuando hay una colision
	UPROPERTY(EditAnywhere, Category = "Particula")
	class UParticleSystem* ParticulaColision;


public:

	//|*| DECLARACION DE LOS ATRIBUTOS |*|
	float Velocidad;
	float Life;
	float Danio_Obst;
	float Velocidad_Obst;
	FString Identificador_Obstaculos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void NotifyActorBeginOverlap(AActor* OtherActor);


	void Set_Velocidad_Obstaculos(float Velocidad_Obstaculos);

	void Set_Vida_Obstaculos(float Vida_Obstaculos);

	void Set_Danio_Obstaculos(float Danio_Obstaculos);

protected:

	virtual void Componente_Destruccion();


};
