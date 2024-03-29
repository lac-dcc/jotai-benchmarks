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
struct dmaengine_desc_callback {int /*<<< orphan*/  callback_param; int /*<<< orphan*/  callback_result; int /*<<< orphan*/  callback; } ;
struct dma_async_tx_descriptor {int /*<<< orphan*/  callback_param; int /*<<< orphan*/  callback_result; int /*<<< orphan*/  callback; } ;

/* Variables and functions */

__attribute__((used)) static inline void
dmaengine_desc_get_callback(struct dma_async_tx_descriptor *tx,
			    struct dmaengine_desc_callback *cb)
{
	cb->callback = tx->callback;
	cb->callback_result = tx->callback_result;
	cb->callback_param = tx->callback_param;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_tx0 = 65025;
          struct dma_async_tx_descriptor * tx = (struct dma_async_tx_descriptor *) malloc(_len_tx0*sizeof(struct dma_async_tx_descriptor));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
              tx[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 65025;
          struct dmaengine_desc_callback * cb = (struct dmaengine_desc_callback *) malloc(_len_cb0*sizeof(struct dmaengine_desc_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              cb[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dmaengine_desc_get_callback(tx,cb);
          free(tx);
          free(cb);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_tx0 = 100;
          struct dma_async_tx_descriptor * tx = (struct dma_async_tx_descriptor *) malloc(_len_tx0*sizeof(struct dma_async_tx_descriptor));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
              tx[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 100;
          struct dmaengine_desc_callback * cb = (struct dmaengine_desc_callback *) malloc(_len_cb0*sizeof(struct dmaengine_desc_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              cb[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dmaengine_desc_get_callback(tx,cb);
          free(tx);
          free(cb);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_tx0 = 1;
          struct dma_async_tx_descriptor * tx = (struct dma_async_tx_descriptor *) malloc(_len_tx0*sizeof(struct dma_async_tx_descriptor));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
              tx[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          tx[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cb0 = 1;
          struct dmaengine_desc_callback * cb = (struct dmaengine_desc_callback *) malloc(_len_cb0*sizeof(struct dmaengine_desc_callback));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
              cb[_i0].callback_param = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback_result = ((-2 * (next_i()%2)) + 1) * next_i();
          cb[_i0].callback = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dmaengine_desc_get_callback(tx,cb);
          free(tx);
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
