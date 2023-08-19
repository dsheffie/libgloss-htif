#include <errno.h>
#include "syscall.h"

int _close(int file)
{
  return (int)SYSCALL1(SYS_close, file);
}
