// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FACADE_USFX_GALAGAEditorTarget : TargetRules
{
	public FACADE_USFX_GALAGAEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("FACADE_USFX_GALAGA");
	}
}
