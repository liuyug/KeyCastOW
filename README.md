

fork from https://github.com/brookhong/KeyCastOW

+ add cmake profile
+ use MingW compile

## build

```
mkdir build
cd build
cmake -G "MinGW Makefiles"
make
```

----

# KeyCastOW
keystroke visualizer for Windows, lets you easily display your keystrokes while recording screencasts.

* small footprint (one 100kb executable file)
* green and portable, only depends on windows system dlls
* prenty of settings for keystroke display
* hotkey to turn on/off


## build

  msbuild /p:platform=win32 /p:Configuration=Release

## License

MIT License
