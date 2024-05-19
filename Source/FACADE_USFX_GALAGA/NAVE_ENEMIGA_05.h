// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NAVE_ENEMIGA_P.h"
#include "NAVE_ENEMIGA_05.generated.h"


UCLASS()
class FACADE_USFX_GALAGA_API ANAVE_ENEMIGA_05 : public ANAVE_ENEMIGA_P
{
	GENERATED_BODY()
	
public:

	ANAVE_ENEMIGA_05();


public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual void Componente_Destruccion() override;

	virtual void Recibir_Danio(float Danio) override;

public:

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;
};
