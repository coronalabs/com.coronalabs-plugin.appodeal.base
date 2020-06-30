local metadata =
{
	plugin =
	{
		format = "jar",
		manifest =
		{
			usesPermissions =
			{
				"android.permission.INTERNET",
				"android.permission.ACCESS_NETWORK_STATE"
			},

			usesFeatures =
			{
				{ name="android.hardware.location", required=false },
				{ name="android.hardware.location.network", required=false },
				{ name="android.hardware.location.gps", required=false }
			},
		},
	},

	coronaManifest = {
		dependencies = {
			["shared.android.support.v4"] = "com.coronalabs",
			["shared.android.support.v7.appcompat"] = "com.coronalabs",
		}
	}
}

return metadata
