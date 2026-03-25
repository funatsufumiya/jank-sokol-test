
#if defined(_WIN32) || defined(_WIN64)
#  include "gl_win.h"
#elif defined(__APPLE__)
#  include "gl_mac.h"
#else
#  include "gl_linux.h"
#endif
