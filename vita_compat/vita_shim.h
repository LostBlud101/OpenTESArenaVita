#ifndef VITA_SHIM_H
#define VITA_SHIM_H

#ifdef __cplusplus
#include <stddef.h>
#include <stdlib.h>
extern "C" int posix_memalign(void **, size_t, size_t);
#endif

#ifndef alloca
#define alloca __builtin_alloca
#endif

#endif
