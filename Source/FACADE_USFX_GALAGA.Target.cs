// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FACADE_USFX_GALAGATarget : TargetRules
{
	public FACADE_USFX_GALAGATarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("FACADE_USFX_GALAGA");
	}
}
