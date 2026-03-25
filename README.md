# jank sokol test

Forked from https://github.com/cerff-gur-sheel/SokolTriangle_CPP

![docs/screenshot.png](docs/screenshot.png)

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