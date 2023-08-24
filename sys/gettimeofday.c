#include <errno.h>
#include <sys/time.h>
#include "syscall.h"

int _gettimeofday(struct timeval *tp, void *tzp)
{
  return SYSCALL2(SYS_gettimeofday, (uintptr_t)tp, (uintptr_t)tzp);
}
