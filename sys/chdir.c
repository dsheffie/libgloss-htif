#include <errno.h>
#include "syscall.h"

int _chdir(const char *path)
{
  return SYSCALL1(SYS_chdir, (uintptr_t)path);
}
