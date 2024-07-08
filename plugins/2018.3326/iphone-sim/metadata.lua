local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'plugin_appodeal_base', "xml2", "z", "AppVerificationLibrary", "APDIABAdapter" },
		frameworks={"JavaScriptCore","CoreBluetooth","WebKit","CoreTelephony","WatchConnectivity","SafariServices","EventKit","Appodeal","AppodealMediationCore","OMSDK_Appodeal","Protobuf","StackConsentManager","StackFoundation","StackIABAssets","StackModules","StackMRAIDKit","StackNASTKit","StackOpenMeasure", "StackProductPresentation", "StackProtobuf", "StackRichMedia", "StackUIKit", "StackVASTAssets", "StackVASTKit", "StackVideoPlayer", "StackXML", "UserMessagingPlatform"},
		frameworksOptional = {"SafariServices", "AdSupport", "AppTrackingTransparency"},
		usesSwift  = true,
	},
}

return metadata
