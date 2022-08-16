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

/* Variables and functions */
 unsigned int ARMADA_37XX_DVFS_LOAD_0 ; 
 unsigned int ARMADA_37XX_DVFS_LOAD_1 ; 
 unsigned int ARMADA_37XX_DVFS_LOAD_2 ; 
 scalar_t__ ARMADA_37XX_NB_CONFIG_SHIFT ; 
 unsigned int ARMADA_37XX_NB_L0L1 ; 
 unsigned int ARMADA_37XX_NB_L2L3 ; 

__attribute__((used)) static void armada_3700_pm_dvfs_update_regs(unsigned int load_level,
					    unsigned int *reg,
					    unsigned int *offset)
{
	if (load_level <= ARMADA_37XX_DVFS_LOAD_1)
		*reg = ARMADA_37XX_NB_L0L1;
	else
		*reg = ARMADA_37XX_NB_L2L3;

	if (load_level == ARMADA_37XX_DVFS_LOAD_0 ||
	    load_level ==  ARMADA_37XX_DVFS_LOAD_2)
		*offset += ARMADA_37XX_NB_CONFIG_SHIFT;
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
          unsigned int load_level = 100;
          int _len_reg0 = 1;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          armada_3700_pm_dvfs_update_regs(load_level,reg,offset);
          free(reg);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
