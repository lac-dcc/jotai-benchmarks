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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ latency; scalar_t__ count; int /*<<< orphan*/  mode; } ;
struct TYPE_6__ {int cache_order; TYPE_1__ intr_coal; int /*<<< orphan*/  vendor_id; void* stripe_size; void* block_size; } ;
struct TYPE_5__ {int /*<<< orphan*/  version; } ;
struct rsxx_card_cfg {TYPE_3__ data; TYPE_2__ hdr; } ;

/* Variables and functions */
 int /*<<< orphan*/  RSXX_CFG_VERSION ; 
 void* RSXX_HW_BLK_SIZE ; 
 int /*<<< orphan*/  RSXX_INTR_COAL_DISABLED ; 
 int /*<<< orphan*/  RSXX_VENDOR_ID_IBM ; 

__attribute__((used)) static void initialize_config(struct rsxx_card_cfg *cfg)
{
	cfg->hdr.version = RSXX_CFG_VERSION;

	cfg->data.block_size        = RSXX_HW_BLK_SIZE;
	cfg->data.stripe_size       = RSXX_HW_BLK_SIZE;
	cfg->data.vendor_id         = RSXX_VENDOR_ID_IBM;
	cfg->data.cache_order       = (-1);
	cfg->data.intr_coal.mode    = RSXX_INTR_COAL_DISABLED;
	cfg->data.intr_coal.count   = 0;
	cfg->data.intr_coal.latency = 0;
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
          int _len_cfg0 = 1;
          struct rsxx_card_cfg * cfg = (struct rsxx_card_cfg *) malloc(_len_cfg0*sizeof(struct rsxx_card_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].data.cache_order = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].data.intr_coal.latency = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].data.intr_coal.count = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].data.intr_coal.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].data.vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].hdr.version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          initialize_config(cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
