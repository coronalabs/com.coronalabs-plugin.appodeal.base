-- Appodeal plugin

local Library = require "CoronaLibrary"

-- Create library
local lib = Library:new{ name="plugin.appodeal", publisherId="com.coronalabs", version=4 }

-------------------------------------------------------------------------------
-- BEGIN
-------------------------------------------------------------------------------

-- This sample implements the following Lua:
--
--    local appodeal = require "plugin.appodeal"
--    appodeal.init()
--

local function showWarning(functionName)
    print( functionName .. " WARNING: The Appodeal plugin is only supported on Android and iOS devices. Please build for device")
end

function lib.init()
    showWarning("appodeal.init()")
end

function lib.show()
    showWarning("appodeal.show()")
end

function lib.hide()
    showWarning("appodeal.hide()")
end

function lib.load()
    showWarning("appodeal.load()")
end

function lib.isLoaded()
    showWarning("appodeal.isLoaded()")
end

function lib.setUserDetails()
    showWarning("appodeal.setUserDetails()")
end

function lib.getRewardParameters()
    showWarning("appodeal.getRewardParameters()")
end

function lib.getVersion()
    showWarning("appodeal.getVersion()")
end

function lib.setSegmentFilter()
    showWarning("appodeal.setSegmentFilter()")
end

function lib.canShow()
    showWarning("appodeal.canShow()")
end

function lib.trackInAppPurchase()
    showWarning("appodeal.trackInAppPurchase()")
end

-------------------------------------------------------------------------------
-- END
-------------------------------------------------------------------------------

return lib
