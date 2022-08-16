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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int size; int /*<<< orphan*/  pkt_type; } ;
struct hfi_sys_test_ssr_pkt {int trigger_type; TYPE_1__ hdr; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  HFI_CMD_SYS_TEST_SSR ; 
#define  HFI_TEST_SSR_HW_WDOG_IRQ 130 
#define  HFI_TEST_SSR_SW_DIV_BY_ZERO 129 
#define  HFI_TEST_SSR_SW_ERR_FATAL 128 

int pkt_sys_ssr_cmd(struct hfi_sys_test_ssr_pkt *pkt, u32 trigger_type)
{
	switch (trigger_type) {
	case HFI_TEST_SSR_SW_ERR_FATAL:
	case HFI_TEST_SSR_SW_DIV_BY_ZERO:
	case HFI_TEST_SSR_HW_WDOG_IRQ:
		break;
	default:
		return -EINVAL;
	}

	pkt->hdr.size = sizeof(*pkt);
	pkt->hdr.pkt_type = HFI_CMD_SYS_TEST_SSR;
	pkt->trigger_type = trigger_type;

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
          int trigger_type = 100;
          int _len_pkt0 = 1;
          struct hfi_sys_test_ssr_pkt * pkt = (struct hfi_sys_test_ssr_pkt *) malloc(_len_pkt0*sizeof(struct hfi_sys_test_ssr_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].trigger_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt[_i0].hdr.size = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt[_i0].hdr.pkt_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pkt_sys_ssr_cmd(pkt,trigger_type);
          printf("%d\n", benchRet); 
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
