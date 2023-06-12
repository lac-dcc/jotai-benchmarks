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
typedef  int ut32 ;
typedef  int st32 ;

/* Variables and functions */

st32 get_hashfunc_83(st32 arg1, st32 arg2) {
	st32 v2; 
	st32 result; 
	char v4; 

	v2 = arg2 & 0x1810180;
	if ( (arg2 & 0x1810180u) <= 0x800080 ) {
		if ( (arg2 & 0x1810180) != 8388736 ) {
			if ( (ut32)v2 <= 0x10000 ) {
				if (v2 == 65536) {
					return 193;
				}
				if ( (ut32)v2 <= 0x100 ) {
					if ( v2 != 256 ) {
						if ( v2 ) {
							if (v2 == 128) {
								return 197;
							}
							return arg1;
						}
						return 193;
					}
					return 202;
				}
				v4 = v2 == 384;
				LABEL_11:
					if (v4) {
						return 199;
					}
					return arg1;
			}
			if ( (ut32)v2 > 0x10180 ) {
				if (v2 == 8388608) {
					return 193;
				}
				return arg1;
			}
			if (v2 == 65920) {
				return 199;
			}
			if ( v2 != 65664 ) {
				if (v2 == 65792) {
					return 202;
				}
				return arg1;
			}
		}
		return 197;
	}
	if ( (ut32)v2 <= 0x810100 ) {
		if (v2 == 8454400) {
			return 202;
		}
		if ( (ut32)v2 <= 0x810000 ) {
			if (v2 == 8454144) {
				return 193;
			}
			if (v2 == 8388864) {
				return 202;
			}
			v4 = v2 == 8388992;
			goto LABEL_11;
		}
		if (v2 != 8454272) {
			return arg1;
		}
		return 197;
	}
	if (v2 == 8454528) {
		return 199;
	}
	if ( v2 == 16777216 ) {
		result = 205;
	} else {
		if (v2 != 16777344) {
			return arg1;
		}
		result = 206;
	}
	return result;
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
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 30
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int arg1 = 100;
        
          int arg2 = 100;
        
          int benchRet = get_hashfunc_83(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int arg1 = 255;
        
          int arg2 = 255;
        
          int benchRet = get_hashfunc_83(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 30
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int arg1 = 10;
        
          int arg2 = 10;
        
          int benchRet = get_hashfunc_83(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int arg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int arg2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = get_hashfunc_83(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
