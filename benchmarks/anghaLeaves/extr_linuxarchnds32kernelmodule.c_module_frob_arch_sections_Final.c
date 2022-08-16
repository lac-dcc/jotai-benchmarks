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
typedef  int /*<<< orphan*/  Elf_Shdr ;
typedef  int /*<<< orphan*/  Elf_Ehdr ;

/* Variables and functions */

int module_frob_arch_sections(Elf_Ehdr * hdr,
			      Elf_Shdr * sechdrs,
			      char *secstrings, struct module *mod)
{
	return 0;
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
          int _len_hdr0 = 1;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sechdrs0 = 1;
          int * sechdrs = (int *) malloc(_len_sechdrs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sechdrs0; _i0++) {
            sechdrs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_secstrings0 = 1;
          char * secstrings = (char *) malloc(_len_secstrings0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_secstrings0; _i0++) {
            secstrings[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mod0 = 1;
          struct module * mod = (struct module *) malloc(_len_mod0*sizeof(struct module));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
            mod[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = module_frob_arch_sections(hdr,sechdrs,secstrings,mod);
          printf("%d\n", benchRet); 
          free(hdr);
          free(sechdrs);
          free(secstrings);
          free(mod);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
