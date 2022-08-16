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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* fds; int* fds_types; scalar_t__ failed; scalar_t__ opened; int /*<<< orphan*/ ** fds_names; } ;
typedef  TYPE_1__ LISTEN_SOCKETS ;

/* Variables and functions */
 size_t MAX_LISTEN_FDS ; 

__attribute__((used)) static inline void listen_sockets_init(LISTEN_SOCKETS *sockets) {
    size_t i;
    for(i = 0; i < MAX_LISTEN_FDS ;i++) {
        sockets->fds[i] = -1;
        sockets->fds_names[i] = NULL;
        sockets->fds_types[i] = -1;
    }

    sockets->opened = 0;
    sockets->failed = 0;
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
          int _len_sockets0 = 1;
          struct TYPE_3__ * sockets = (struct TYPE_3__ *) malloc(_len_sockets0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_sockets0; _i0++) {
              int _len_sockets__i0__fds0 = 1;
          sockets[_i0].fds = (int *) malloc(_len_sockets__i0__fds0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sockets__i0__fds0; _j0++) {
            sockets[_i0].fds[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sockets__i0__fds_types0 = 1;
          sockets[_i0].fds_types = (int *) malloc(_len_sockets__i0__fds_types0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sockets__i0__fds_types0; _j0++) {
            sockets[_i0].fds_types[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sockets[_i0].failed = ((-2 * (next_i()%2)) + 1) * next_i();
        sockets[_i0].opened = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sockets__i0__fds_names0 = 1;
          sockets[_i0].fds_names = (int **) malloc(_len_sockets__i0__fds_names0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_sockets__i0__fds_names0; _j0++) {
            int _len_sockets__i0__fds_names1 = 1;
            sockets[_i0].fds_names[_j0] = (int *) malloc(_len_sockets__i0__fds_names1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_sockets__i0__fds_names1; _j1++) {
              sockets[_i0].fds_names[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          listen_sockets_init(sockets);
          for(int _aux = 0; _aux < _len_sockets0; _aux++) {
          free(sockets[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_sockets0; _aux++) {
          free(sockets[_aux].fds_types);
          }
          for(int _aux = 0; _aux < _len_sockets0; _aux++) {
          free(*(sockets[_aux].fds_names));
        free(sockets[_aux].fds_names);
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
