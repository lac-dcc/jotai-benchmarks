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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 int IEEE_8021QAZ_MAX_TCS ; 

__attribute__((used)) static bool mlxsw_sp_ets_has_pg(u8 *prio_tc, u8 pg)
{
	int i;

	for (i = 0; i < IEEE_8021QAZ_MAX_TCS; i++)
		if (prio_tc[i] == pg)
			return true;
	return false;
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

    // big-arr
    case 0:
    {
          long pg = 255;
          int _len_prio_tc0 = 65025;
          long * prio_tc = (long *) malloc(_len_prio_tc0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prio_tc0; _i0++) {
            prio_tc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_sp_ets_has_pg(prio_tc,pg);
          printf("%d\n", benchRet); 
          free(prio_tc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
