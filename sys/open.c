#include <errno.h>
#include "syscall.h"

int _open(const char *name, int flags, int mode)
{
  return (int)SYSCALL3(SYS_open, (uintptr_t)name, flags, mode);
}
