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
typedef  int /*<<< orphan*/  u32 ;
struct ftgmac100 {int tx_q_entries; int /*<<< orphan*/  txdes0_edotr_mask; } ;

/* Variables and functions */

__attribute__((used)) static u32 ftgmac100_base_tx_ctlstat(struct ftgmac100 *priv,
				     unsigned int index)
{
	if (index == (priv->tx_q_entries - 1))
		return priv->txdes0_edotr_mask;
	else
		return 0;
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
          unsigned int index = 100;
        
          int _len_priv0 = 1;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].tx_q_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].txdes0_edotr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ftgmac100_base_tx_ctlstat(priv,index);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int index = 255;
        
          int _len_priv0 = 65025;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].tx_q_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].txdes0_edotr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ftgmac100_base_tx_ctlstat(priv,index);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int index = 10;
        
          int _len_priv0 = 100;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].tx_q_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].txdes0_edotr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ftgmac100_base_tx_ctlstat(priv,index);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_priv0 = 1;
          struct ftgmac100 * priv = (struct ftgmac100 *) malloc(_len_priv0*sizeof(struct ftgmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].tx_q_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          priv[_i0].txdes0_edotr_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ftgmac100_base_tx_ctlstat(priv,index);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
