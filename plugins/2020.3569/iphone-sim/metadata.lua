local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = { 'plugin_appodeal_base', "xml2", "z", 'APDAppodealAdExchangeAdapter' },
		frameworks = {"JavaScriptCore", "CoreBluetooth", "WebKit", "CoreTelephony", "Appodeal", },
		frameworksOptional = {"SafariServices", "AdSupport"},
		usesSwift  = true,
	},
}

return metadata
