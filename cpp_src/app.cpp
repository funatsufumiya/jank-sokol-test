#include <algorithm>
#include <ostream>

#define SOKOL_IMPL
#define SOKOL_DLL
#define SOKOL_NO_ENTRY
#define SOKOL_GLCORE
#include <sokol_app.h>

#if defined(_WIN32)
#define APPAPI __declspec(dllexport)
#else
#define APPAPI
#endif

extern "C" {

void APPAPI run_app(sapp_desc* desc){
  sapp_run(*desc);
}

}