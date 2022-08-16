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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct rpc_cluster_bucket {TYPE_1__* T; } ;
struct TYPE_2__ {int custom_field; } ;

/* Variables and functions */

unsigned __conn_get_host (struct rpc_cluster_bucket *B) {
  return B->T->custom_field;
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
          int _len_B0 = 1;
          struct rpc_cluster_bucket * B = (struct rpc_cluster_bucket *) malloc(_len_B0*sizeof(struct rpc_cluster_bucket));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__T0 = 1;
          B[_i0].T = (struct TYPE_2__ *) malloc(_len_B__i0__T0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_B__i0__T0; _j0++) {
            B[_i0].T->custom_field = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = __conn_get_host(B);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].T);
          }
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
