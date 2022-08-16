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
typedef  int ut32 ;
typedef  int st32 ;

/* Variables and functions */

st32 get_hashfunc_28(st32 arg1, st32 arg2) {
	st32 v2; 
	st32 v3; 
	char v5; 

	v2 = arg2;
	v3 = v2 & 0x1F800;
	if ( (ut32)v3 <= 0xA000 ) {
		if ( v3 != 40960 ) {
			if ( (ut32)v3 <= 0x3000 ) {
				if (v3 == 12288) {
					return 384;
				}
				if ( (ut32)v3 <= 0x1800 ) {
					if ( v3 != 6144 && v3 && v3 != 2048 ) {
						if (v3 == 4096) {
							return 384;
						}
						return arg1;
					}
					return 384;
				}
				if (v3 == 8192 || v3 == 10240) {
					return 384;
				}
				return arg1;
			}
			if ( (ut32)v3 > 0x8800 ) {
				if ( v3 != 36864 ) {
					if (v3 == 38912) {
						return 385;
					}
					return arg1;
				}
			} else {
				if ( v3 != 34816 ) {
					if ( v3 != 14336 ) {
						if (v3 == 24576) {
							return 388;
						}
						if (v3 == 32768) {
							return 385;
						}
						return arg1;
					}
					return 384;
				}
			}
		}
		return 385;
	}
	if ( (ut32)v3 <= 0x11000 ) {
		if (v3 == 69632) {
			return 386;
		}
		if ( (ut32)v3 <= 0xE000 ) {
			if (v3 == 57344) {
				return 387;
			}
			if (v3 != 43008 && v3 != 45056 && v3 != 47104) {
				return arg1;
			}
			return 385;
		}
		if (v3 == 65536) {
			return 386;
		}
		v5 = v3 == 67584;
		LABEL_35:
			if (!v5) {
				return arg1;
			}
			return 386;
	}
	if ( (ut32)v3 <= 0x13000 ) {
		if (v3 == 77824 || v3 == 71680 || v3 == 73728) {
			return 386;
		}
		v5 = v3 == 75776;
		goto LABEL_35;
	}
	if (v3 == 79872) {
		return 386;
	}
	if (v3 != 90112) {
		return arg1;
	}
	return 389;
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
          int benchRet = get_hashfunc_28(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int arg1 = 255;
          int arg2 = 255;
          int benchRet = get_hashfunc_28(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int arg1 = 10;
          int arg2 = 10;
          int benchRet = get_hashfunc_28(arg1,arg2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
