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
struct omap_sdrc_params {unsigned long rate; } ;

/* Variables and functions */
 struct omap_sdrc_params* sdrc_init_params_cs0 ; 
 struct omap_sdrc_params* sdrc_init_params_cs1 ; 

int omap2_sdrc_get_params(unsigned long r,
			  struct omap_sdrc_params **sdrc_cs0,
			  struct omap_sdrc_params **sdrc_cs1)
{
	struct omap_sdrc_params *sp0, *sp1;

	if (!sdrc_init_params_cs0)
		return -1;

	sp0 = sdrc_init_params_cs0;
	sp1 = sdrc_init_params_cs1;

	while (sp0->rate && sp0->rate != r) {
		sp0++;
		if (sdrc_init_params_cs1)
			sp1++;
	}

	if (!sp0->rate)
		return -1;

	*sdrc_cs0 = sp0;
	*sdrc_cs1 = sp1;
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
          unsigned long r = 100;
          int _len_sdrc_cs00 = 1;
          struct omap_sdrc_params ** sdrc_cs0 = (struct omap_sdrc_params **) malloc(_len_sdrc_cs00*sizeof(struct omap_sdrc_params *));
          for(int _i0 = 0; _i0 < _len_sdrc_cs00; _i0++) {
            int _len_sdrc_cs01 = 1;
            sdrc_cs0[_i0] = (struct omap_sdrc_params *) malloc(_len_sdrc_cs01*sizeof(struct omap_sdrc_params));
            for(int _i1 = 0; _i1 < _len_sdrc_cs01; _i1++) {
              sdrc_cs0[_i0][_i1].rate = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_sdrc_cs10 = 1;
          struct omap_sdrc_params ** sdrc_cs1 = (struct omap_sdrc_params **) malloc(_len_sdrc_cs10*sizeof(struct omap_sdrc_params *));
          for(int _i0 = 0; _i0 < _len_sdrc_cs10; _i0++) {
            int _len_sdrc_cs11 = 1;
            sdrc_cs1[_i0] = (struct omap_sdrc_params *) malloc(_len_sdrc_cs11*sizeof(struct omap_sdrc_params));
            for(int _i1 = 0; _i1 < _len_sdrc_cs11; _i1++) {
              sdrc_cs1[_i0][_i1].rate = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = omap2_sdrc_get_params(r,sdrc_cs0,sdrc_cs1);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sdrc_cs00; i1++) {
            int _len_sdrc_cs01 = 1;
              free(sdrc_cs0[i1]);
          }
          free(sdrc_cs0);
          for(int i1 = 0; i1 < _len_sdrc_cs10; i1++) {
            int _len_sdrc_cs11 = 1;
              free(sdrc_cs1[i1]);
          }
          free(sdrc_cs1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
