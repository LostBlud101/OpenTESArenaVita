#ifndef VITA_SHIM_H
#define VITA_SHIM_H

#ifdef __cplusplus
#include <stddef.h>
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>

static inline int vita_posix_memalign(void **out, size_t alignment, size_t size)
{
	void *p = memalign(alignment, size);
	if (p == NULL)
	{
		return ENOMEM;
	}
	*out = p;
	return 0;
}

#define posix_memalign vita_posix_memalign
#endif

#ifndef alloca
#define alloca __builtin_alloca
#endif

#endif
