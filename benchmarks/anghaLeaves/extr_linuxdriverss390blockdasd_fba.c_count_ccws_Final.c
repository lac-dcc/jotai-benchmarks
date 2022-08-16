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
typedef  unsigned int sector_t ;

/* Variables and functions */

__attribute__((used)) static int count_ccws(sector_t first_rec, sector_t last_rec,
		      unsigned int blocks_per_page)
{
	sector_t wz_stop = 0, d_stop = 0;
	int cur_pos = 0;
	int count = 0;

	if (first_rec % blocks_per_page != 0) {
		wz_stop = first_rec + blocks_per_page -
			(first_rec % blocks_per_page) - 1;
		if (wz_stop > last_rec)
			wz_stop = last_rec;
		cur_pos = wz_stop - first_rec + 1;
		count++;
	}

	if (last_rec - (first_rec + cur_pos) + 1 >= blocks_per_page) {
		if ((last_rec - blocks_per_page + 1) % blocks_per_page != 0)
			d_stop = last_rec - ((last_rec - blocks_per_page + 1) %
					     blocks_per_page);
		else
			d_stop = last_rec;

		cur_pos += d_stop - (first_rec + cur_pos) + 1;
		count++;
	}

	if (cur_pos == 0 || first_rec + cur_pos - 1 < last_rec)
		count++;

	return count;
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
          unsigned int first_rec = 100;
          unsigned int last_rec = 100;
          unsigned int blocks_per_page = 100;
          int benchRet = count_ccws(first_rec,last_rec,blocks_per_page);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int first_rec = 255;
          unsigned int last_rec = 255;
          unsigned int blocks_per_page = 255;
          int benchRet = count_ccws(first_rec,last_rec,blocks_per_page);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int first_rec = 10;
          unsigned int last_rec = 10;
          unsigned int blocks_per_page = 10;
          int benchRet = count_ccws(first_rec,last_rec,blocks_per_page);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
