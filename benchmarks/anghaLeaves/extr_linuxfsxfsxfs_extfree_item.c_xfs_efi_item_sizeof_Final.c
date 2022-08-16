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
typedef  int /*<<< orphan*/  xfs_extent_t ;
struct TYPE_2__ {int efi_nextents; } ;
struct xfs_efi_log_item {TYPE_1__ efi_format; } ;
struct xfs_efi_log_format {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int
xfs_efi_item_sizeof(
	struct xfs_efi_log_item *efip)
{
	return sizeof(struct xfs_efi_log_format) +
	       (efip->efi_format.efi_nextents - 1) * sizeof(xfs_extent_t);
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
          int _len_efip0 = 1;
          struct xfs_efi_log_item * efip = (struct xfs_efi_log_item *) malloc(_len_efip0*sizeof(struct xfs_efi_log_item));
          for(int _i0 = 0; _i0 < _len_efip0; _i0++) {
            efip[_i0].efi_format.efi_nextents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_efi_item_sizeof(efip);
          printf("%d\n", benchRet); 
          free(efip);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_efip0 = 100;
          struct xfs_efi_log_item * efip = (struct xfs_efi_log_item *) malloc(_len_efip0*sizeof(struct xfs_efi_log_item));
          for(int _i0 = 0; _i0 < _len_efip0; _i0++) {
            efip[_i0].efi_format.efi_nextents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_efi_item_sizeof(efip);
          printf("%d\n", benchRet); 
          free(efip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
