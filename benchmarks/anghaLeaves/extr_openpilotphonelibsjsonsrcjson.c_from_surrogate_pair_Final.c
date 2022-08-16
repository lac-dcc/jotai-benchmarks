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
typedef  int uint16_t ;
typedef  int uchar_t ;

/* Variables and functions */

__attribute__((used)) static bool from_surrogate_pair(uint16_t uc, uint16_t lc, uchar_t *unicode)
{
	if (uc >= 0xD800 && uc <= 0xDBFF && lc >= 0xDC00 && lc <= 0xDFFF) {
		*unicode = 0x10000 + ((((uchar_t)uc & 0x3FF) << 10) | (lc & 0x3FF));
		return true;
	} else {
		return false;
	}
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
          int uc = 100;
          int lc = 100;
          int _len_unicode0 = 1;
          int * unicode = (int *) malloc(_len_unicode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_unicode0; _i0++) {
            unicode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = from_surrogate_pair(uc,lc,unicode);
          printf("%d\n", benchRet); 
          free(unicode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int uc = 10;
          int lc = 10;
          int _len_unicode0 = 100;
          int * unicode = (int *) malloc(_len_unicode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_unicode0; _i0++) {
            unicode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = from_surrogate_pair(uc,lc,unicode);
          printf("%d\n", benchRet); 
          free(unicode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
