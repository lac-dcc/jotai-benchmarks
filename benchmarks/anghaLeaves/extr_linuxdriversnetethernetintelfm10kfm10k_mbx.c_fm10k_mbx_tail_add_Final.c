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
typedef  int u16 ;
struct fm10k_mbx_info {int tail; int mbmem_len; } ;

/* Variables and functions */

__attribute__((used)) static u16 fm10k_mbx_tail_add(struct fm10k_mbx_info *mbx, u16 offset)
{
	u16 tail = (mbx->tail + offset + 1) & ((mbx->mbmem_len << 1) - 1);

	/* add/sub 1 because we cannot have offset 0 or all 1s */
	return (tail > mbx->tail) ? --tail : ++tail;
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
          int offset = 100;
          int _len_mbx0 = 1;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_tail_add(mbx,offset);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int offset = 255;
          int _len_mbx0 = 65025;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_tail_add(mbx,offset);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int offset = 10;
          int _len_mbx0 = 100;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_tail_add(mbx,offset);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
