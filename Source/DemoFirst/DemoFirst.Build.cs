// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DemoFirst : ModuleRules
{
	public DemoFirst(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"HeadMountedDisplay" });
	}
}
