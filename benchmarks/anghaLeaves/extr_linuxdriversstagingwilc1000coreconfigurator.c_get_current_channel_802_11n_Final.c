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
       0            big-arr-10x\n\
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
typedef  scalar_t__ u8 ;
typedef  size_t u16 ;

/* Variables and functions */
 size_t FCS_LEN ; 
 scalar_t__ IE_HDR_LEN ; 
 size_t TAG_PARAM_OFFSET ; 
 scalar_t__ WLAN_EID_DS_PARAMS ; 

__attribute__((used)) static u8 get_current_channel_802_11n(u8 *msa, u16 rx_len)
{
	u16 index;

	index = TAG_PARAM_OFFSET;
	while (index < (rx_len - FCS_LEN)) {
		if (msa[index] == WLAN_EID_DS_PARAMS)
			return msa[index + 2];
		index += msa[index + 1] + IE_HDR_LEN;
	}

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

    // big-arr-10x
    case 0:
    {
          unsigned long rx_len = 10;
          int _len_msa0 = 100;
          long * msa = (long *) malloc(_len_msa0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_msa0; _i0++) {
            msa[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_current_channel_802_11n(msa,rx_len);
          printf("%ld\n", benchRet); 
          free(msa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
