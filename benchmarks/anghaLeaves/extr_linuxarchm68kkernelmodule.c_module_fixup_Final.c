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
struct module {int dummy; } ;
struct m68k_fixup_info {int dummy; } ;

/* Variables and functions */

void module_fixup(struct module *mod, struct m68k_fixup_info *start,
		  struct m68k_fixup_info *end)
{
#ifdef CONFIG_MMU
	struct m68k_fixup_info *fixup;

	for (fixup = start; fixup < end; fixup++) {
		switch (fixup->type) {
		case m68k_fixup_memoffset:
			*(u32 *)fixup->addr = m68k_memoffset;
			break;
		case m68k_fixup_vnode_shift:
			*(u16 *)fixup->addr += m68k_virt_to_node_shift;
			break;
		}
	}
#endif
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
          int _len_mod0 = 1;
          struct module * mod = (struct module *) malloc(_len_mod0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
            mod[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start0 = 1;
          struct m68k_fixup_info * start = (struct m68k_fixup_info *) malloc(_len_start0*sizeof(struct m68k_fixup_info));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          struct m68k_fixup_info * end = (struct m68k_fixup_info *) malloc(_len_end0*sizeof(struct m68k_fixup_info));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          module_fixup(mod,start,end);
          free(mod);
          free(start);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
