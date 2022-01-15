local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = {"plugin_appodeal_base"},
		frameworks = { 'Appodeal', 'AppodealMediationCoreObjC', 'StackAnalytics', 'StackCrashReporter', 'StackIAB', 'StackModules', 'Protobuf', "StackIABAssets", "StackMRAIDKit", "StackNASTKit", "StackOpenMeasure", "StackRichMedia", "StackVASTAssets", "StackVASTKit", "StackVideoPlayer", "StackXML", "StackFoundation", "StackProductPresentation", "StackUIKit", "StackFoundation", "StackAPI"},
		frameworksOptional = {"SafariServices", "AdSupport", "AppTrackingTransparency"},
		usesSwift  = true,
	},
}

return metadata
