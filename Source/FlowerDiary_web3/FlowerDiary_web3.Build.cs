// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FlowerDiary_web3 : ModuleRules
{
	public FlowerDiary_web3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
