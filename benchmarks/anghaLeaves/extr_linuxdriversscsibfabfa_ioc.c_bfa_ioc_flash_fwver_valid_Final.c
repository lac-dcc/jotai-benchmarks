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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int major; } ;
struct bfi_ioc_image_hdr_s {TYPE_1__ fwver; } ;
typedef  int /*<<< orphan*/  bfa_boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  BFA_FALSE ; 
 int /*<<< orphan*/  BFA_TRUE ; 

__attribute__((used)) static bfa_boolean_t
bfa_ioc_flash_fwver_valid(struct bfi_ioc_image_hdr_s *flash_fwhdr)
{
	if (flash_fwhdr->fwver.major == 0 || flash_fwhdr->fwver.major == 0xFF)
		return BFA_FALSE;

	return BFA_TRUE;
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
          int _len_flash_fwhdr0 = 1;
          struct bfi_ioc_image_hdr_s * flash_fwhdr = (struct bfi_ioc_image_hdr_s *) malloc(_len_flash_fwhdr0*sizeof(struct bfi_ioc_image_hdr_s));
          for(int _i0 = 0; _i0 < _len_flash_fwhdr0; _i0++) {
            flash_fwhdr[_i0].fwver.major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bfa_ioc_flash_fwver_valid(flash_fwhdr);
          printf("%d\n", benchRet); 
          free(flash_fwhdr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_flash_fwhdr0 = 100;
          struct bfi_ioc_image_hdr_s * flash_fwhdr = (struct bfi_ioc_image_hdr_s *) malloc(_len_flash_fwhdr0*sizeof(struct bfi_ioc_image_hdr_s));
          for(int _i0 = 0; _i0 < _len_flash_fwhdr0; _i0++) {
            flash_fwhdr[_i0].fwver.major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bfa_ioc_flash_fwver_valid(flash_fwhdr);
          printf("%d\n", benchRet); 
          free(flash_fwhdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
