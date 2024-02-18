// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GP4_P01_Climbing : ModuleRules
{
	public GP4_P01_Climbing(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
