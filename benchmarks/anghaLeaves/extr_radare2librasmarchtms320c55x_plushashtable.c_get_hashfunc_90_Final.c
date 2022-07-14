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
typedef  int ut32 ;
typedef  int st32 ;

/* Variables and functions */

st32 get_hashfunc_90(st32 arg1, st32 arg2) {
	st32 v2; 
	st32 v4; 
	st32 v5; 

	v2 = arg2 & 0x1F901B9;
	if ( (arg2 & 0x1F901B9u) <= 0x1810101 ) {
		if ((arg2 & 0x1F901B9) == 25231617) {
			return 498;
		}
		if ( (ut32)v2 <= 0x1000180 ) {
			if ( v2 != 16777600 ) {
				if (v2 == 8454401) {
					return 497;
				}
				if (v2 == 8454529) {
					return 499;
				}
				return arg1;
			}
			return 489;
		}
		if (v2 == 20971904) {
			return 489;
		}
		return arg1;
	}
	v4 = v2 - 25231744;
	if ( v4 ) {
		v5 = v4 - 1;
		if (!v5) {
			return 500;
		}

		/* FIX */
		v5 -= 0x3FFFFF;
		if(v5 != 0) {
			return arg1;
		}
		/*
		   if ( (_UNKNOWN *)v5 != &unk_3FFFFF )
		   return arg1;
		 */
	}
	return 496;
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
          int arg1 = 100;
          int arg2 = 100;
          int benchRet = get_hashfunc_90(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int arg1 = 255;
          int arg2 = 255;
          int benchRet = get_hashfunc_90(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int arg1 = 10;
          int arg2 = 10;
          int benchRet = get_hashfunc_90(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}