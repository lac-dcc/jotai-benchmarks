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
       0            big-arr\n\
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
struct vx_core {int dummy; } ;
typedef  int pcx_time_t ;

/* Variables and functions */
 unsigned int MASK_DSP_WORD ; 
 unsigned int PCX_TIME_HI_MASK ; 

__attribute__((used)) static void vx_set_pcx_time(struct vx_core *chip, pcx_time_t *pc_time,
			    unsigned int *dsp_time)
{
	dsp_time[0] = (unsigned int)((*pc_time) >> 24) & PCX_TIME_HI_MASK;
	dsp_time[1] = (unsigned int)(*pc_time) &  MASK_DSP_WORD;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_chip0 = 65025;
          struct vx_core * chip = (struct vx_core *) malloc(_len_chip0*sizeof(struct vx_core));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pc_time0 = 65025;
          int * pc_time = (int *) malloc(_len_pc_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pc_time0; _i0++) {
            pc_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dsp_time0 = 65025;
          unsigned int * dsp_time = (unsigned int *) malloc(_len_dsp_time0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dsp_time0; _i0++) {
            dsp_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vx_set_pcx_time(chip,pc_time,dsp_time);
          free(chip);
          free(pc_time);
          free(dsp_time);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_chip0 = 100;
          struct vx_core * chip = (struct vx_core *) malloc(_len_chip0*sizeof(struct vx_core));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_pc_time0 = 100;
          int * pc_time = (int *) malloc(_len_pc_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pc_time0; _i0++) {
            pc_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dsp_time0 = 100;
          unsigned int * dsp_time = (unsigned int *) malloc(_len_dsp_time0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dsp_time0; _i0++) {
            dsp_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          vx_set_pcx_time(chip,pc_time,dsp_time);
          free(chip);
          free(pc_time);
          free(dsp_time);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
