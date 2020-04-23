// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HSDUE4WS_23_04_2020EditorTarget : TargetRules
{
	public HSDUE4WS_23_04_2020EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("HSDUE4WS_23_04_2020");
	}
}
