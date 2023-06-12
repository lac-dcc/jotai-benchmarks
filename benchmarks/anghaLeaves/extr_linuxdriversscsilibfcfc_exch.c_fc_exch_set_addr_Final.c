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
typedef  void* u32 ;
struct fc_exch {int esb_stat; void* did; void* sid; void* oid; } ;

/* Variables and functions */
 int ESB_ST_RESP ; 

__attribute__((used)) static void fc_exch_set_addr(struct fc_exch *ep,
			     u32 orig_id, u32 resp_id)
{
	ep->oid = orig_id;
	if (ep->esb_stat & ESB_ST_RESP) {
		ep->sid = resp_id;
		ep->did = orig_id;
	} else {
		ep->sid = orig_id;
		ep->did = resp_id;
	}
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
          int _len_ep0 = 65025;
          struct fc_exch * ep = (struct fc_exch *) malloc(_len_ep0*sizeof(struct fc_exch));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              ep[_i0].esb_stat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * orig_id;
        
          void * resp_id;
        
          fc_exch_set_addr(ep,orig_id,resp_id);
          free(ep);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ep0 = 100;
          struct fc_exch * ep = (struct fc_exch *) malloc(_len_ep0*sizeof(struct fc_exch));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              ep[_i0].esb_stat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * orig_id;
        
          void * resp_id;
        
          fc_exch_set_addr(ep,orig_id,resp_id);
          free(ep);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ep0 = 1;
          struct fc_exch * ep = (struct fc_exch *) malloc(_len_ep0*sizeof(struct fc_exch));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              ep[_i0].esb_stat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * orig_id;
        
          void * resp_id;
        
          fc_exch_set_addr(ep,orig_id,resp_id);
          free(ep);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
