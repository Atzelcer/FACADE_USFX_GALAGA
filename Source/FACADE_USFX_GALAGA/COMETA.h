// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSTACULOS_ESPACIALES_P.h"
#include "COMETA.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API ACOMETA : public AOBSTACULOS_ESPACIALES_P
{
	GENERATED_BODY()


public:

	ACOMETA();


public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;
};
