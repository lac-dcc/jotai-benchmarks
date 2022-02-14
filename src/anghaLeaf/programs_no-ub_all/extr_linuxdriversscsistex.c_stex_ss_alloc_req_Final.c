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
struct st_msg_header {int dummy; } ;
struct st_hba {int req_head; int rq_size; scalar_t__ dma_mem; } ;
struct req_msg {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct req_msg *stex_ss_alloc_req(struct st_hba *hba)
{
	return (struct req_msg *)(hba->dma_mem +
		hba->req_head * hba->rq_size + sizeof(struct st_msg_header));
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
          int _len_hba0 = 1;
          struct st_hba * hba = (struct st_hba *) malloc(_len_hba0*sizeof(struct st_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba->req_head = ((-2 * (next_i()%2)) + 1) * next_i();
        hba->rq_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hba->dma_mem = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct req_msg * benchRet = stex_ss_alloc_req(hba);
          printf("{{struct}} %p\n", &benchRet); 
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
