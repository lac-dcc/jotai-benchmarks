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
struct options_array_item {scalar_t__ index; } ;

/* Variables and functions */

__attribute__((used)) static int
options_array_cmp(struct options_array_item *a1, struct options_array_item *a2)
{
	if (a1->index < a2->index)
		return (-1);
	if (a1->index > a2->index)
		return (1);
	return (0);
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
          int _len_a10 = 1;
          struct options_array_item * a1 = (struct options_array_item *) malloc(_len_a10*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a10; _i0++) {
            a1[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a20 = 1;
          struct options_array_item * a2 = (struct options_array_item *) malloc(_len_a20*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a20; _i0++) {
            a2[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = options_array_cmp(a1,a2);
          printf("%d\n", benchRet); 
          free(a1);
          free(a2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_a10 = 65025;
          struct options_array_item * a1 = (struct options_array_item *) malloc(_len_a10*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a10; _i0++) {
            a1[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a20 = 65025;
          struct options_array_item * a2 = (struct options_array_item *) malloc(_len_a20*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a20; _i0++) {
            a2[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = options_array_cmp(a1,a2);
          printf("%d\n", benchRet); 
          free(a1);
          free(a2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_a10 = 100;
          struct options_array_item * a1 = (struct options_array_item *) malloc(_len_a10*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a10; _i0++) {
            a1[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a20 = 100;
          struct options_array_item * a2 = (struct options_array_item *) malloc(_len_a20*sizeof(struct options_array_item));
          for(int _i0 = 0; _i0 < _len_a20; _i0++) {
            a2[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = options_array_cmp(a1,a2);
          printf("%d\n", benchRet); 
          free(a1);
          free(a2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
