#define SOKOL_DLL

#if defined(_WIN32)
#define SOKOL_D3D11
#elif defined(__APPLE__)
#define SOKOL_METAL
#elif defined(__EMSCRIPTEN__)
#define SOKOL_GLES3
// #elif defined(__linux__) || defined(__unix__)
#else
#define SOKOL_GLCORE
#endif

#define SOKOL_NO_ENTRY
#define SOKOL_IMPL
#include "sokol_log.h"
#include "sokol_gfx.h"
#include "sokol_app.h"
#include "sokol_glue.h"

#if defined(_WIN32)
#define APPAPI __declspec(dllexport)
#else
#define APPAPI
#endif

void APPAPI run_app(
    int width, int height,
    void (*init_cb)(void),
    void (*frame_cb)(void),
    void (*cleanup_cb)(void)
){
  sapp_desc app_desc = {
    .width = width,
    .height = height,
    .init_cb = init_cb,
    .frame_cb = frame_cb,
    .cleanup_cb = cleanup_cb,
    .logger.func = slog_func,
  };
  sapp_run(&app_desc);
}
