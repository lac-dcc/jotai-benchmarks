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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int eM11; int eM22; int eDx; int eDy; scalar_t__ eM21; scalar_t__ eM12; } ;
typedef  TYPE_1__ XFORM ;

/* Variables and functions */

__attribute__((used)) static void SetXForm1(XFORM *pxform)
{
    pxform->eM11 = 1;
    pxform->eM12 = 0;
    pxform->eM21 = 0;
    pxform->eM22 = 1;
    pxform->eDx = 314;
    pxform->eDy = -99;
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
          int _len_pxform0 = 1;
          struct TYPE_3__ * pxform = (struct TYPE_3__ *) malloc(_len_pxform0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pxform0; _i0++) {
            pxform[_i0].eM11 = ((-2 * (next_i()%2)) + 1) * next_i();
        pxform[_i0].eM22 = ((-2 * (next_i()%2)) + 1) * next_i();
        pxform[_i0].eDx = ((-2 * (next_i()%2)) + 1) * next_i();
        pxform[_i0].eDy = ((-2 * (next_i()%2)) + 1) * next_i();
        pxform[_i0].eM21 = ((-2 * (next_i()%2)) + 1) * next_i();
        pxform[_i0].eM12 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SetXForm1(pxform);
          free(pxform);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
