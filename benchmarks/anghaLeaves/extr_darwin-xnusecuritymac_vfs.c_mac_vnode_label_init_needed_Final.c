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
typedef  TYPE_1__* vnode_t ;
struct TYPE_3__ {int /*<<< orphan*/ * v_label; } ;

/* Variables and functions */
 scalar_t__ mac_label_vnodes ; 

int
mac_vnode_label_init_needed(vnode_t vp)
{
	return (mac_label_vnodes != 0 && vp->v_label == NULL);
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
          int _len_vp0 = 1;
          struct TYPE_3__ * vp = (struct TYPE_3__ *) malloc(_len_vp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
              int _len_vp__i0__v_label0 = 1;
          vp[_i0].v_label = (int *) malloc(_len_vp__i0__v_label0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vp__i0__v_label0; _j0++) {
            vp[_i0].v_label[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mac_vnode_label_init_needed(vp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vp0; _aux++) {
          free(vp[_aux].v_label);
          }
          free(vp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
