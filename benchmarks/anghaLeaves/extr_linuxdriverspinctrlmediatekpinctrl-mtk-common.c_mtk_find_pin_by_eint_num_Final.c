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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct TYPE_4__ {unsigned int eintnum; } ;
struct mtk_desc_pin {TYPE_2__ eint; } ;
struct TYPE_3__ {int npins; struct mtk_desc_pin* pins; } ;

/* Variables and functions */

__attribute__((used)) static const struct mtk_desc_pin *
mtk_find_pin_by_eint_num(struct mtk_pinctrl *pctl, unsigned int eint_num)
{
	int i;
	const struct mtk_desc_pin *pin;

	for (i = 0; i < pctl->devdata->npins; i++) {
		pin = pctl->devdata->pins + i;
		if (pin->eint.eintnum == eint_num)
			return pin;
	}

	return NULL;
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
          unsigned int eint_num = 100;
          int _len_pctl0 = 1;
          struct mtk_pinctrl * pctl = (struct mtk_pinctrl *) malloc(_len_pctl0*sizeof(struct mtk_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              int _len_pctl__i0__devdata0 = 1;
          pctl[_i0].devdata = (struct TYPE_3__ *) malloc(_len_pctl__i0__devdata0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_pctl__i0__devdata0; _j0++) {
            pctl[_i0].devdata->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pctl__i0__devdata_pins0 = 1;
          pctl[_i0].devdata->pins = (struct mtk_desc_pin *) malloc(_len_pctl__i0__devdata_pins0*sizeof(struct mtk_desc_pin));
          for(int _j0 = 0; _j0 < _len_pctl__i0__devdata_pins0; _j0++) {
            pctl[_i0].devdata->pins->eint.eintnum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          const struct mtk_desc_pin * benchRet = mtk_find_pin_by_eint_num(pctl,eint_num);
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].devdata);
          }
          free(pctl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
