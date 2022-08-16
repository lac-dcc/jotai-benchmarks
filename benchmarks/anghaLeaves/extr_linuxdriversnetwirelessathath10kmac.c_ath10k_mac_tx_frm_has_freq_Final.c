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
struct TYPE_4__ {int target_version_major; int target_version_minor; } ;
struct ath10k {TYPE_3__* running_fw; TYPE_1__ htt; } ;
struct TYPE_5__ {scalar_t__ htt_op_version; } ;
struct TYPE_6__ {TYPE_2__ fw_file; } ;

/* Variables and functions */
 scalar_t__ ATH10K_FW_HTT_OP_VERSION_TLV ; 

bool ath10k_mac_tx_frm_has_freq(struct ath10k *ar)
{
	/* FIXME: Not really sure since when the behaviour changed. At some
	 * point new firmware stopped requiring creation of peer entries for
	 * offchannel tx (and actually creating them causes issues with wmi-htc
	 * tx credit replenishment and reliability). Assuming it's at least 3.4
	 * because that's when the `freq` was introduced to TX_FRM HTT command.
	 */
	return (ar->htt.target_version_major >= 3 &&
		ar->htt.target_version_minor >= 4 &&
		ar->running_fw->fw_file.htt_op_version == ATH10K_FW_HTT_OP_VERSION_TLV);
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
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__running_fw0 = 1;
          ar[_i0].running_fw = (struct TYPE_6__ *) malloc(_len_ar__i0__running_fw0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ar__i0__running_fw0; _j0++) {
            ar[_i0].running_fw->fw_file.htt_op_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ar[_i0].htt.target_version_major = ((-2 * (next_i()%2)) + 1) * next_i();
        ar[_i0].htt.target_version_minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_tx_frm_has_freq(ar);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].running_fw);
          }
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
