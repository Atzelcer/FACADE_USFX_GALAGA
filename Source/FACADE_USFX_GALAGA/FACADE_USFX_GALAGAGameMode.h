// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FACADE_USFX_GALAGAGameMode.generated.h"

UCLASS(MinimalAPI)
class AFACADE_USFX_GALAGAGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	AFACADE_USFX_GALAGAGameMode();

public:

	virtual void BeginPlay() override;
};



