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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ cfi_tail_drop_cnt; } ;
struct TYPE_3__ {scalar_t__ cfi_tail_drop_cnt; } ;
struct cfil_info {TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; } ;

/* Variables and functions */

bool
cfil_info_buffer_threshold_exceeded(struct cfil_info *cfil_info)
{
	if (cfil_info == NULL)
		return false;

	/*
	 * Clean up flow if it exceeded queue thresholds
	 */
	if (cfil_info->cfi_snd.cfi_tail_drop_cnt ||
		cfil_info->cfi_rcv.cfi_tail_drop_cnt) {
#if GC_DEBUG
		CFIL_LOG(LOG_ERR, "CFIL: queue threshold exceeded: mbuf max <count: %d bytes: %d> tail drop count <OUT: %d IN: %d>",
				 cfil_udp_gc_mbuf_num_max,
				 cfil_udp_gc_mbuf_cnt_max,
				 cfil_info->cfi_snd.cfi_tail_drop_cnt,
				 cfil_info->cfi_rcv.cfi_tail_drop_cnt);
		cfil_info_log(LOG_ERR, cfil_info, "CFIL: queue threshold exceeded");
#endif
		return true;
	}

	return false;
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
          int _len_cfil_info0 = 1;
          struct cfil_info * cfil_info = (struct cfil_info *) malloc(_len_cfil_info0*sizeof(struct cfil_info));
          for(int _i0 = 0; _i0 < _len_cfil_info0; _i0++) {
            cfil_info[_i0].cfi_rcv.cfi_tail_drop_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        cfil_info[_i0].cfi_snd.cfi_tail_drop_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfil_info_buffer_threshold_exceeded(cfil_info);
          printf("%d\n", benchRet); 
          free(cfil_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
