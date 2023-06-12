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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u64 ;

/* Variables and functions */
 int PM_BUSEVENT_MSK ; 
 int PM_BYTE_MSK ; 
 int PM_BYTE_SH ; 
 int PM_PMC_MSK ; 
 int PM_PMC_SH ; 
 int PM_SUBUNIT_MSK ; 
 int PM_SUBUNIT_SH ; 
 int PM_UNIT_MSKS ; 
 int PM_UNIT_SH ; 

__attribute__((used)) static int p6_get_constraint(u64 event, unsigned long *maskp,
			     unsigned long *valp)
{
	int pmc, byte, sh, subunit;
	unsigned long mask = 0, value = 0;

	pmc = (event >> PM_PMC_SH) & PM_PMC_MSK;
	if (pmc) {
		if (pmc > 4 && !(event == 0x500009 || event == 0x600005))
			return -1;
		sh = (pmc - 1) * 2;
		mask |= 2 << sh;
		value |= 1 << sh;
	}
	if (event & PM_BUSEVENT_MSK) {
		byte = (event >> PM_BYTE_SH) & PM_BYTE_MSK;
		sh = byte * 4 + (16 - PM_UNIT_SH);
		mask |= PM_UNIT_MSKS << sh;
		value |= (unsigned long)(event & PM_UNIT_MSKS) << sh;
		if ((event & PM_UNIT_MSKS) == (5 << PM_UNIT_SH)) {
			subunit = (event >> PM_SUBUNIT_SH) & PM_SUBUNIT_MSK;
			mask  |= (unsigned long)PM_SUBUNIT_MSK << 32;
			value |= (unsigned long)subunit << 32;
		}
	}
	if (pmc <= 4) {
		mask  |= 0x8000;	/* add field for count of PMC1-4 uses */
		value |= 0x1000;
	}
	*maskp = mask;
	*valp = value;
	return 0;
}

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
        
          int benchRet = p6_get_constraint(event,maskp,valp);
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
        
          int benchRet = p6_get_constraint(event,maskp,valp);
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
        
          int benchRet = p6_get_constraint(event,maskp,valp);
          printf("%d\n", benchRet); 
          free(maskp);
          free(valp);
        
        break;
    }
    // empty
    case 3:
    {
          int event = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
        
          int benchRet = p6_get_constraint(event,maskp,valp);
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
