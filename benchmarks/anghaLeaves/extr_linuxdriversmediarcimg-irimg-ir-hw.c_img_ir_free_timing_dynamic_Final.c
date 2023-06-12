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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  unsigned int u32 ;
struct img_ir_filter {int minlen; int maxlen; } ;

/* Variables and functions */
 unsigned int IMG_IR_MAXLEN ; 
 unsigned int IMG_IR_MAXLEN_SHIFT ; 
 unsigned int IMG_IR_MINLEN ; 
 unsigned int IMG_IR_MINLEN_SHIFT ; 

__attribute__((used)) static u32 img_ir_free_timing_dynamic(u32 st_ft, struct img_ir_filter *filter)
{
	unsigned int minlen, maxlen, newminlen, newmaxlen;

	/* round minlen, maxlen to multiple of 2 */
	newminlen = filter->minlen & -2;
	newmaxlen = (filter->maxlen + 1) & -2;
	/* extract min/max len from register */
	minlen = (st_ft & IMG_IR_MINLEN) >> IMG_IR_MINLEN_SHIFT;
	maxlen = (st_ft & IMG_IR_MAXLEN) >> IMG_IR_MAXLEN_SHIFT;
	/* if the new values are more restrictive, update the register value */
	if (newminlen > minlen) {
		st_ft &= ~IMG_IR_MINLEN;
		st_ft |= newminlen << IMG_IR_MINLEN_SHIFT;
	}
	if (newmaxlen < maxlen) {
		st_ft &= ~IMG_IR_MAXLEN;
		st_ft |= newmaxlen << IMG_IR_MAXLEN_SHIFT;
	}
	return st_ft;
}

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
          unsigned int st_ft = 100;
        
          int _len_filter0 = 1;
          struct img_ir_filter * filter = (struct img_ir_filter *) malloc(_len_filter0*sizeof(struct img_ir_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].minlen = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = img_ir_free_timing_dynamic(st_ft,filter);
          printf("%u\n", benchRet); 
          free(filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int st_ft = 255;
        
          int _len_filter0 = 65025;
          struct img_ir_filter * filter = (struct img_ir_filter *) malloc(_len_filter0*sizeof(struct img_ir_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].minlen = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = img_ir_free_timing_dynamic(st_ft,filter);
          printf("%u\n", benchRet); 
          free(filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int st_ft = 10;
        
          int _len_filter0 = 100;
          struct img_ir_filter * filter = (struct img_ir_filter *) malloc(_len_filter0*sizeof(struct img_ir_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].minlen = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = img_ir_free_timing_dynamic(st_ft,filter);
          printf("%u\n", benchRet); 
          free(filter);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int st_ft = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_filter0 = 1;
          struct img_ir_filter * filter = (struct img_ir_filter *) malloc(_len_filter0*sizeof(struct img_ir_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].minlen = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = img_ir_free_timing_dynamic(st_ft,filter);
          printf("%u\n", benchRet); 
          free(filter);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
