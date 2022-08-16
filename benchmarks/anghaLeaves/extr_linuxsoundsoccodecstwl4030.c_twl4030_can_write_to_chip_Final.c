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
struct twl4030_priv {int /*<<< orphan*/  hsr_enabled; int /*<<< orphan*/  hsl_enabled; int /*<<< orphan*/  carkitr_enabled; int /*<<< orphan*/  carkitl_enabled; int /*<<< orphan*/  predriver_enabled; int /*<<< orphan*/  predrivel_enabled; int /*<<< orphan*/  earpiece_enabled; } ;

/* Variables and functions */
#define  TWL4030_REG_EAR_CTL 133 
#define  TWL4030_REG_HS_GAIN_SET 132 
#define  TWL4030_REG_PRECKL_CTL 131 
#define  TWL4030_REG_PRECKR_CTL 130 
#define  TWL4030_REG_PREDL_CTL 129 
#define  TWL4030_REG_PREDR_CTL 128 

__attribute__((used)) static bool twl4030_can_write_to_chip(struct twl4030_priv *twl4030,
				      unsigned int reg)
{
	bool write_to_reg = false;

	/* Decide if the given register can be written */
	switch (reg) {
	case TWL4030_REG_EAR_CTL:
		if (twl4030->earpiece_enabled)
			write_to_reg = true;
		break;
	case TWL4030_REG_PREDL_CTL:
		if (twl4030->predrivel_enabled)
			write_to_reg = true;
		break;
	case TWL4030_REG_PREDR_CTL:
		if (twl4030->predriver_enabled)
			write_to_reg = true;
		break;
	case TWL4030_REG_PRECKL_CTL:
		if (twl4030->carkitl_enabled)
			write_to_reg = true;
		break;
	case TWL4030_REG_PRECKR_CTL:
		if (twl4030->carkitr_enabled)
			write_to_reg = true;
		break;
	case TWL4030_REG_HS_GAIN_SET:
		if (twl4030->hsl_enabled || twl4030->hsr_enabled)
			write_to_reg = true;
		break;
	default:
		/* All other register can be written */
		write_to_reg = true;
		break;
	}

	return write_to_reg;
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
          unsigned int reg = 100;
          int _len_twl40300 = 1;
          struct twl4030_priv * twl4030 = (struct twl4030_priv *) malloc(_len_twl40300*sizeof(struct twl4030_priv));
          for(int _i0 = 0; _i0 < _len_twl40300; _i0++) {
            twl4030[_i0].hsr_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].hsl_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].carkitr_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].carkitl_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].predriver_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].predrivel_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        twl4030[_i0].earpiece_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = twl4030_can_write_to_chip(twl4030,reg);
          printf("%d\n", benchRet); 
          free(twl4030);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
