# jank sokol test

Forked from https://github.com/cerff-gur-sheel/SokolTriangle_CPP

![docs/screenshot.png](docs/screenshot.png)

Tested on Win/Mac/Linux (windows ver is checked using [jank-win](https://github.com/ikappaki/jank-win), mac/linux is used brew/apt, see [#installation](https://book.jank-lang.org/getting-started/01-installation.html))

## Run

```bash
$ lein run
```

## Dev

If needed for dev. Already included.

### Compile shaders

```bash
$ sokol-shdc --slang=glsl430 -i shaders\basic.glsl -o include\basic.glsl.h
```
