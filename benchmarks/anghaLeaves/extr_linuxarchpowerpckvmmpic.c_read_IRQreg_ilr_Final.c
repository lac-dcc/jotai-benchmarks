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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct openpic {int flags; TYPE_1__* src; } ;
struct TYPE_2__ {int output; } ;

/* Variables and functions */
 int OPENPIC_FLAG_ILR ; 

__attribute__((used)) static inline uint32_t read_IRQreg_ilr(struct openpic *opp, int n_IRQ)
{
	if (opp->flags & OPENPIC_FLAG_ILR)
		return opp->src[n_IRQ].output;

	return 0xffffffff;
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
          int n_IRQ = 100;
          int _len_opp0 = 1;
          struct openpic * opp = (struct openpic *) malloc(_len_opp0*sizeof(struct openpic));
          for(int _i0 = 0; _i0 < _len_opp0; _i0++) {
            opp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp__i0__src0 = 1;
          opp[_i0].src = (struct TYPE_2__ *) malloc(_len_opp__i0__src0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_opp__i0__src0; _j0++) {
            opp[_i0].src->output = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = read_IRQreg_ilr(opp,n_IRQ);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_opp0; _aux++) {
          free(opp[_aux].src);
          }
          free(opp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n_IRQ = 255;
          int _len_opp0 = 65025;
          struct openpic * opp = (struct openpic *) malloc(_len_opp0*sizeof(struct openpic));
          for(int _i0 = 0; _i0 < _len_opp0; _i0++) {
            opp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp__i0__src0 = 1;
          opp[_i0].src = (struct TYPE_2__ *) malloc(_len_opp__i0__src0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_opp__i0__src0; _j0++) {
            opp[_i0].src->output = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = read_IRQreg_ilr(opp,n_IRQ);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_opp0; _aux++) {
          free(opp[_aux].src);
          }
          free(opp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n_IRQ = 10;
          int _len_opp0 = 100;
          struct openpic * opp = (struct openpic *) malloc(_len_opp0*sizeof(struct openpic));
          for(int _i0 = 0; _i0 < _len_opp0; _i0++) {
            opp[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_opp__i0__src0 = 1;
          opp[_i0].src = (struct TYPE_2__ *) malloc(_len_opp__i0__src0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_opp__i0__src0; _j0++) {
            opp[_i0].src->output = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = read_IRQreg_ilr(opp,n_IRQ);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_opp0; _aux++) {
          free(opp[_aux].src);
          }
          free(opp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
