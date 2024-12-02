local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'plugin_appodeal_base', "xml2", "z", "AppVerificationLibrary", "APDIABAdapter" },
		frameworks={ "JavaScriptCore","CoreBluetooth","WebKit","CoreTelephony","WatchConnectivity","SafariServices","EventKit","Appodeal","AppodealMediationCore","OMSDK_Appodeal","Protobuf", "StackConsentManager", "StackModules", "StackProductPresentation", "StackRendering", "UserMessagingPlatform"},
		frameworksOptional = {"SafariServices", "AdSupport", "AppTrackingTransparency"},
		usesSwift  = true,
	},
}

return metadata
