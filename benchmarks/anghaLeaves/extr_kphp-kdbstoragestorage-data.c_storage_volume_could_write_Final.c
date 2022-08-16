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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int binlogs; TYPE_2__** B; } ;
typedef  TYPE_3__ volume_t ;
struct TYPE_5__ {scalar_t__ fails; } ;
struct TYPE_6__ {scalar_t__ fd_wronly; TYPE_1__ st_fsync; } ;

/* Variables and functions */
 int STORAGE_ERR_NO_WRONLY_BINLOGS ; 

__attribute__((used)) static int storage_volume_could_write (volume_t *V) {
  int k;
  for (k = 0; k < V->binlogs; k++) {
    if (V->B[k]->fd_wronly >= 0 && V->B[k]->st_fsync.fails == 0) {
      return 0;
    }
  }
  return STORAGE_ERR_NO_WRONLY_BINLOGS;
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
          int _len_V0 = 1;
          struct TYPE_7__ * V = (struct TYPE_7__ *) malloc(_len_V0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_V0; _i0++) {
            V[_i0].binlogs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_V__i0__B0 = 1;
          V[_i0].B = (struct TYPE_6__ **) malloc(_len_V__i0__B0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_V__i0__B0; _j0++) {
            int _len_V__i0__B1 = 1;
            V[_i0].B[_j0] = (struct TYPE_6__ *) malloc(_len_V__i0__B1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_V__i0__B1; _j1++) {
              V[_i0].B[_j0]->fd_wronly = ((-2 * (next_i()%2)) + 1) * next_i();
        V[_i0].B[_j0]->st_fsync.fails = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = storage_volume_could_write(V);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_V0; _aux++) {
          free(*(V[_aux].B));
        free(V[_aux].B);
          }
          free(V);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
