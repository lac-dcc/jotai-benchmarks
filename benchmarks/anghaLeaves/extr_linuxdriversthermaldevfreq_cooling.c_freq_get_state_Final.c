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
struct devfreq_cooling_device {int freq_table_size; unsigned long* freq_table; } ;

/* Variables and functions */
 unsigned long THERMAL_CSTATE_INVALID ; 

__attribute__((used)) static unsigned long
freq_get_state(struct devfreq_cooling_device *dfc, unsigned long freq)
{
	int i;

	for (i = 0; i < dfc->freq_table_size; i++) {
		if (dfc->freq_table[i] == freq)
			return i;
	}

	return THERMAL_CSTATE_INVALID;
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
          unsigned long freq = 100;
          int _len_dfc0 = 1;
          struct devfreq_cooling_device * dfc = (struct devfreq_cooling_device *) malloc(_len_dfc0*sizeof(struct devfreq_cooling_device));
          for(int _i0 = 0; _i0 < _len_dfc0; _i0++) {
            dfc[_i0].freq_table_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dfc__i0__freq_table0 = 1;
          dfc[_i0].freq_table = (unsigned long *) malloc(_len_dfc__i0__freq_table0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_dfc__i0__freq_table0; _j0++) {
            dfc[_i0].freq_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = freq_get_state(dfc,freq);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dfc0; _aux++) {
          free(dfc[_aux].freq_table);
          }
          free(dfc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
