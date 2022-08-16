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
struct dk_cxlflash_uvirtual {int /*<<< orphan*/  last_lba; int /*<<< orphan*/  lun_size; int /*<<< orphan*/  rsrc_handle; int /*<<< orphan*/  context_id; int /*<<< orphan*/  hdr; } ;
struct dk_cxlflash_resize {int /*<<< orphan*/  last_lba; int /*<<< orphan*/  req_size; int /*<<< orphan*/  rsrc_handle; int /*<<< orphan*/  context_id; int /*<<< orphan*/  hdr; } ;

/* Variables and functions */

__attribute__((used)) static void marshal_virt_to_resize(struct dk_cxlflash_uvirtual *virt,
				   struct dk_cxlflash_resize *resize)
{
	resize->hdr = virt->hdr;
	resize->context_id = virt->context_id;
	resize->rsrc_handle = virt->rsrc_handle;
	resize->req_size = virt->lun_size;
	resize->last_lba = virt->last_lba;
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
          int _len_virt0 = 1;
          struct dk_cxlflash_uvirtual * virt = (struct dk_cxlflash_uvirtual *) malloc(_len_virt0*sizeof(struct dk_cxlflash_uvirtual));
          for(int _i0 = 0; _i0 < _len_virt0; _i0++) {
            virt[_i0].last_lba = ((-2 * (next_i()%2)) + 1) * next_i();
        virt[_i0].lun_size = ((-2 * (next_i()%2)) + 1) * next_i();
        virt[_i0].rsrc_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        virt[_i0].context_id = ((-2 * (next_i()%2)) + 1) * next_i();
        virt[_i0].hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resize0 = 1;
          struct dk_cxlflash_resize * resize = (struct dk_cxlflash_resize *) malloc(_len_resize0*sizeof(struct dk_cxlflash_resize));
          for(int _i0 = 0; _i0 < _len_resize0; _i0++) {
            resize[_i0].last_lba = ((-2 * (next_i()%2)) + 1) * next_i();
        resize[_i0].req_size = ((-2 * (next_i()%2)) + 1) * next_i();
        resize[_i0].rsrc_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        resize[_i0].context_id = ((-2 * (next_i()%2)) + 1) * next_i();
        resize[_i0].hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          marshal_virt_to_resize(virt,resize);
          free(virt);
          free(resize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
