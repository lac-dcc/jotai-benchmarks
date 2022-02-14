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
       0            big-arr\n\
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
struct obs_data_item {size_t name_len; size_t data_len; size_t default_len; size_t autoselect_size; } ;

/* Variables and functions */

__attribute__((used)) static inline size_t obs_data_item_total_size(struct obs_data_item *item)
{
	return sizeof(struct obs_data_item) + item->name_len +
		item->data_len + item->default_len + item->autoselect_size;
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

    // big-arr
    case 0:
    {
          int _len_item0 = 1;
          struct obs_data_item * item = (struct obs_data_item *) malloc(_len_item0*sizeof(struct obs_data_item));
          for(int _i0 = 0; _i0 < _len_item0; _i0++) {
            item->name_len = ((-2 * (next_i()%2)) + 1) * next_i();
        item->data_len = ((-2 * (next_i()%2)) + 1) * next_i();
        item->default_len = ((-2 * (next_i()%2)) + 1) * next_i();
        item->autoselect_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = obs_data_item_total_size(item);
          printf("%lu\n", benchRet); 
          free(item);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
