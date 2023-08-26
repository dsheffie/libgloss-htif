#include <errno.h>
#include <sys/times.h>
#include "syscall.h"

clock_t _times(struct tms *buf)
{
  return SYSCALL1(SYS_times, (uintptr_t)buf);
}
