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
       1            big-arr-10x\n\
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
struct mtk_ddp_comp {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int mtk_ovl_layer_nr(struct mtk_ddp_comp *comp)
{
	return 4;
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
          int _len_comp0 = 1;
          struct mtk_ddp_comp * comp = (struct mtk_ddp_comp *) malloc(_len_comp0*sizeof(struct mtk_ddp_comp));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mtk_ovl_layer_nr(comp);
          printf("%u\n", benchRet); 
          free(comp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_comp0 = 100;
          struct mtk_ddp_comp * comp = (struct mtk_ddp_comp *) malloc(_len_comp0*sizeof(struct mtk_ddp_comp));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mtk_ovl_layer_nr(comp);
          printf("%u\n", benchRet); 
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}