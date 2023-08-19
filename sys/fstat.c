#include <errno.h>
#include <sys/stat.h>
#include "syscall.h"

int _fstat(int file, struct stat *st)
{
  return SYSCALL2(SYS_fstat, file, (uintptr_t)st);
}
