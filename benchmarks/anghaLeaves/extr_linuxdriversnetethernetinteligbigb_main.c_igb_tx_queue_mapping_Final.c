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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct sk_buff {unsigned int queue_mapping; } ;
struct igb_ring {int dummy; } ;
struct igb_adapter {unsigned int num_tx_queues; struct igb_ring** tx_ring; } ;

/* Variables and functions */

__attribute__((used)) static inline struct igb_ring *igb_tx_queue_mapping(struct igb_adapter *adapter,
						    struct sk_buff *skb)
{
	unsigned int r_idx = skb->queue_mapping;

	if (r_idx >= adapter->num_tx_queues)
		r_idx = r_idx % adapter->num_tx_queues;

	return adapter->tx_ring[r_idx];
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_adapter0 = 65025;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tx_ring0 = 1;
          adapter[_i0].tx_ring = (struct igb_ring **) malloc(_len_adapter__i0__tx_ring0*sizeof(struct igb_ring *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tx_ring0; _j0++) {
            int _len_adapter__i0__tx_ring1 = 1;
            adapter[_i0].tx_ring[_j0] = (struct igb_ring *) malloc(_len_adapter__i0__tx_ring1*sizeof(struct igb_ring));
            for(int _j1 = 0; _j1 < _len_adapter__i0__tx_ring1; _j1++) {
                adapter[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct igb_ring * benchRet = igb_tx_queue_mapping(adapter,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
          free(skb);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_adapter0 = 100;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tx_ring0 = 1;
          adapter[_i0].tx_ring = (struct igb_ring **) malloc(_len_adapter__i0__tx_ring0*sizeof(struct igb_ring *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tx_ring0; _j0++) {
            int _len_adapter__i0__tx_ring1 = 1;
            adapter[_i0].tx_ring[_j0] = (struct igb_ring *) malloc(_len_adapter__i0__tx_ring1*sizeof(struct igb_ring));
            for(int _j1 = 0; _j1 < _len_adapter__i0__tx_ring1; _j1++) {
                adapter[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct igb_ring * benchRet = igb_tx_queue_mapping(adapter,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
          free(skb);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_adapter0 = 1;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__tx_ring0 = 1;
          adapter[_i0].tx_ring = (struct igb_ring **) malloc(_len_adapter__i0__tx_ring0*sizeof(struct igb_ring *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tx_ring0; _j0++) {
            int _len_adapter__i0__tx_ring1 = 1;
            adapter[_i0].tx_ring[_j0] = (struct igb_ring *) malloc(_len_adapter__i0__tx_ring1*sizeof(struct igb_ring));
            for(int _j1 = 0; _j1 < _len_adapter__i0__tx_ring1; _j1++) {
                adapter[_i0].tx_ring[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              skb[_i0].queue_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct igb_ring * benchRet = igb_tx_queue_mapping(adapter,skb);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
