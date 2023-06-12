// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct sockaddr {int dummy; } ;
typedef  int /*<<< orphan*/  socklen_t ;

/* Variables and functions */
 int ENOSYS ; 
 int errno ; 

int uv__accept4(int fd, struct sockaddr* addr, socklen_t* addrlen, int flags) {
#if defined(__i386__)
  unsigned long args[4];
  int r;

  args[0] = (unsigned long) fd;
  args[1] = (unsigned long) addr;
  args[2] = (unsigned long) addrlen;
  args[3] = (unsigned long) flags;

  r = syscall(__NR_socketcall, 18 /* SYS_ACCEPT4 */, args);

  /* socketcall() raises EINVAL when SYS_ACCEPT4 is not supported but so does
   * a bad flags argument. Try to distinguish between the two cases.
   */
  if (r == -1)
    if (errno == EINVAL)
      if ((flags & ~(UV__SOCK_CLOEXEC|UV__SOCK_NONBLOCK)) == 0)
        errno = ENOSYS;

  return r;
#elif defined(__NR_accept4)
  return syscall(__NR_accept4, fd, addr, addrlen, flags);
#else
  return errno = ENOSYS, -1;
#endif
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int fd = 100;
        
          int flags = 100;
        
          int _len_addr0 = 1;
          struct sockaddr * addr = (struct sockaddr *) malloc(_len_addr0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addrlen0 = 1;
          int * addrlen = (int *) malloc(_len_addrlen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrlen0; _i0++) {
            addrlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = uv__accept4(fd,addr,addrlen,flags);
          printf("%d\n", benchRet); 
          free(addr);
          free(addrlen);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fd = 255;
        
          int flags = 255;
        
          int _len_addr0 = 65025;
          struct sockaddr * addr = (struct sockaddr *) malloc(_len_addr0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addrlen0 = 65025;
          int * addrlen = (int *) malloc(_len_addrlen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrlen0; _i0++) {
            addrlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = uv__accept4(fd,addr,addrlen,flags);
          printf("%d\n", benchRet); 
          free(addr);
          free(addrlen);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fd = 10;
        
          int flags = 10;
        
          int _len_addr0 = 100;
          struct sockaddr * addr = (struct sockaddr *) malloc(_len_addr0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addrlen0 = 100;
          int * addrlen = (int *) malloc(_len_addrlen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrlen0; _i0++) {
            addrlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = uv__accept4(fd,addr,addrlen,flags);
          printf("%d\n", benchRet); 
          free(addr);
          free(addrlen);
        
        break;
    }
    // empty
    case 3:
    {
          int fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_addr0 = 1;
          struct sockaddr * addr = (struct sockaddr *) malloc(_len_addr0*sizeof(struct sockaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
              addr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_addrlen0 = 1;
          int * addrlen = (int *) malloc(_len_addrlen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrlen0; _i0++) {
            addrlen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = uv__accept4(fd,addr,addrlen,flags);
          printf("%d\n", benchRet); 
          free(addr);
          free(addrlen);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
