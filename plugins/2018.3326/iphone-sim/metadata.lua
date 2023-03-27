local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'plugin_appodeal_base', "xml2", "z", "AppVerificationLibrary" },
		frameworks = {"JavaScriptCore", "CoreBluetooth", "WebKit", "CoreTelephony", "StackFoundation", "StackMRAIDKit", "StackNASTKit", "StackRichMedia", "StackUIKit", "StackVASTAssets", "StackVASTKit", "StackVideoPlayer", "StackXML", "Appodeal", "Protobuf", "StackCrashReporter", "StackAnalytics", "StackConsentManager", "StackIABAssets", "StackModules", "StackOpenMeasure", "StackProductPresentation", "StackProtobuf", "AppodealMediationCoreObjC"},
		frameworksOptional = {"SafariServices", "AdSupport", "AppTrackingTransparency"},
		usesSwift  = true,
	},
}

return metadata
