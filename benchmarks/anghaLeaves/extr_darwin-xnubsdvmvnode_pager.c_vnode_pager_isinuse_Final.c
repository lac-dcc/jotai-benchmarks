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

/* Type definitions */
typedef  int uint32_t ;
struct vnode {scalar_t__ v_usecount; scalar_t__ v_kusecount; } ;

/* Variables and functions */

uint32_t
vnode_pager_isinuse(struct vnode *vp)
{
	if (vp->v_usecount > vp->v_kusecount)
		return (1);
	return (0);
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
          struct vnode * vp = (struct vnode *) malloc(_len_vp0*sizeof(struct vnode));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
            vp[_i0].v_usecount = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].v_kusecount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vnode_pager_isinuse(vp);
          printf("%d\n", benchRet); 
          free(vp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
