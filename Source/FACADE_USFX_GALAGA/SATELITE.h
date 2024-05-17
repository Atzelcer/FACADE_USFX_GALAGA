// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "SATELITE.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API ASATELITE : public AOBSTACULOS_ESPACIALES_P
{
	GENERATED_BODY()

public:

	ASATELITE();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;
	
};
