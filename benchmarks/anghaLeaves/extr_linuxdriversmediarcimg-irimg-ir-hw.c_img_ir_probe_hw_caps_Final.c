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
struct img_ir_priv_hw {int /*<<< orphan*/ * ct_quirks; } ;
struct img_ir_priv {struct img_ir_priv_hw hw; } ;

/* Variables and functions */
 size_t IMG_IR_CODETYPE_2BITPULSEPOS ; 
 size_t IMG_IR_CODETYPE_BIPHASE ; 
 size_t IMG_IR_CODETYPE_PULSELEN ; 
 int /*<<< orphan*/  IMG_IR_QUIRK_CODE_BROKEN ; 
 int /*<<< orphan*/  IMG_IR_QUIRK_CODE_IRQ ; 
 int /*<<< orphan*/  IMG_IR_QUIRK_CODE_LEN_INCR ; 

__attribute__((used)) static void img_ir_probe_hw_caps(struct img_ir_priv *priv)
{
	struct img_ir_priv_hw *hw = &priv->hw;
	/*
	 * When a version of the block becomes available without these quirks,
	 * they'll have to depend on the core revision.
	 */
	hw->ct_quirks[IMG_IR_CODETYPE_PULSELEN]
		|= IMG_IR_QUIRK_CODE_LEN_INCR;
	hw->ct_quirks[IMG_IR_CODETYPE_BIPHASE]
		|= IMG_IR_QUIRK_CODE_IRQ;
	hw->ct_quirks[IMG_IR_CODETYPE_2BITPULSEPOS]
		|= IMG_IR_QUIRK_CODE_BROKEN;
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
          int _len_priv0 = 1;
          struct img_ir_priv * priv = (struct img_ir_priv *) malloc(_len_priv0*sizeof(struct img_ir_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__hw_ct_quirks0 = 1;
          priv[_i0].hw.ct_quirks = (int *) malloc(_len_priv__i0__hw_ct_quirks0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__hw_ct_quirks0; _j0++) {
            priv[_i0].hw.ct_quirks[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          img_ir_probe_hw_caps(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
