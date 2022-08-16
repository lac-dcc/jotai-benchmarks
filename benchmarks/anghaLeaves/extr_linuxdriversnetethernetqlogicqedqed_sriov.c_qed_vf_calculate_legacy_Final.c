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
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_3__ {scalar_t__ eth_fp_hsi_minor; int capabilities; } ;
struct TYPE_4__ {TYPE_1__ vfdev_info; } ;
struct qed_vf_info {TYPE_2__ acquire; } ;

/* Variables and functions */
 scalar_t__ ETH_HSI_VER_NO_PKT_LEN_TUNN ; 
 int /*<<< orphan*/  QED_QCID_LEGACY_VF_CID ; 
 int /*<<< orphan*/  QED_QCID_LEGACY_VF_RX_PROD ; 
 int VFPF_ACQUIRE_CAP_QUEUE_QIDS ; 

__attribute__((used)) static u8 qed_vf_calculate_legacy(struct qed_vf_info *p_vf)
{
	u8 legacy = 0;

	if (p_vf->acquire.vfdev_info.eth_fp_hsi_minor ==
	    ETH_HSI_VER_NO_PKT_LEN_TUNN)
		legacy |= QED_QCID_LEGACY_VF_RX_PROD;

	if (!(p_vf->acquire.vfdev_info.capabilities &
	      VFPF_ACQUIRE_CAP_QUEUE_QIDS))
		legacy |= QED_QCID_LEGACY_VF_CID;

	return legacy;
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
          int _len_p_vf0 = 1;
          struct qed_vf_info * p_vf = (struct qed_vf_info *) malloc(_len_p_vf0*sizeof(struct qed_vf_info));
          for(int _i0 = 0; _i0 < _len_p_vf0; _i0++) {
            p_vf[_i0].acquire.vfdev_info.eth_fp_hsi_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        p_vf[_i0].acquire.vfdev_info.capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_vf_calculate_legacy(p_vf);
          printf("%d\n", benchRet); 
          free(p_vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
