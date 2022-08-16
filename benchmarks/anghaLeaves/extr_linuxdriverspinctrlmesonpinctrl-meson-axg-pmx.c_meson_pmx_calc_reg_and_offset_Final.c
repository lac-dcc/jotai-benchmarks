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
struct meson_pmx_bank {unsigned int first; int reg; int offset; } ;

/* Variables and functions */

__attribute__((used)) static int meson_pmx_calc_reg_and_offset(struct meson_pmx_bank *bank,
			unsigned int pin, unsigned int *reg,
			unsigned int *offset)
{
	int shift;

	shift = pin - bank->first;

	*reg = bank->reg + (bank->offset + (shift << 2)) / 32;
	*offset = (bank->offset + (shift << 2)) % 32;

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
          unsigned int pin = 100;
          int _len_bank0 = 1;
          struct meson_pmx_bank * bank = (struct meson_pmx_bank *) malloc(_len_bank0*sizeof(struct meson_pmx_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
            bank[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].reg = ((-2 * (next_i()%2)) + 1) * next_i();
        bank[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          unsigned int * offset = (unsigned int *) malloc(_len_offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = meson_pmx_calc_reg_and_offset(bank,pin,reg,offset);
          printf("%d\n", benchRet); 
          free(bank);
          free(reg);
          free(offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
