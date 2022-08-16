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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline int _wakeupgen_get_irq_info(u32 irq, u32 *bit_posn, u8 *reg_index)
{
	/*
	 * Each WakeupGen register controls 32 interrupt.
	 * i.e. 1 bit per SPI IRQ
	 */
	*reg_index = irq >> 5;
	*bit_posn = irq %= 32;

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
          int irq = 100;
          int _len_bit_posn0 = 1;
          int * bit_posn = (int *) malloc(_len_bit_posn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bit_posn0; _i0++) {
            bit_posn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg_index0 = 1;
          int * reg_index = (int *) malloc(_len_reg_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg_index0; _i0++) {
            reg_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _wakeupgen_get_irq_info(irq,bit_posn,reg_index);
          printf("%d\n", benchRet); 
          free(bit_posn);
          free(reg_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
