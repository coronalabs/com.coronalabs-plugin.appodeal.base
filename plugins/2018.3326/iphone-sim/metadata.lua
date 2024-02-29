local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'plugin_appodeal_base', "xml2", "z", "AppVerificationLibrary" },
		frameworks = {"JavaScriptCore", "CoreBluetooth", "WebKit", "CoreTelephony", "Appodeal", "AppodealMediationCore", "OMSDK_Appodeal", "Protobuf", "StackAnalytics", "StackConsentManager", "StackCrashReporter", "StackFoundation", "StackIABAssets", "StackModules", "StackMRAIDKit", "StackNASTKit", "StackOpenMeasure", "StackProductPresentation", "StackProtobuf", "StackRichMedia", "StackUIKit", "StackVASTAssets", "StackVASTKit", "StackVideoPlayer", "StackXML"},
		frameworksOptional = {"SafariServices", "AdSupport", "AppTrackingTransparency"},
		usesSwift  = true,
	},
}

return metadata
