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
typedef  int /*<<< orphan*/  ulong ;
typedef  void* u64 ;
struct be_aic_obj {int /*<<< orphan*/  jiffies; void* tx_reqs_prev; void* rx_pkts_prev; } ;

/* Variables and functions */

__attribute__((used)) static void be_aic_update(struct be_aic_obj *aic, u64 rx_pkts, u64 tx_pkts,
			  ulong now)
{
	aic->rx_pkts_prev = rx_pkts;
	aic->tx_reqs_prev = tx_pkts;
	aic->jiffies = now;
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
          int now = 100;
        
          int _len_aic0 = 1;
          struct be_aic_obj * aic = (struct be_aic_obj *) malloc(_len_aic0*sizeof(struct be_aic_obj));
          for(int _i0 = 0; _i0 < _len_aic0; _i0++) {
              aic[_i0].jiffies = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rx_pkts;
        
          void * tx_pkts;
        
          be_aic_update(aic,rx_pkts,tx_pkts,now);
          free(aic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int now = 255;
        
          int _len_aic0 = 65025;
          struct be_aic_obj * aic = (struct be_aic_obj *) malloc(_len_aic0*sizeof(struct be_aic_obj));
          for(int _i0 = 0; _i0 < _len_aic0; _i0++) {
              aic[_i0].jiffies = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rx_pkts;
        
          void * tx_pkts;
        
          be_aic_update(aic,rx_pkts,tx_pkts,now);
          free(aic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int now = 10;
        
          int _len_aic0 = 100;
          struct be_aic_obj * aic = (struct be_aic_obj *) malloc(_len_aic0*sizeof(struct be_aic_obj));
          for(int _i0 = 0; _i0 < _len_aic0; _i0++) {
              aic[_i0].jiffies = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rx_pkts;
        
          void * tx_pkts;
        
          be_aic_update(aic,rx_pkts,tx_pkts,now);
          free(aic);
        
        break;
    }
    // empty
    case 3:
    {
          int now = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_aic0 = 1;
          struct be_aic_obj * aic = (struct be_aic_obj *) malloc(_len_aic0*sizeof(struct be_aic_obj));
          for(int _i0 = 0; _i0 < _len_aic0; _i0++) {
              aic[_i0].jiffies = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rx_pkts;
        
          void * tx_pkts;
        
          be_aic_update(aic,rx_pkts,tx_pkts,now);
          free(aic);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
