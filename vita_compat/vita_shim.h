#ifndef VITA_SHIM_H
#define VITA_SHIM_H

#ifndef alloca
#define alloca __builtin_alloca
#endif

#ifdef __cplusplus
#include <stdlib.h>
#include <malloc.h>
#include <errno.h>

static inline int posix_memalign(void **out, size_t alignment, size_t size)
{
	void *p = memalign(alignment, size);
	if (p == NULL)
	{
		return ENOMEM;
	}
	*out = p;
	return 0;
}
#endif

#endif
