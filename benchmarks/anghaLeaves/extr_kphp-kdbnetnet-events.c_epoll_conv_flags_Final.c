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

/* Variables and functions */
 int EPOLLERR ; 
 int EPOLLET ; 
 int EPOLLHUP ; 
 int EPOLLIN ; 
 int EPOLLOUT ; 
 int EPOLLPRI ; 
 int EPOLLRDHUP ; 
 int EVT_LEVEL ; 
 int EVT_NOHUP ; 
 int EVT_READ ; 
 int EVT_SPEC ; 
 int EVT_WRITE ; 

int epoll_conv_flags (int flags) {
  int r = EPOLLERR;
  if (flags == 0x204) {
    return EPOLLIN;
  }
  if (!flags) {
    return 0;
  }
  if (!(flags & EVT_NOHUP)) {
    r |= EPOLLHUP;
  }
  if (flags & EVT_READ) {
    r |= EPOLLIN;
  }
  if (flags & EVT_WRITE) {
    r |= EPOLLOUT;
  }
  if (flags & EVT_SPEC) {
    r |= EPOLLRDHUP | EPOLLPRI;
  }
  if (!(flags & EVT_LEVEL)) {
    r |= EPOLLET;
  }
  return r;
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
          int flags = 100;
        
          int benchRet = epoll_conv_flags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
        
          int benchRet = epoll_conv_flags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
        
          int benchRet = epoll_conv_flags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = epoll_conv_flags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
