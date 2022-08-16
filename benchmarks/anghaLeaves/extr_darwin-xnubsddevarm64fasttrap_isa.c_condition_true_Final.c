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
 int PSR_CF ; 
 int PSR_NF ; 
 int PSR_VF ; 
 int PSR_ZF ; 

__attribute__((used)) static int condition_true(int cond, int cpsr)
{
	int taken = 0;
	int zf = (cpsr & PSR_ZF) ? 1 : 0,
	    nf = (cpsr & PSR_NF) ? 1 : 0,
	    cf = (cpsr & PSR_CF) ? 1 : 0,
	    vf = (cpsr & PSR_VF) ? 1 : 0;

	switch(cond) {
		case 0: taken = zf; break;
		case 1: taken = !zf; break;
		case 2: taken = cf; break;
		case 3: taken = !cf; break;
		case 4: taken = nf; break;
		case 5: taken = !nf; break;
		case 6: taken = vf; break;
		case 7: taken = !vf; break;
		case 8: taken = (cf && !zf); break;
		case 9: taken = (!cf || zf); break;
		case 10: taken = (nf == vf); break;
		case 11: taken = (nf != vf); break;
		case 12: taken = (!zf && (nf == vf)); break;
		case 13: taken = (zf || (nf != vf)); break;
		case 14: taken = 1; break;
		case 15: taken = 1; break; /* always "true" for ARM, unpredictable for THUMB. */
	}

	return taken;
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
          int cond = 100;
          int cpsr = 100;
          int benchRet = condition_true(cond,cpsr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cond = 255;
          int cpsr = 255;
          int benchRet = condition_true(cond,cpsr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cond = 10;
          int cpsr = 10;
          int benchRet = condition_true(cond,cpsr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
