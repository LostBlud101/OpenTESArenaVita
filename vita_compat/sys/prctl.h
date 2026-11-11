#ifndef VITA_PRCTL_H
#define VITA_PRCTL_H

#define PR_SET_NAME 15

static inline int prctl(int option, ...)
{
	(void)option;
	return 0;
}

#endif
