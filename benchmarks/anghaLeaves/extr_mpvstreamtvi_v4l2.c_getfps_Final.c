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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {double numerator; scalar_t__ denominator; } ;
struct TYPE_7__ {TYPE_3__ frameperiod; } ;
struct TYPE_9__ {TYPE_2__ standard; TYPE_1__* tv_param; } ;
typedef  TYPE_4__ priv_t ;
struct TYPE_6__ {scalar_t__ fps; } ;

/* Variables and functions */

__attribute__((used)) static double getfps(priv_t *priv)
{
    if (priv->tv_param->fps > 0)
        return priv->tv_param->fps;
    if (priv->standard.frameperiod.denominator && priv->standard.frameperiod.numerator)
        return (double)priv->standard.frameperiod.denominator / priv->standard.frameperiod.numerator;
    return 25.0;
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
          struct TYPE_9__ * priv = (struct TYPE_9__ *) malloc(_len_priv0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].standard.frameperiod.numerator = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        priv[_i0].standard.frameperiod.denominator = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__tv_param0 = 1;
          priv[_i0].tv_param = (struct TYPE_6__ *) malloc(_len_priv__i0__tv_param0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_priv__i0__tv_param0; _j0++) {
            priv[_i0].tv_param->fps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          double benchRet = getfps(priv);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tv_param);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
