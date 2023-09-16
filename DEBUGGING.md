* To have Steam create a log when you launch the game: add `PROTON_LOG=1` to launch options in game

* To launch the game from the command line (you have to be in the game's compatdata folder, which is in `steamapps/compatdata/<the-game-id>/`)
```
WINEPREFIX="$(pwd)/pfx/" "~/.local/share/Steam/steamapps/common/Proton 8.0/dist/bin/wine" /path/to/Project64.exe 2>&1
```

* Useful Wine options:
    *  WINEDEBUG="+module" shows info about loading dlls & libraries, very useful for debugging issues
    *  WINEDLLPATH: look for dlls in a custom path
    * WINEDLLOVERRIDES: didnt seem to matter for this instance, but this is used to select between "native" DLLs (i.e. those that would also run on Windows) and "builtin" DLLs (those provided by Wine that actually have a special implementation). `hidapi_wineproxy` is technically a builtin DLL.
