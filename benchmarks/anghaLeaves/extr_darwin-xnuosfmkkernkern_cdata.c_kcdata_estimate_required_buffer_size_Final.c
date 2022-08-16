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
typedef  int uint32_t ;
struct kcdata_item {int dummy; } ;

/* Variables and functions */
 int KCDATA_ALIGNMENT_SIZE ; 

uint32_t kcdata_estimate_required_buffer_size(uint32_t num_items, uint32_t payload_size)
{
	/*
	 * In the worst case each item will need (KCDATA_ALIGNMENT_SIZE - 1) padding
	 */
	uint32_t max_padding_bytes = num_items * (KCDATA_ALIGNMENT_SIZE - 1);
	uint32_t item_description_bytes = num_items * sizeof(struct kcdata_item);
	uint32_t begin_and_end_marker_bytes = 2 * sizeof(struct kcdata_item);

	return max_padding_bytes + item_description_bytes + begin_and_end_marker_bytes + payload_size;
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
          int num_items = 100;
          int payload_size = 100;
          int benchRet = kcdata_estimate_required_buffer_size(num_items,payload_size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_items = 255;
          int payload_size = 255;
          int benchRet = kcdata_estimate_required_buffer_size(num_items,payload_size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_items = 10;
          int payload_size = 10;
          int benchRet = kcdata_estimate_required_buffer_size(num_items,payload_size);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
