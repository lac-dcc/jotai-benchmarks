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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {size_t used; TYPE_1__* action; } ;
typedef  TYPE_2__ posix_spawn_file_actions_t ;
struct TYPE_4__ {int filedes; int newfiledes; } ;

/* Variables and functions */
 size_t MAX_FILE_ACTIONS ; 

int posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *fa, int fd, int newfd)
{
    if (fa->used >= MAX_FILE_ACTIONS)
        return -1;
    fa->action[fa->used].filedes = fd;
    fa->action[fa->used].newfiledes = newfd;
    fa->used++;
    return 0;
}


// ------------------------------------------------------------------------- //




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
          int newfd = 100;
          int _len_fa0 = 1;
          struct TYPE_5__ * fa = (struct TYPE_5__ *) malloc(_len_fa0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fa0; _i0++) {
            fa[_i0].used = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fa__i0__action0 = 1;
          fa[_i0].action = (struct TYPE_4__ *) malloc(_len_fa__i0__action0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fa__i0__action0; _j0++) {
            fa[_i0].action->filedes = ((-2 * (next_i()%2)) + 1) * next_i();
        fa[_i0].action->newfiledes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = posix_spawn_file_actions_adddup2(fa,fd,newfd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fa0; _aux++) {
          free(fa[_aux].action);
          }
          free(fa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
