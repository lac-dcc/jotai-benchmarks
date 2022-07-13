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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u64 ;

/* Variables and functions */
 int PM_BYTE_MSK ; 
 int PM_BYTE_SH ; 
 int PM_LASTUNIT ; 
 int PM_PMC_MSK ; 
 int PM_PMC_SH ; 
 int PM_SPCSEL_MSK ; 
 int PM_SPCSEL_SH ; 
 int PM_UNIT_MSK ; 
 int PM_UNIT_SH ; 
 unsigned long** unit_cons ; 

__attribute__((used)) static int p970_get_constraint(u64 event, unsigned long *maskp,
			       unsigned long *valp)
{
	int pmc, byte, unit, sh, spcsel;
	unsigned long mask = 0, value = 0;
	int grp = -1;

	pmc = (event >> PM_PMC_SH) & PM_PMC_MSK;
	if (pmc) {
		if (pmc > 8)
			return -1;
		sh = (pmc - 1) * 2;
		mask |= 2 << sh;
		value |= 1 << sh;
		grp = ((pmc - 1) >> 1) & 1;
	}
	unit = (event >> PM_UNIT_SH) & PM_UNIT_MSK;
	if (unit) {
		if (unit > PM_LASTUNIT)
			return -1;
		mask |= unit_cons[unit][0];
		value |= unit_cons[unit][1];
		byte = (event >> PM_BYTE_SH) & PM_BYTE_MSK;
		/*
		 * Bus events on bytes 0 and 2 can be counted
		 * on PMC1/2/5/6; bytes 1 and 3 on PMC3/4/7/8.
		 */
		if (!pmc)
			grp = byte & 1;
		/* Set byte lane select field */
		mask  |= 0xfULL << (28 - 4 * byte);
		value |= (unsigned long)unit << (28 - 4 * byte);
	}
	if (grp == 0) {
		/* increment PMC1/2/5/6 field */
		mask  |= 0x8000000000ull;
		value |= 0x1000000000ull;
	} else if (grp == 1) {
		/* increment PMC3/4/7/8 field */
		mask  |= 0x800000000ull;
		value |= 0x100000000ull;
	}
	spcsel = (event >> PM_SPCSEL_SH) & PM_SPCSEL_MSK;
	if (spcsel) {
		mask  |= 3ull << 48;
		value |= (unsigned long)spcsel << 48;
	}
	*maskp = mask;
	*valp = value;
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
          int event = 100;
          int _len_maskp0 = 1;
          unsigned long * maskp = (unsigned long *) malloc(_len_maskp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maskp0; _i0++) {
            maskp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 1;
          unsigned long * valp = (unsigned long *) malloc(_len_valp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = p970_get_constraint(event,maskp,valp);
          printf("%d\n", benchRet); 
          free(maskp);
          free(valp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int event = 255;
          int _len_maskp0 = 65025;
          unsigned long * maskp = (unsigned long *) malloc(_len_maskp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maskp0; _i0++) {
            maskp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 65025;
          unsigned long * valp = (unsigned long *) malloc(_len_valp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = p970_get_constraint(event,maskp,valp);
          printf("%d\n", benchRet); 
          free(maskp);
          free(valp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int event = 10;
          int _len_maskp0 = 100;
          unsigned long * maskp = (unsigned long *) malloc(_len_maskp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_maskp0; _i0++) {
            maskp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_valp0 = 100;
          unsigned long * valp = (unsigned long *) malloc(_len_valp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_valp0; _i0++) {
            valp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = p970_get_constraint(event,maskp,valp);
          printf("%d\n", benchRet); 
          free(maskp);
          free(valp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
