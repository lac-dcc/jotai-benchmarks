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
struct qlcnic_fw_dump {int use_pex_dma; int /*<<< orphan*/  cap_mask; int /*<<< orphan*/  offset; int /*<<< orphan*/  num_entries; int /*<<< orphan*/  version; int /*<<< orphan*/  tmpl_hdr_size; struct qlcnic_82xx_dump_template_hdr* tmpl_hdr; } ;
struct qlcnic_82xx_dump_template_hdr {int capabilities; int /*<<< orphan*/  cap_mask; int /*<<< orphan*/  drv_cap_mask; int /*<<< orphan*/  offset; int /*<<< orphan*/  num_entries; int /*<<< orphan*/  version; int /*<<< orphan*/  size; } ;

/* Variables and functions */
 int BIT_0 ; 

void qlcnic_82xx_cache_tmpl_hdr_values(struct qlcnic_fw_dump *fw_dump)
{
	struct qlcnic_82xx_dump_template_hdr *hdr;

	hdr = fw_dump->tmpl_hdr;
	fw_dump->tmpl_hdr_size = hdr->size;
	fw_dump->version = hdr->version;
	fw_dump->num_entries = hdr->num_entries;
	fw_dump->offset = hdr->offset;

	hdr->drv_cap_mask = hdr->cap_mask;
	fw_dump->cap_mask = hdr->cap_mask;

	fw_dump->use_pex_dma = (hdr->capabilities & BIT_0) ? true : false;
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
          int _len_fw_dump0 = 1;
          struct qlcnic_fw_dump * fw_dump = (struct qlcnic_fw_dump *) malloc(_len_fw_dump0*sizeof(struct qlcnic_fw_dump));
          for(int _i0 = 0; _i0 < _len_fw_dump0; _i0++) {
            fw_dump[_i0].use_pex_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].cap_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fw_dump__i0__tmpl_hdr0 = 1;
          fw_dump[_i0].tmpl_hdr = (struct qlcnic_82xx_dump_template_hdr *) malloc(_len_fw_dump__i0__tmpl_hdr0*sizeof(struct qlcnic_82xx_dump_template_hdr));
          for(int _j0 = 0; _j0 < _len_fw_dump__i0__tmpl_hdr0; _j0++) {
            fw_dump[_i0].tmpl_hdr->capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->cap_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->drv_cap_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->version = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_dump[_i0].tmpl_hdr->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_82xx_cache_tmpl_hdr_values(fw_dump);
          for(int _aux = 0; _aux < _len_fw_dump0; _aux++) {
          free(fw_dump[_aux].tmpl_hdr);
          }
          free(fw_dump);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
