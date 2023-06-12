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
typedef  long u8 ;
typedef  long u32 ;

/* Variables and functions */

__attribute__((used)) static void altera_concatenate_data(u8 *buffer,
				u8 *preamble_data,
				u32 preamble_count,
				u8 *target_data,
				u32 start_index,
				u32 target_count,
				u8 *postamble_data,
				u32 postamble_count)
/*
 * Copies preamble data, target data, and postamble data
 * into one buffer for IR or DR scans.
 */
{
	u32 i, j, k;

	for (i = 0L; i < preamble_count; ++i) {
		if (preamble_data[i >> 3L] & (1L << (i & 7L)))
			buffer[i >> 3L] |= (1L << (i & 7L));
		else
			buffer[i >> 3L] &= ~(u32)(1L << (i & 7L));

	}

	j = start_index;
	k = preamble_count + target_count;
	for (; i < k; ++i, ++j) {
		if (target_data[j >> 3L] & (1L << (j & 7L)))
			buffer[i >> 3L] |= (1L << (i & 7L));
		else
			buffer[i >> 3L] &= ~(u32)(1L << (i & 7L));

	}

	j = 0L;
	k = preamble_count + target_count + postamble_count;
	for (; i < k; ++i, ++j) {
		if (postamble_data[j >> 3L] & (1L << (j & 7L)))
			buffer[i >> 3L] |= (1L << (i & 7L));
		else
			buffer[i >> 3L] &= ~(u32)(1L << (i & 7L));

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
          long preamble_count = 255;
        
          long start_index = 255;
        
          long target_count = 255;
        
          long postamble_count = 255;
        
          int _len_buffer0 = 65025;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_preamble_data0 = 65025;
          long * preamble_data = (long *) malloc(_len_preamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_preamble_data0; _i0++) {
            preamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_target_data0 = 65025;
          long * target_data = (long *) malloc(_len_target_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_target_data0; _i0++) {
            target_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postamble_data0 = 65025;
          long * postamble_data = (long *) malloc(_len_postamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_postamble_data0; _i0++) {
            postamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          altera_concatenate_data(buffer,preamble_data,preamble_count,target_data,start_index,target_count,postamble_data,postamble_count);
          free(buffer);
          free(preamble_data);
          free(target_data);
          free(postamble_data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long preamble_count = 10;
        
          long start_index = 10;
        
          long target_count = 10;
        
          long postamble_count = 10;
        
          int _len_buffer0 = 100;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_preamble_data0 = 100;
          long * preamble_data = (long *) malloc(_len_preamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_preamble_data0; _i0++) {
            preamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_target_data0 = 100;
          long * target_data = (long *) malloc(_len_target_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_target_data0; _i0++) {
            target_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postamble_data0 = 100;
          long * postamble_data = (long *) malloc(_len_postamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_postamble_data0; _i0++) {
            postamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          altera_concatenate_data(buffer,preamble_data,preamble_count,target_data,start_index,target_count,postamble_data,postamble_count);
          free(buffer);
          free(preamble_data);
          free(target_data);
          free(postamble_data);
        
        break;
    }
    // empty
    case 2:
    {
          long preamble_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long start_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long target_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long postamble_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buffer0 = 1;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_preamble_data0 = 1;
          long * preamble_data = (long *) malloc(_len_preamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_preamble_data0; _i0++) {
            preamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_target_data0 = 1;
          long * target_data = (long *) malloc(_len_target_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_target_data0; _i0++) {
            target_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postamble_data0 = 1;
          long * postamble_data = (long *) malloc(_len_postamble_data0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_postamble_data0; _i0++) {
            postamble_data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          altera_concatenate_data(buffer,preamble_data,preamble_count,target_data,start_index,target_count,postamble_data,postamble_count);
          free(buffer);
          free(preamble_data);
          free(target_data);
          free(postamble_data);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
