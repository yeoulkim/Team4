// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Team4 : ModuleRules
{
	public Team4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
