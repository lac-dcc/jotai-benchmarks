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
struct sway_switch_binding {scalar_t__ type; scalar_t__ state; } ;

/* Variables and functions */

__attribute__((used)) static bool binding_switch_compare(struct sway_switch_binding *binding_a,
		struct sway_switch_binding *binding_b) {
	if (binding_a->type != binding_b->type) {
		return false;
	}
	if (binding_a->state != binding_b->state) {
		return false;
	}
	return true;
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
          int _len_binding_a0 = 1;
          struct sway_switch_binding * binding_a = (struct sway_switch_binding *) malloc(_len_binding_a0*sizeof(struct sway_switch_binding));
          for(int _i0 = 0; _i0 < _len_binding_a0; _i0++) {
            binding_a[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        binding_a[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_binding_b0 = 1;
          struct sway_switch_binding * binding_b = (struct sway_switch_binding *) malloc(_len_binding_b0*sizeof(struct sway_switch_binding));
          for(int _i0 = 0; _i0 < _len_binding_b0; _i0++) {
            binding_b[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        binding_b[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binding_switch_compare(binding_a,binding_b);
          printf("%d\n", benchRet); 
          free(binding_a);
          free(binding_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
