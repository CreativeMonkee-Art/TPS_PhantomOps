// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS_PhantomOps : ModuleRules
{
	public TPS_PhantomOps(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
