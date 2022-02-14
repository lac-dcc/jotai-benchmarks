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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ufs_pa_layer_attr {scalar_t__ pwr_rx; scalar_t__ pwr_tx; } ;

/* Variables and functions */
 scalar_t__ FASTAUTO_MODE ; 
 scalar_t__ FAST_MODE ; 

__attribute__((used)) static inline bool ufshcd_is_hs_mode(struct ufs_pa_layer_attr *pwr_info)
{
	return (pwr_info->pwr_rx == FAST_MODE ||
		pwr_info->pwr_rx == FASTAUTO_MODE) &&
		(pwr_info->pwr_tx == FAST_MODE ||
		pwr_info->pwr_tx == FASTAUTO_MODE);
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

    // big-arr
    case 0:
    {
          int _len_pwr_info0 = 1;
          struct ufs_pa_layer_attr * pwr_info = (struct ufs_pa_layer_attr *) malloc(_len_pwr_info0*sizeof(struct ufs_pa_layer_attr));
          for(int _i0 = 0; _i0 < _len_pwr_info0; _i0++) {
            pwr_info->pwr_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        pwr_info->pwr_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ufshcd_is_hs_mode(pwr_info);
          printf("%d\n", benchRet); 
          free(pwr_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
