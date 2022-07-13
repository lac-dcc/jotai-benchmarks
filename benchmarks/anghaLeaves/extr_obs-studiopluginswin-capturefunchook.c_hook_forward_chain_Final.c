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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
struct func_hook {scalar_t__ type; int hooked; scalar_t__ func_addr; void* call_addr; } ;
typedef  scalar_t__ int32_t ;

/* Variables and functions */
 scalar_t__ HOOKTYPE_FORWARD_CHAIN ; 
 scalar_t__ HOOKTYPE_FORWARD_OVERWRITE ; 
 scalar_t__ JMP_32_SIZE ; 

__attribute__((used)) static inline void hook_forward_chain(struct func_hook *hook, uint8_t *p,
		intptr_t offset)
{
	int32_t cur_offset = *(int32_t*)&p[6];

	if (hook->type != HOOKTYPE_FORWARD_OVERWRITE)
		return;

	hook->call_addr = (void*)(hook->func_addr + JMP_32_SIZE + cur_offset);
	hook->type = HOOKTYPE_FORWARD_CHAIN;
	hook->hooked = true;

	*((int32_t*)&p[6]) = (int32_t)offset;
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
          long offset = 255;
          int _len_hook0 = 65025;
          struct func_hook * hook = (struct func_hook *) malloc(_len_hook0*sizeof(struct func_hook));
          for(int _i0 = 0; _i0 < _len_hook0; _i0++) {
            hook[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].hooked = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].func_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hook_forward_chain(hook,p,offset);
          free(hook);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long offset = 10;
          int _len_hook0 = 100;
          struct func_hook * hook = (struct func_hook *) malloc(_len_hook0*sizeof(struct func_hook));
          for(int _i0 = 0; _i0 < _len_hook0; _i0++) {
            hook[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].hooked = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].func_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hook_forward_chain(hook,p,offset);
          free(hook);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
