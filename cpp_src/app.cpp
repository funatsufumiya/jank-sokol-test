#include <algorithm>
#include <ostream>

#define SOKOL_IMPL
#define SOKOL_DLL
#define SOKOL_NO_ENTRY
#define SOKOL_GLCORE
#include <sokol_log.h>
#include <sokol_app.h>

#if defined(_WIN32)
#define APPAPI __declspec(dllexport)
#else
#define APPAPI
#endif

extern "C" {

void APPAPI run_app(
    int width, int height,
    void (*init_cb)(void),
    void (*frame_cb)(void),
    void (*cleanup_cb)(void)
){
  sapp_desc app_desc = {};
  app_desc.width = width;
  app_desc.height = height;
  app_desc.init_cb = init_cb;
  app_desc.frame_cb = frame_cb;
  app_desc.cleanup_cb = cleanup_cb;
  app_desc.logger.func = slog_func;
  sapp_run(app_desc);
}

} // extern "C"
