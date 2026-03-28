# jank sokol test

Forked from https://github.com/cerff-gur-sheel/SokolTriangle_CPP

(There is also [glfw branch](https://github.com/funatsufumiya/jank-sokol-test/tree/glfw).)

![docs/screenshot.png](docs/screenshot.png)

Tested on Win/Mac/Linux (windows ver is checked using [jank-win](https://github.com/ikappaki/jank-win), mac/linux is used brew/apt, see [#installation](https://book.jank-lang.org/getting-started/01-installation.html))

## Run

```bash
$ lein run
```

## Dev

If needed for dev. Already included.

### sokol-dll

```bash
# win
$ clang -shared -o lib/libsokol.dll cpp_src/sokol_dll.c -Iinclude

# linux
$ clang -shared -o lib/libsokol.so cpp_src/sokol_dll.c -Iinclude -fPIC -lXi -lX11 -lGL -lXcursor

# mac
$ clang -shared -o lib/libsokol.dylib cpp_src/sokol_dll.m -Iinclude -lobjc -framework CoreFoundation -framework Metal -framework IOKit -framework Cocoa -framework QuartzCore
```

### Compile shaders

```bash
$ sokol-shdc --slang=glsl430 -i shaders\basic.glsl -o include\basic.glsl.h
```
