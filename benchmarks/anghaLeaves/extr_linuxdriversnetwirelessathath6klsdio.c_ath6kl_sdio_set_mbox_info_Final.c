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
struct ath6kl_mbox_info {int /*<<< orphan*/  gmbox_sz; int /*<<< orphan*/  gmbox_addr; int /*<<< orphan*/  block_size; int /*<<< orphan*/  htc_ext_sz; int /*<<< orphan*/  htc_ext_addr; int /*<<< orphan*/  htc_addr; } ;
struct ath6kl {struct ath6kl_mbox_info mbox_info; } ;

/* Variables and functions */
 int /*<<< orphan*/  HIF_GMBOX_BASE_ADDR ; 
 int /*<<< orphan*/  HIF_GMBOX_WIDTH ; 
 int /*<<< orphan*/  HIF_MBOX0_EXT_BASE_ADDR ; 
 int /*<<< orphan*/  HIF_MBOX0_EXT_WIDTH ; 
 int /*<<< orphan*/  HIF_MBOX_BASE_ADDR ; 
 int /*<<< orphan*/  HIF_MBOX_BLOCK_SIZE ; 

__attribute__((used)) static void ath6kl_sdio_set_mbox_info(struct ath6kl *ar)
{
	struct ath6kl_mbox_info *mbox_info = &ar->mbox_info;

	/* EP1 has an extended range */
	mbox_info->htc_addr = HIF_MBOX_BASE_ADDR;
	mbox_info->htc_ext_addr = HIF_MBOX0_EXT_BASE_ADDR;
	mbox_info->htc_ext_sz = HIF_MBOX0_EXT_WIDTH;
	mbox_info->block_size = HIF_MBOX_BLOCK_SIZE;
	mbox_info->gmbox_addr = HIF_GMBOX_BASE_ADDR;
	mbox_info->gmbox_sz = HIF_GMBOX_WIDTH;
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
          int _len_ar0 = 1;
          struct ath6kl * ar = (struct ath6kl *) malloc(_len_ar0*sizeof(struct ath6kl));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].mbox_info.gmbox_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].mbox_info.gmbox_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].mbox_info.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].mbox_info.htc_ext_sz = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].mbox_info.htc_ext_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].mbox_info.htc_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath6kl_sdio_set_mbox_info(ar);
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
