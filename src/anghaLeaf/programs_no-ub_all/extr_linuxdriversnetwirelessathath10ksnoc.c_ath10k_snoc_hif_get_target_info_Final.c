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
struct bmi_target_info {void* type; void* version; } ;
struct ath10k {int dummy; } ;

/* Variables and functions */
 void* ATH10K_HW_WCN3990 ; 

__attribute__((used)) static int ath10k_snoc_hif_get_target_info(struct ath10k *ar,
					   struct bmi_target_info *target_info)
{
	target_info->version = ATH10K_HW_WCN3990;
	target_info->type = ATH10K_HW_WCN3990;

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

    // big-arr
    case 0:
    {
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target_info0 = 1;
          struct bmi_target_info * target_info = (struct bmi_target_info *) malloc(_len_target_info0*sizeof(struct bmi_target_info));
          for(int _i0 = 0; _i0 < _len_target_info0; _i0++) {
              }
          int benchRet = ath10k_snoc_hif_get_target_info(ar,target_info);
          printf("%d\n", benchRet); 
          free(ar);
          free(target_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
