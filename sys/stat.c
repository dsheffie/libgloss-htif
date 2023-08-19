#include <errno.h>
#include <sys/stat.h>
#include "syscall.h"

int _stat(const char *file, struct stat *st)
{
  return SYSCALL2(SYS_stat, (uintptr_t)file, (uintptr_t)st);
}
