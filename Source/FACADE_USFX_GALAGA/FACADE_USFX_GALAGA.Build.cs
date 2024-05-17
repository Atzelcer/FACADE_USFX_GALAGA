// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FACADE_USFX_GALAGA : ModuleRules
{
	public FACADE_USFX_GALAGA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
