export CX_ROOT="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver"
export CX_BOTTLE="mwcceppc.exe"
export WINEPREFIX="/Library/Application Support/CrossOver/Bottles/mwcceppc.exe"
export PATH="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/bin:/usr/bin:/bin:/usr/sbin:/sbin"
export DYLD_LIBRARY_PATH="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/lib64:/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/lib32on64"
export WINEDLLPATH="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/lib32on64/wine"
export WINELOADER="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/bin/wineloader32on64"
export WINESERVER="/Applications/CrossOver.app/Contents/SharedSupport/CrossOver/bin/wineserver"
export DISPLAY="/private/tmp/com.apple.launchd.GhHRSLMEeg/org.xquartz:0"
/applications/crossover.app/Contents/SharedSupport/CrossOver/bin/wine $@
