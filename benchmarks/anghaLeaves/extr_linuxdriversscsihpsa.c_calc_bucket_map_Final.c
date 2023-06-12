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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void  calc_bucket_map(int bucket[], int num_buckets,
	int nsgs, int min_blocks, u32 *bucket_map)
{
	int i, j, b, size;

	/* Note, bucket_map must have nsgs+1 entries. */
	for (i = 0; i <= nsgs; i++) {
		/* Compute size of a command with i SG entries */
		size = i + min_blocks;
		b = num_buckets; /* Assume the biggest bucket */
		/* Find the bucket that is just big enough */
		for (j = 0; j < num_buckets; j++) {
			if (bucket[j] >= size) {
				b = j;
				break;
			}
		}
		/* for a command with i SG entries, use bucket b. */
		bucket_map[i] = b;
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
          int num_buckets = 255;
        
          int nsgs = 255;
        
          int min_blocks = 255;
        
          int _len_bucket0 = 65025;
          int * bucket = (int *) malloc(_len_bucket0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket0; _i0++) {
            bucket[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bucket_map0 = 65025;
          int * bucket_map = (int *) malloc(_len_bucket_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket_map0; _i0++) {
            bucket_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          calc_bucket_map(bucket,num_buckets,nsgs,min_blocks,bucket_map);
          free(bucket);
          free(bucket_map);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int num_buckets = 10;
        
          int nsgs = 10;
        
          int min_blocks = 10;
        
          int _len_bucket0 = 100;
          int * bucket = (int *) malloc(_len_bucket0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket0; _i0++) {
            bucket[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bucket_map0 = 100;
          int * bucket_map = (int *) malloc(_len_bucket_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket_map0; _i0++) {
            bucket_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          calc_bucket_map(bucket,num_buckets,nsgs,min_blocks,bucket_map);
          free(bucket);
          free(bucket_map);
        
        break;
    }
    // empty
    case 2:
    {
          int num_buckets = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int nsgs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int min_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bucket0 = 1;
          int * bucket = (int *) malloc(_len_bucket0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket0; _i0++) {
            bucket[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bucket_map0 = 1;
          int * bucket_map = (int *) malloc(_len_bucket_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bucket_map0; _i0++) {
            bucket_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          calc_bucket_map(bucket,num_buckets,nsgs,min_blocks,bucket_map);
          free(bucket);
          free(bucket_map);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
