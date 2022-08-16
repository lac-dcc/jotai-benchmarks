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
       1            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static int module_slot_match(struct module *module, int idx)
{
	int match = 1;
#ifdef MODULE
	const char *s1, *s2;

	if (!module || !*module->name || !slots[idx])
		return 0;

	s1 = module->name;
	s2 = slots[idx];
	if (*s2 == '!') {
		match = 0; /* negative match */
		s2++;
	}
	/* compare module name strings
	 * hyphens are handled as equivalent with underscore
	 */
	for (;;) {
		char c1 = *s1++;
		char c2 = *s2++;
		if (c1 == '-')
			c1 = '_';
		if (c2 == '-')
			c2 = '_';
		if (c1 != c2)
			return !match;
		if (!c1)
			break;
	}
#endif /* MODULE */
	return match;
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
          int idx = 100;
          int _len_module0 = 1;
          struct module * module = (struct module *) malloc(_len_module0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
            module[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = module_slot_match(module,idx);
          printf("%d\n", benchRet); 
          free(module);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int idx = 10;
          int _len_module0 = 100;
          struct module * module = (struct module *) malloc(_len_module0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_module0; _i0++) {
            module[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = module_slot_match(module,idx);
          printf("%d\n", benchRet); 
          free(module);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
