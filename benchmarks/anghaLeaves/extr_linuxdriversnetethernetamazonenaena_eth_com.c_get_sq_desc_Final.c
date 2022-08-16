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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  uintptr_t u32 ;
typedef  uintptr_t u16 ;
struct TYPE_2__ {scalar_t__ virt_addr; } ;
struct ena_com_io_sq {int tail; int q_depth; uintptr_t desc_entry_size; TYPE_1__ desc_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline void *get_sq_desc(struct ena_com_io_sq *io_sq)
{
	u16 tail_masked;
	u32 offset;

	tail_masked = io_sq->tail & (io_sq->q_depth - 1);

	offset = tail_masked * io_sq->desc_entry_size;

	return (void *)((uintptr_t)io_sq->desc_addr.virt_addr + offset);
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
          int _len_io_sq0 = 1;
          struct ena_com_io_sq * io_sq = (struct ena_com_io_sq *) malloc(_len_io_sq0*sizeof(struct ena_com_io_sq));
          for(int _i0 = 0; _i0 < _len_io_sq0; _i0++) {
            io_sq[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        io_sq[_i0].q_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        io_sq[_i0].desc_entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
        io_sq[_i0].desc_addr.virt_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_sq_desc(io_sq);
          free(io_sq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
