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
typedef  enum mos_regs { ____Placeholder_mos_regs } mos_regs ;
typedef  int __u16 ;

/* Variables and functions */

__attribute__((used)) static inline __u16 get_reg_index(enum mos_regs reg)
{
	static const __u16 mos7715_index_lookup_table[] = {
		0x00,		/* MOS7720_THR */
		0x00,		/* MOS7720_RHR */
		0x01,		/* MOS7720_IER */
		0x02,		/* MOS7720_FCR */
		0x02,		/* MOS7720_ISR */
		0x03,		/* MOS7720_LCR */
		0x04,		/* MOS7720_MCR */
		0x05,		/* MOS7720_LSR */
		0x06,		/* MOS7720_MSR */
		0x07,		/* MOS7720_SPR */
		0x00,		/* MOS7720_DLL */
		0x01,		/* MOS7720_DLM */
		0x00,		/* MOS7720_DPR */
		0x01,		/* MOS7720_DSR */
		0x02,		/* MOS7720_DCR */
		0x0a,		/* MOS7720_ECR */
		0x01,		/* MOS7720_SP1_REG */
		0x02,		/* MOS7720_SP2_REG (7720 only) */
		0x04,		/* MOS7720_PP_REG (7715 only) */
		0x08,		/* MOS7720_SP_CONTROL_REG */
	};
	return mos7715_index_lookup_table[reg];
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
          enum mos_regs reg = 0;
          int benchRet = get_reg_index(reg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
