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
struct cfi_private {scalar_t__ mfr; scalar_t__ device_type; int id; } ;

/* Variables and functions */
 scalar_t__ CFI_DEVICETYPE_X16 ; 
 scalar_t__ CFI_DEVICETYPE_X8 ; 
 scalar_t__ CFI_MFR_INTEL ; 

__attribute__((used)) static int is_m29ew(struct cfi_private *cfi)
{
	if (cfi->mfr == CFI_MFR_INTEL &&
	    ((cfi->device_type == CFI_DEVICETYPE_X8 && (cfi->id & 0xff) == 0x7e) ||
	     (cfi->device_type == CFI_DEVICETYPE_X16 && cfi->id == 0x227e)))
		return 1;
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
          int _len_cfi0 = 1;
          struct cfi_private * cfi = (struct cfi_private *) malloc(_len_cfi0*sizeof(struct cfi_private));
          for(int _i0 = 0; _i0 < _len_cfi0; _i0++) {
            cfi[_i0].mfr = ((-2 * (next_i()%2)) + 1) * next_i();
        cfi[_i0].device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cfi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_m29ew(cfi);
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
