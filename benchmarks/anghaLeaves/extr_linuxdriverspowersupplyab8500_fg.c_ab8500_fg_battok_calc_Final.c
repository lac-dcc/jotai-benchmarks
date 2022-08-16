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
struct ab8500_fg {int dummy; } ;

/* Variables and functions */
 int BATT_OK_INCREMENT ; 
 int BATT_OK_MAX_NR_INCREMENTS ; 
 int BATT_OK_MIN ; 

__attribute__((used)) static int ab8500_fg_battok_calc(struct ab8500_fg *di, int target)
{
	if (target > BATT_OK_MIN +
		(BATT_OK_INCREMENT * BATT_OK_MAX_NR_INCREMENTS))
		return BATT_OK_MAX_NR_INCREMENTS;
	if (target < BATT_OK_MIN)
		return 0;
	return (target - BATT_OK_MIN) / BATT_OK_INCREMENT;
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
          int target = 100;
          int _len_di0 = 1;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_fg_battok_calc(di,target);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int target = 10;
          int _len_di0 = 100;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ab8500_fg_battok_calc(di,target);
          printf("%d\n", benchRet); 
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
