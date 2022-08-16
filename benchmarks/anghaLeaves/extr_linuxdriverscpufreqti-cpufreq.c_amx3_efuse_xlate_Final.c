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
struct ti_cpufreq_data {TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned long efuse_fallback; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long amx3_efuse_xlate(struct ti_cpufreq_data *opp_data,
				      unsigned long efuse)
{
	if (!efuse)
		efuse = opp_data->soc_data->efuse_fallback;
	/* AM335x and AM437x use "OPP disable" bits, so invert */
	return ~efuse;
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
              int _len_opp_data__i0__soc_data0 = 1;
          opp_data[_i0].soc_data = (struct TYPE_2__ *) malloc(_len_opp_data__i0__soc_data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_opp_data__i0__soc_data0; _j0++) {
            opp_data[_i0].soc_data->efuse_fallback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = amx3_efuse_xlate(opp_data,efuse);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_opp_data0; _aux++) {
          free(opp_data[_aux].soc_data);
          }
          free(opp_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
