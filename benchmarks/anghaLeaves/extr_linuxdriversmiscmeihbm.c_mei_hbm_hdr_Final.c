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
struct mei_msg_hdr {size_t length; int msg_complete; scalar_t__ internal; scalar_t__ reserved; scalar_t__ dma_ring; scalar_t__ me_addr; scalar_t__ host_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline void mei_hbm_hdr(struct mei_msg_hdr *hdr, size_t length)
{
	hdr->host_addr = 0;
	hdr->me_addr = 0;
	hdr->length = length;
	hdr->msg_complete = 1;
	hdr->dma_ring = 0;
	hdr->reserved = 0;
	hdr->internal = 0;
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
          unsigned long length = 100;
          int _len_hdr0 = 1;
          struct mei_msg_hdr * hdr = (struct mei_msg_hdr *) malloc(_len_hdr0*sizeof(struct mei_msg_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].msg_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].internal = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].dma_ring = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].me_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mei_hbm_hdr(hdr,length);
          free(hdr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_hdr0 = 65025;
          struct mei_msg_hdr * hdr = (struct mei_msg_hdr *) malloc(_len_hdr0*sizeof(struct mei_msg_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].msg_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].internal = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].dma_ring = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].me_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mei_hbm_hdr(hdr,length);
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_hdr0 = 100;
          struct mei_msg_hdr * hdr = (struct mei_msg_hdr *) malloc(_len_hdr0*sizeof(struct mei_msg_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].msg_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].internal = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].dma_ring = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].me_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].host_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mei_hbm_hdr(hdr,length);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
