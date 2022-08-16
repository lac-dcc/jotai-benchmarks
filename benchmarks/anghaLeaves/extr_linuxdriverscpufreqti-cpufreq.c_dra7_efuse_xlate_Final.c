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
struct ti_cpufreq_data {int dummy; } ;

/* Variables and functions */
#define  DRA7_EFUSE_HAS_ALL_MPU_OPP 130 
#define  DRA7_EFUSE_HAS_HIGH_MPU_OPP 129 
#define  DRA7_EFUSE_HAS_OD_MPU_OPP 128 
 unsigned long DRA7_EFUSE_HIGH_MPU_OPP ; 
 unsigned long DRA7_EFUSE_NOM_MPU_OPP ; 
 unsigned long DRA7_EFUSE_OD_MPU_OPP ; 

__attribute__((used)) static unsigned long dra7_efuse_xlate(struct ti_cpufreq_data *opp_data,
				      unsigned long efuse)
{
	unsigned long calculated_efuse = DRA7_EFUSE_NOM_MPU_OPP;

	/*
	 * The efuse on dra7 and am57 parts contains a specific
	 * value indicating the highest available OPP.
	 */

	switch (efuse) {
	case DRA7_EFUSE_HAS_ALL_MPU_OPP:
	case DRA7_EFUSE_HAS_HIGH_MPU_OPP:
		calculated_efuse |= DRA7_EFUSE_HIGH_MPU_OPP;
	case DRA7_EFUSE_HAS_OD_MPU_OPP:
		calculated_efuse |= DRA7_EFUSE_OD_MPU_OPP;
	}

	return calculated_efuse;
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
          unsigned long efuse = 100;
          int _len_opp_data0 = 1;
          struct ti_cpufreq_data * opp_data = (struct ti_cpufreq_data *) malloc(_len_opp_data0*sizeof(struct ti_cpufreq_data));
          for(int _i0 = 0; _i0 < _len_opp_data0; _i0++) {
            opp_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dra7_efuse_xlate(opp_data,efuse);
          printf("%lu\n", benchRet); 
          free(opp_data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long efuse = 10;
          int _len_opp_data0 = 100;
          struct ti_cpufreq_data * opp_data = (struct ti_cpufreq_data *) malloc(_len_opp_data0*sizeof(struct ti_cpufreq_data));
          for(int _i0 = 0; _i0 < _len_opp_data0; _i0++) {
            opp_data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = dra7_efuse_xlate(opp_data,efuse);
          printf("%lu\n", benchRet); 
          free(opp_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
