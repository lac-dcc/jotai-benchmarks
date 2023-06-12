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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct meson_reg_desc {int reg; unsigned int bit; } ;
struct meson_bank {unsigned int first; struct meson_reg_desc* regs; } ;
typedef  enum meson_reg_type { ____Placeholder_meson_reg_type } meson_reg_type ;

/* Variables and functions */

__attribute__((used)) static void meson_calc_reg_and_bit(struct meson_bank *bank, unsigned int pin,
				   enum meson_reg_type reg_type,
				   unsigned int *reg, unsigned int *bit)
{
	struct meson_reg_desc *desc = &bank->regs[reg_type];

	*reg = desc->reg * 4;
	*bit = desc->bit + pin - bank->first;
}

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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int pin = 100;
        
          enum meson_reg_type reg_type = 0;
        
          int _len_bank0 = 1;
          struct meson_bank * bank = (struct meson_bank *) malloc(_len_bank0*sizeof(struct meson_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
              bank[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__regs0 = 1;
          bank[_i0].regs = (struct meson_reg_desc *) malloc(_len_bank__i0__regs0*sizeof(struct meson_reg_desc));
          for(int _j0 = 0; _j0 < _len_bank__i0__regs0; _j0++) {
              bank[_i0].regs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          bank[_i0].regs->bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_reg0 = 1;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bit0 = 1;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          meson_calc_reg_and_bit(bank,pin,reg_type,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regs);
          }
          free(bank);
          free(reg);
          free(bit);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int pin = 255;
        
          enum meson_reg_type reg_type = 0;
        
          int _len_bank0 = 65025;
          struct meson_bank * bank = (struct meson_bank *) malloc(_len_bank0*sizeof(struct meson_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
              bank[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__regs0 = 1;
          bank[_i0].regs = (struct meson_reg_desc *) malloc(_len_bank__i0__regs0*sizeof(struct meson_reg_desc));
          for(int _j0 = 0; _j0 < _len_bank__i0__regs0; _j0++) {
              bank[_i0].regs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          bank[_i0].regs->bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_reg0 = 65025;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bit0 = 65025;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          meson_calc_reg_and_bit(bank,pin,reg_type,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regs);
          }
          free(bank);
          free(reg);
          free(bit);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int pin = 10;
        
          enum meson_reg_type reg_type = 0;
        
          int _len_bank0 = 100;
          struct meson_bank * bank = (struct meson_bank *) malloc(_len_bank0*sizeof(struct meson_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
              bank[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__regs0 = 1;
          bank[_i0].regs = (struct meson_reg_desc *) malloc(_len_bank__i0__regs0*sizeof(struct meson_reg_desc));
          for(int _j0 = 0; _j0 < _len_bank__i0__regs0; _j0++) {
              bank[_i0].regs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          bank[_i0].regs->bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_reg0 = 100;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bit0 = 100;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          meson_calc_reg_and_bit(bank,pin,reg_type,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regs);
          }
          free(bank);
          free(reg);
          free(bit);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned int pin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          enum meson_reg_type reg_type = 0;
        
          int _len_bank0 = 1;
          struct meson_bank * bank = (struct meson_bank *) malloc(_len_bank0*sizeof(struct meson_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
              bank[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bank__i0__regs0 = 1;
          bank[_i0].regs = (struct meson_reg_desc *) malloc(_len_bank__i0__regs0*sizeof(struct meson_reg_desc));
          for(int _j0 = 0; _j0 < _len_bank__i0__regs0; _j0++) {
              bank[_i0].regs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
          bank[_i0].regs->bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_reg0 = 1;
          unsigned int * reg = (unsigned int *) malloc(_len_reg0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bit0 = 1;
          unsigned int * bit = (unsigned int *) malloc(_len_bit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bit0; _i0++) {
            bit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          meson_calc_reg_and_bit(bank,pin,reg_type,reg,bit);
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].regs);
          }
          free(bank);
          free(reg);
          free(bit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
