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
typedef  int /*<<< orphan*/  u32 ;
struct desc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void debug_desc(u32 phys, struct desc *desc)
{
#if DEBUG_DESC
	printk(KERN_DEBUG "%X: %X %3X %3X %08X %2X < %2X %4X %X"
	       " %X %X %02X%02X%02X%02X%02X%02X < %02X%02X%02X%02X%02X%02X\n",
	       phys, desc->next, desc->buf_len, desc->pkt_len,
	       desc->data, desc->dest_id, desc->src_id, desc->flags,
	       desc->qos, desc->padlen, desc->vlan_tci,
	       desc->dst_mac_0, desc->dst_mac_1, desc->dst_mac_2,
	       desc->dst_mac_3, desc->dst_mac_4, desc->dst_mac_5,
	       desc->src_mac_0, desc->src_mac_1, desc->src_mac_2,
	       desc->src_mac_3, desc->src_mac_4, desc->src_mac_5);
#endif
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
          int phys = 100;
          int _len_desc0 = 1;
          struct desc * desc = (struct desc *) malloc(_len_desc0*sizeof(struct desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_desc(phys,desc);
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int phys = 10;
          int _len_desc0 = 100;
          struct desc * desc = (struct desc *) malloc(_len_desc0*sizeof(struct desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          debug_desc(phys,desc);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
