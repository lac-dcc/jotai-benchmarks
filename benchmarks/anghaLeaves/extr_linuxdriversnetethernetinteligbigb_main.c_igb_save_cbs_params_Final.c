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
struct igb_ring {int cbs_enable; int idleslope; int sendslope; int hicredit; int locredit; } ;
struct igb_adapter {int num_tx_queues; struct igb_ring** tx_ring; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int igb_save_cbs_params(struct igb_adapter *adapter, int queue,
			       bool enable, int idleslope, int sendslope,
			       int hicredit, int locredit)
{
	struct igb_ring *ring;

	if (queue < 0 || queue > adapter->num_tx_queues)
		return -EINVAL;

	ring = adapter->tx_ring[queue];

	ring->cbs_enable = enable;
	ring->idleslope = idleslope;
	ring->sendslope = sendslope;
	ring->hicredit = hicredit;
	ring->locredit = locredit;

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
          int queue = 100;
        
          int enable = 100;
        
          int idleslope = 100;
        
          int sendslope = 100;
        
          int hicredit = 100;
        
          int locredit = 100;
        
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
                adapter[_i0].tx_ring[_j0]->cbs_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->idleslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->sendslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->hicredit = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->locredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = igb_save_cbs_params(adapter,queue,enable,idleslope,sendslope,hicredit,locredit);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int queue = 255;
        
          int enable = 255;
        
          int idleslope = 255;
        
          int sendslope = 255;
        
          int hicredit = 255;
        
          int locredit = 255;
        
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
                adapter[_i0].tx_ring[_j0]->cbs_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->idleslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->sendslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->hicredit = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->locredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = igb_save_cbs_params(adapter,queue,enable,idleslope,sendslope,hicredit,locredit);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int queue = 10;
        
          int enable = 10;
        
          int idleslope = 10;
        
          int sendslope = 10;
        
          int hicredit = 10;
        
          int locredit = 10;
        
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
                adapter[_i0].tx_ring[_j0]->cbs_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->idleslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->sendslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->hicredit = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->locredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = igb_save_cbs_params(adapter,queue,enable,idleslope,sendslope,hicredit,locredit);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
        
        break;
    }
    // empty
    case 3:
    {
          int queue = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int enable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int idleslope = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int sendslope = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int hicredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int locredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
                adapter[_i0].tx_ring[_j0]->cbs_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->idleslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->sendslope = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->hicredit = ((-2 * (next_i()%2)) + 1) * next_i();
          adapter[_i0].tx_ring[_j0]->locredit = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = igb_save_cbs_params(adapter,queue,enable,idleslope,sendslope,hicredit,locredit);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
