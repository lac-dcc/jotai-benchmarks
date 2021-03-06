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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  void* u32 ;
typedef  int u16 ;
struct wmt_dma_descriptor {int flags; void* branch_addr; void* data_buffer_addr; } ;

/* Variables and functions */

__attribute__((used)) static void wmt_dma_init_descriptor(struct wmt_dma_descriptor *desc,
		u16 req_count, u32 buffer_addr, u32 branch_addr, int end)
{
	desc->flags = 0x40000000 | req_count;
	if (end)
		desc->flags |= 0x80000000;
	desc->data_buffer_addr = buffer_addr;
	desc->branch_addr = branch_addr;
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
          int req_count = 100;
          int end = 100;
          int _len_desc0 = 1;
          struct wmt_dma_descriptor * desc = (struct wmt_dma_descriptor *) malloc(_len_desc0*sizeof(struct wmt_dma_descriptor));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buffer_addr;
          void * branch_addr;
          wmt_dma_init_descriptor(desc,req_count,buffer_addr,branch_addr,end);
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int req_count = 255;
          int end = 255;
          int _len_desc0 = 65025;
          struct wmt_dma_descriptor * desc = (struct wmt_dma_descriptor *) malloc(_len_desc0*sizeof(struct wmt_dma_descriptor));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buffer_addr;
          void * branch_addr;
          wmt_dma_init_descriptor(desc,req_count,buffer_addr,branch_addr,end);
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int req_count = 10;
          int end = 10;
          int _len_desc0 = 100;
          struct wmt_dma_descriptor * desc = (struct wmt_dma_descriptor *) malloc(_len_desc0*sizeof(struct wmt_dma_descriptor));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * buffer_addr;
          void * branch_addr;
          wmt_dma_init_descriptor(desc,req_count,buffer_addr,branch_addr,end);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
