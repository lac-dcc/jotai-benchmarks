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
struct scatterlist {int offset; int length; } ;

/* Variables and functions */
 int CACHE_LINE_MASK ; 

extern int bcm_sg_suitable_for_dma(struct scatterlist *sg_ptr, int sg_len)
{
	int i;

	for (i = 0; i < sg_len; i++) {
		if (sg_ptr[i].offset & CACHE_LINE_MASK ||
		    sg_ptr[i].length & CACHE_LINE_MASK)
			return 0;
	}

	return 1;
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
          int sg_len = 255;
        
          int _len_sg_ptr0 = 65025;
          struct scatterlist * sg_ptr = (struct scatterlist *) malloc(_len_sg_ptr0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg_ptr0; _i0++) {
              sg_ptr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_ptr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bcm_sg_suitable_for_dma(sg_ptr,sg_len);
          printf("%d\n", benchRet); 
          free(sg_ptr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int sg_len = 10;
        
          int _len_sg_ptr0 = 100;
          struct scatterlist * sg_ptr = (struct scatterlist *) malloc(_len_sg_ptr0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg_ptr0; _i0++) {
              sg_ptr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_ptr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bcm_sg_suitable_for_dma(sg_ptr,sg_len);
          printf("%d\n", benchRet); 
          free(sg_ptr);
        
        break;
    }
    // empty
    case 2:
    {
          int sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sg_ptr0 = 1;
          struct scatterlist * sg_ptr = (struct scatterlist *) malloc(_len_sg_ptr0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg_ptr0; _i0++) {
              sg_ptr[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sg_ptr[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bcm_sg_suitable_for_dma(sg_ptr,sg_len);
          printf("%d\n", benchRet); 
          free(sg_ptr);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
