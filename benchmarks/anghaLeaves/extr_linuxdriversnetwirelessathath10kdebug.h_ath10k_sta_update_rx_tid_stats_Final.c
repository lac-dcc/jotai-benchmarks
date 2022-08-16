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

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct ath10k {int dummy; } ;
typedef  enum ath10k_pkt_rx_err { ____Placeholder_ath10k_pkt_rx_err } ath10k_pkt_rx_err ;

/* Variables and functions */

__attribute__((used)) static inline
void ath10k_sta_update_rx_tid_stats(struct ath10k *ar, u8 *first_hdr,
				    unsigned long int num_msdus,
				    enum ath10k_pkt_rx_err err,
				    unsigned long int unchain_cnt,
				    unsigned long int drop_cnt,
				    unsigned long int drop_cnt_filter,
				    unsigned long int queued_msdus)
{
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
          unsigned long num_msdus = 100;
          enum ath10k_pkt_rx_err err = 0;
          unsigned long unchain_cnt = 100;
          unsigned long drop_cnt = 100;
          unsigned long drop_cnt_filter = 100;
          unsigned long queued_msdus = 100;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_first_hdr0 = 1;
          int * first_hdr = (int *) malloc(_len_first_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_first_hdr0; _i0++) {
            first_hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath10k_sta_update_rx_tid_stats(ar,first_hdr,num_msdus,err,unchain_cnt,drop_cnt,drop_cnt_filter,queued_msdus);
          free(ar);
          free(first_hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
