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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u16 ;
struct ath10k_htc {int /*<<< orphan*/  total_transmit_credits; } ;

/* Variables and functions */
 scalar_t__ ATH10K_HTC_SVC_ID_WMI_CONTROL ; 

__attribute__((used)) static u8 ath10k_htc_get_credit_allocation(struct ath10k_htc *htc,
					   u16 service_id)
{
	u8 allocation = 0;

	/* The WMI control service is the only service with flow control.
	 * Let it have all transmit credits.
	 */
	if (service_id == ATH10K_HTC_SVC_ID_WMI_CONTROL)
		allocation = htc->total_transmit_credits;

	return allocation;
}

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
          long service_id = 100;
        
          int _len_htc0 = 1;
          struct ath10k_htc * htc = (struct ath10k_htc *) malloc(_len_htc0*sizeof(struct ath10k_htc));
          for(int _i0 = 0; _i0 < _len_htc0; _i0++) {
              htc[_i0].total_transmit_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath10k_htc_get_credit_allocation(htc,service_id);
          printf("%d\n", benchRet); 
          free(htc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long service_id = 255;
        
          int _len_htc0 = 65025;
          struct ath10k_htc * htc = (struct ath10k_htc *) malloc(_len_htc0*sizeof(struct ath10k_htc));
          for(int _i0 = 0; _i0 < _len_htc0; _i0++) {
              htc[_i0].total_transmit_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath10k_htc_get_credit_allocation(htc,service_id);
          printf("%d\n", benchRet); 
          free(htc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long service_id = 10;
        
          int _len_htc0 = 100;
          struct ath10k_htc * htc = (struct ath10k_htc *) malloc(_len_htc0*sizeof(struct ath10k_htc));
          for(int _i0 = 0; _i0 < _len_htc0; _i0++) {
              htc[_i0].total_transmit_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath10k_htc_get_credit_allocation(htc,service_id);
          printf("%d\n", benchRet); 
          free(htc);
        
        break;
    }
    // empty
    case 3:
    {
          long service_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_htc0 = 1;
          struct ath10k_htc * htc = (struct ath10k_htc *) malloc(_len_htc0*sizeof(struct ath10k_htc));
          for(int _i0 = 0; _i0 < _len_htc0; _i0++) {
              htc[_i0].total_transmit_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ath10k_htc_get_credit_allocation(htc,service_id);
          printf("%d\n", benchRet); 
          free(htc);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
