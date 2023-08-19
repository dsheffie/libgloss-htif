#include <errno.h>
#include <sys/types.h>
#include "syscall.h"

off_t _lseek(int file, off_t ptr, int dir)
{
    return (off_t)SYSCALL3(SYS_lseek, file, ptr, dir);
}
