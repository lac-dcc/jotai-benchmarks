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
typedef  scalar_t__ uint32_t ;
typedef  int u64 ;
struct vmw_private {scalar_t__ active_display_unit; scalar_t__ vram_size; scalar_t__ prim_bb_mem; } ;

/* Variables and functions */
 scalar_t__ vmw_du_screen_target ; 

bool vmw_kms_validate_mode_vram(struct vmw_private *dev_priv,
				uint32_t pitch,
				uint32_t height)
{
	return ((u64) pitch * (u64) height) < (u64)
		((dev_priv->active_display_unit == vmw_du_screen_target) ?
		 dev_priv->prim_bb_mem : dev_priv->vram_size);
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
          long pitch = 100;
          long height = 100;
          int _len_dev_priv0 = 1;
          struct vmw_private * dev_priv = (struct vmw_private *) malloc(_len_dev_priv0*sizeof(struct vmw_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
            dev_priv[_i0].active_display_unit = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].vram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_priv[_i0].prim_bb_mem = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmw_kms_validate_mode_vram(dev_priv,pitch,height);
          printf("%d\n", benchRet); 
          free(dev_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
