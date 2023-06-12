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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;

/* Variables and functions */
 scalar_t__ CFI_MFR_SHARP ; 
 scalar_t__ LH28F640BFHE_PBTL70A ; 
 scalar_t__ LH28F640BFHE_PBTL90 ; 
 scalar_t__ LH28F640BFHE_PTTL70A ; 
 scalar_t__ LH28F640BFHE_PTTL90 ; 

__attribute__((used)) static int is_LH28F640BF(struct cfi_private *cfi)
{
	/* Sharp LH28F640BF Family */
	if (cfi->mfr == CFI_MFR_SHARP && (
	    cfi->id == LH28F640BFHE_PTTL90 || cfi->id == LH28F640BFHE_PBTL90 ||
	    cfi->id == LH28F640BFHE_PTTL70A || cfi->id == LH28F640BFHE_PBTL70A))
		return 1;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_cfi0 = 65025;
          struct cfi_private * cfi = (struct cfi_private *) malloc(_len_cfi0*sizeof(struct cfi_private));
          for(int _i0 = 0; _i0 < _len_cfi0; _i0++) {
              cfi[_i0].mfr = ((-2 * (next_i()%2)) + 1) * next_i();
          cfi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_LH28F640BF(cfi);
          printf("%d\n", benchRet); 
          free(cfi);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_cfi0 = 100;
          struct cfi_private * cfi = (struct cfi_private *) malloc(_len_cfi0*sizeof(struct cfi_private));
          for(int _i0 = 0; _i0 < _len_cfi0; _i0++) {
              cfi[_i0].mfr = ((-2 * (next_i()%2)) + 1) * next_i();
          cfi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_LH28F640BF(cfi);
          printf("%d\n", benchRet); 
          free(cfi);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int _len_cfi0 = 1;
          struct cfi_private * cfi = (struct cfi_private *) malloc(_len_cfi0*sizeof(struct cfi_private));
          for(int _i0 = 0; _i0 < _len_cfi0; _i0++) {
              cfi[_i0].mfr = ((-2 * (next_i()%2)) + 1) * next_i();
          cfi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_LH28F640BF(cfi);
          printf("%d\n", benchRet); 
          free(cfi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
