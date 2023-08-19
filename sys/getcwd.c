#include <stddef.h>
#include <errno.h>
#include "syscall.h"

char *_getcwd(char *buf, size_t size)
{
  return (char*)SYSCALL2(SYS_getcwd, (uintptr_t)buf, size);
}
