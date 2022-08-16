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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  scalar_t__ uint32_t ;
struct func_hook {scalar_t__ type; int hooked; scalar_t__ func_addr; scalar_t__ hook_addr; void* call_addr; } ;
typedef  scalar_t__ int32_t ;

/* Variables and functions */
 scalar_t__ HOOKTYPE_FORWARD_OVERWRITE ; 
 scalar_t__ HOOKTYPE_REVERSE_CHAIN ; 

__attribute__((used)) static inline void hook_reverse_chain(struct func_hook *hook, uint8_t *p)
{
	if (hook->type != HOOKTYPE_FORWARD_OVERWRITE)
		return;

	hook->call_addr = (void*)(hook->func_addr + *((int32_t*)&p[1]));
	hook->type = HOOKTYPE_REVERSE_CHAIN;
	hook->hooked = true;

	*((uint32_t*)&p[1]) = (uint32_t)(hook->hook_addr - hook->func_addr);
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
          int _len_hook0 = 1;
          struct func_hook * hook = (struct func_hook *) malloc(_len_hook0*sizeof(struct func_hook));
          for(int _i0 = 0; _i0 < _len_hook0; _i0++) {
            hook[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].hooked = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].func_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        hook[_i0].hook_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hook_reverse_chain(hook,p);
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
