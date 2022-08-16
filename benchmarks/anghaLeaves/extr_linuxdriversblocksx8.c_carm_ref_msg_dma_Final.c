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
struct carm_host {scalar_t__ msg_dma; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 unsigned int CARM_MSG_SIZE ; 

__attribute__((used)) static inline dma_addr_t carm_ref_msg_dma(struct carm_host *host,
					  unsigned int msg_idx)
{
	return host->msg_dma + (msg_idx * CARM_MSG_SIZE);
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
          unsigned int msg_idx = 100;
          int _len_host0 = 1;
          struct carm_host * host = (struct carm_host *) malloc(_len_host0*sizeof(struct carm_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].msg_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = carm_ref_msg_dma(host,msg_idx);
          printf("%ld\n", benchRet); 
          free(host);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int msg_idx = 10;
          int _len_host0 = 100;
          struct carm_host * host = (struct carm_host *) malloc(_len_host0*sizeof(struct carm_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].msg_dma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = carm_ref_msg_dma(host,msg_idx);
          printf("%ld\n", benchRet); 
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
