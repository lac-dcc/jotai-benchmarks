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
       0            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {size_t opened; int* fds; } ;
typedef  TYPE_1__ LISTEN_SOCKETS ;

/* Variables and functions */

int listen_sockets_check_is_member(LISTEN_SOCKETS *sockets, int fd) {
    size_t i;
    for(i = 0; i < sockets->opened ;i++)
        if(sockets->fds[i] == fd) return 1;

    return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sockets0 = 1;
          struct TYPE_3__ * sockets = (struct TYPE_3__ *) malloc(_len_sockets0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sockets0; _i0++) {
              sockets[_i0].opened = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sockets__i0__fds0 = 1;
          sockets[_i0].fds = (int *) malloc(_len_sockets__i0__fds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sockets__i0__fds0; _j0++) {
            sockets[_i0].fds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = listen_sockets_check_is_member(sockets,fd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sockets0; _aux++) {
          free(sockets[_aux].fds);
          }
          free(sockets);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
