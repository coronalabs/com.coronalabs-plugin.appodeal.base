local metadata =
{
	plugin =
	{
		format = "jar",
		manifest =
		{
			permissions = {},

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

			applicationChildElements =
			{
        [[
				<meta-data android:name="com.appodeal.framework" android:value="corona" />
        ]],
        [[
        <activity android:name="com.appodeal.ads.InterstitialActivity"
            android:configChanges="orientation|screenSize"
            android:theme="@android:style/Theme.NoTitleBar.Fullscreen" />
        <activity android:name="com.appodeal.ads.VideoActivity"
            android:configChanges="orientation|screenSize"
            android:theme="@android:style/Theme.NoTitleBar.Fullscreen" />
        <activity android:name="com.appodealx.mraid.MraidActivity"
            android:configChanges="orientation|screenSize"
            android:theme="@android:style/Theme.NoTitleBar.Fullscreen"/>
        <activity android:name="com.appodeal.ads.VideoPlayerActivity"
            android:theme="@android:style/Theme.Black.NoTitleBar.Fullscreen"/>
        <receiver android:name="com.appodeal.ads.AppodealPackageAddedReceiver" android:exported="true" android:enabled="true">
            <intent-filter>
                <action android:name="android.intent.action.PACKAGE_ADDED" />
                <data android:scheme="package" />
            </intent-filter>
        </receiver>
        <activity android:name="com.appodeal.ads.TestActivity"
            android:theme="@android:style/Theme.Translucent.NoTitleBar" />

        <meta-data android:name="com.google.android.gms.version" android:value="@integer/google_play_services_version" />
        <activity android:name="com.google.android.gms.ads.AdActivity"
            android:configChanges="keyboard|keyboardHidden|orientation|screenLayout|uiMode|screenSize|smallestScreenSize"
            android:theme="@android:style/Theme.Translucent" />

        <activity android:name="com.appodeal.iab.vast.activity.VastActivity"
            android:theme="@android:style/Theme.NoTitleBar.Fullscreen"
            android:configChanges="keyboardHidden|orientation|screenSize"/>

        <activity android:name="com.appodeal.ads.networks.vpaid.VPAIDActivity"
            android:theme="@android:style/Theme.NoTitleBar.Fullscreen" />
				]]
			}
		}
	},

	coronaManifest = {
		dependencies = {
			["shared.android.support.v4"] = "com.coronalabs",
			["shared.android.support.v7.appcompat"] = "com.coronalabs",
			["shared.android.support.v7.recyclerview"] = "com.coronalabs",
			["shared.google.play.services.ads.identifier"] = "com.coronalabs",
            ["shared.google.play.services.location"] = "com.coronalabs",
            ["shared.google.play.services.gcm"] = "com.coronalabs"
		}
	}
}

return metadata
