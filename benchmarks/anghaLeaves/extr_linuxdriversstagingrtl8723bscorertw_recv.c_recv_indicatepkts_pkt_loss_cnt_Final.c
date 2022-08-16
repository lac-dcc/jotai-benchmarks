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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u64 ;
struct debug_priv {int /*<<< orphan*/  dbg_rx_ampdu_loss_count; } ;

/* Variables and functions */

void recv_indicatepkts_pkt_loss_cnt(struct debug_priv *pdbgpriv, u64 prev_seq, u64 current_seq)
{
	if (current_seq < prev_seq)
		pdbgpriv->dbg_rx_ampdu_loss_count += (4096 + current_seq - prev_seq);
	else
		pdbgpriv->dbg_rx_ampdu_loss_count += (current_seq - prev_seq);

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
          long prev_seq = 100;
          long current_seq = 100;
          int _len_pdbgpriv0 = 1;
          struct debug_priv * pdbgpriv = (struct debug_priv *) malloc(_len_pdbgpriv0*sizeof(struct debug_priv));
          for(int _i0 = 0; _i0 < _len_pdbgpriv0; _i0++) {
            pdbgpriv[_i0].dbg_rx_ampdu_loss_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          recv_indicatepkts_pkt_loss_cnt(pdbgpriv,prev_seq,current_seq);
          free(pdbgpriv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long prev_seq = 10;
          long current_seq = 10;
          int _len_pdbgpriv0 = 100;
          struct debug_priv * pdbgpriv = (struct debug_priv *) malloc(_len_pdbgpriv0*sizeof(struct debug_priv));
          for(int _i0 = 0; _i0 < _len_pdbgpriv0; _i0++) {
            pdbgpriv[_i0].dbg_rx_ampdu_loss_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          recv_indicatepkts_pkt_loss_cnt(pdbgpriv,prev_seq,current_seq);
          free(pdbgpriv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
