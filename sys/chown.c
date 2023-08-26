#include <errno.h>
#include <sys/types.h>
#include "syscall.h"

int _chown(const char *path, uid_t owner, gid_t group)
{
  return SYSCALL3(SYS_chown, (uintptr_t)path, owner, group);
}
