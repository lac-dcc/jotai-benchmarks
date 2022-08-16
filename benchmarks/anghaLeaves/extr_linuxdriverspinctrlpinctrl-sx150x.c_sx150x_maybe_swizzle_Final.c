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
struct sx150x_pinctrl {struct sx150x_device_data* data; } ;
struct sx150x_device_data {unsigned int reg_sense; int ngpios; scalar_t__ model; } ;

/* Variables and functions */
 scalar_t__ SX150X_123 ; 
 scalar_t__ SX150X_456 ; 

__attribute__((used)) static unsigned int sx150x_maybe_swizzle(struct sx150x_pinctrl *pctl,
					 unsigned int reg, unsigned int val)
{
	unsigned int a, b;
	const struct sx150x_device_data *data = pctl->data;

	/*
	 * Whereas SX1509 presents RegSense in a simple layout as such:
	 *	reg     [ f f e e d d c c ]
	 *	reg + 1 [ b b a a 9 9 8 8 ]
	 *	reg + 2 [ 7 7 6 6 5 5 4 4 ]
	 *	reg + 3 [ 3 3 2 2 1 1 0 0 ]
	 *
	 * SX1503 and SX1506 deviate from that data layout, instead storing
	 * their contents as follows:
	 *
	 *	reg     [ f f e e d d c c ]
	 *	reg + 1 [ 7 7 6 6 5 5 4 4 ]
	 *	reg + 2 [ b b a a 9 9 8 8 ]
	 *	reg + 3 [ 3 3 2 2 1 1 0 0 ]
	 *
	 * so, taking that into account, we swap two
	 * inner bytes of a 4-byte result
	 */

	if (reg == data->reg_sense &&
	    data->ngpios == 16 &&
	    (data->model == SX150X_123 ||
	     data->model == SX150X_456)) {
		a = val & 0x00ff0000;
		b = val & 0x0000ff00;

		val &= 0xff0000ff;
		val |= b << 8;
		val |= a >> 8;
	}

	return val;
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
          unsigned int val = 100;
          int _len_pctl0 = 1;
          struct sx150x_pinctrl * pctl = (struct sx150x_pinctrl *) malloc(_len_pctl0*sizeof(struct sx150x_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              int _len_pctl__i0__data0 = 1;
          pctl[_i0].data = (struct sx150x_device_data *) malloc(_len_pctl__i0__data0*sizeof(struct sx150x_device_data));
          for(int _j0 = 0; _j0 < _len_pctl__i0__data0; _j0++) {
            pctl[_i0].data->reg_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->ngpios = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->model = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = sx150x_maybe_swizzle(pctl,reg,val);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].data);
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
