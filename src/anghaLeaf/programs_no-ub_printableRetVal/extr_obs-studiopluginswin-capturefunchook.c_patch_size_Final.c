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
struct func_hook {scalar_t__ is_64bit_jump; } ;

/* Variables and functions */
 size_t JMP_32_SIZE ; 
 size_t JMP_64_SIZE ; 

__attribute__((used)) static inline size_t patch_size(struct func_hook *hook)
{
	return hook->is_64bit_jump ? JMP_64_SIZE : JMP_32_SIZE;
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
          int _len_hook0 = 1;
          struct func_hook * hook = (struct func_hook *) malloc(_len_hook0*sizeof(struct func_hook));
          for(int _i0 = 0; _i0 < _len_hook0; _i0++) {
            hook->is_64bit_jump = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = patch_size(hook);
          printf("%lu\n", benchRet); 
          free(hook);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
