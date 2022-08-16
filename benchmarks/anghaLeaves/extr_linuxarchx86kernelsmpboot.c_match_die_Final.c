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
struct cpuinfo_x86 {scalar_t__ phys_proc_id; } ;

/* Variables and functions */

__attribute__((used)) static bool match_die(struct cpuinfo_x86 *c, struct cpuinfo_x86 *o)
{
	if (c->phys_proc_id == o->phys_proc_id)
		return true;
	return false;
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
          int _len_c0 = 1;
          struct cpuinfo_x86 * c = (struct cpuinfo_x86 *) malloc(_len_c0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].phys_proc_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_o0 = 1;
          struct cpuinfo_x86 * o = (struct cpuinfo_x86 *) malloc(_len_o0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
            o[_i0].phys_proc_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_die(c,o);
          printf("%d\n", benchRet); 
          free(c);
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
