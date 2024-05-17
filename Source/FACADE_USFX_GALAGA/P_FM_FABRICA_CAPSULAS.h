// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_FM_FABRICA_CAPSULAS.generated.h"

UCLASS()
class FACADE_USFX_GALAGA_API AP_FM_FABRICA_CAPSULAS : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_FM_FABRICA_CAPSULAS();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};