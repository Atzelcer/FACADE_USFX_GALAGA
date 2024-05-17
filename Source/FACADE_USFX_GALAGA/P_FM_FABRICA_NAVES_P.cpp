// Fill out your copyright notice in the Description page of Project Settings.


#include "P_FM_FABRICA_NAVES_P.h"
#include "NAVE_ENEMIGA_01.h"
#include "NAVE_ENEMIGA_02.h"
#include "NAVE_ENEMIGA_03.h"
#include "NAVE_ENEMIGA_04.h"
#include "NAVE_ENEMIGA_05.h"


ANAVE_ENEMIGA_P* AP_FM_FABRICA_NAVES_P::Crear_Nave(FString Nave_Identificador)
{
	float RandomSpawnY = FMath::RandRange(1780,-1780);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);


	if (Nave_Identificador.Equals("Nave_Enemiga_01"))
		return GetWorld()->SpawnActor<ANAVE_ENEMIGA_01>(SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_02"))
		return GetWorld()->SpawnActor<ANAVE_ENEMIGA_02>(SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_03"))
		return GetWorld()->SpawnActor<ANAVE_ENEMIGA_03>(SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_04"))
		return GetWorld()->SpawnActor<ANAVE_ENEMIGA_04>(SpawnLocation, Rotation);

	if (Nave_Identificador.Equals("Nave_Enemiga_05"))
		return GetWorld()->SpawnActor<ANAVE_ENEMIGA_05>(SpawnLocation, Rotation);

	return nullptr;
}
