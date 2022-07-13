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
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {int dummy; } ;

/* Variables and functions */
 int ENOSYS ; 

__attribute__((used)) static int vmw_prime_map_attach(struct dma_buf *dma_buf,
				struct dma_buf_attachment *attach)
{
	return -ENOSYS;
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
          int _len_dma_buf0 = 1;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
            dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attach0 = 1;
          struct dma_buf_attachment * attach = (struct dma_buf_attachment *) malloc(_len_attach0*sizeof(struct dma_buf_attachment));
          for(int _i0 = 0; _i0 < _len_attach0; _i0++) {
            attach[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmw_prime_map_attach(dma_buf,attach);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(attach);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dma_buf0 = 65025;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
            dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attach0 = 65025;
          struct dma_buf_attachment * attach = (struct dma_buf_attachment *) malloc(_len_attach0*sizeof(struct dma_buf_attachment));
          for(int _i0 = 0; _i0 < _len_attach0; _i0++) {
            attach[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmw_prime_map_attach(dma_buf,attach);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(attach);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dma_buf0 = 100;
          struct dma_buf * dma_buf = (struct dma_buf *) malloc(_len_dma_buf0*sizeof(struct dma_buf));
          for(int _i0 = 0; _i0 < _len_dma_buf0; _i0++) {
            dma_buf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attach0 = 100;
          struct dma_buf_attachment * attach = (struct dma_buf_attachment *) malloc(_len_attach0*sizeof(struct dma_buf_attachment));
          for(int _i0 = 0; _i0 < _len_attach0; _i0++) {
            attach[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmw_prime_map_attach(dma_buf,attach);
          printf("%d\n", benchRet); 
          free(dma_buf);
          free(attach);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
