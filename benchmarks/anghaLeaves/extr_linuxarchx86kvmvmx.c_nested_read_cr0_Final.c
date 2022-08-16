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
struct vmcs12 {unsigned long guest_cr0; unsigned long cr0_guest_host_mask; unsigned long cr0_read_shadow; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned long nested_read_cr0(struct vmcs12 *fields)
{
	return (fields->guest_cr0 & ~fields->cr0_guest_host_mask) |
		(fields->cr0_read_shadow & fields->cr0_guest_host_mask);
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
          int _len_fields0 = 1;
          struct vmcs12 * fields = (struct vmcs12 *) malloc(_len_fields0*sizeof(struct vmcs12));
          for(int _i0 = 0; _i0 < _len_fields0; _i0++) {
            fields[_i0].guest_cr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        fields[_i0].cr0_guest_host_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        fields[_i0].cr0_read_shadow = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = nested_read_cr0(fields);
          printf("%lu\n", benchRet); 
          free(fields);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
