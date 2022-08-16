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
struct TYPE_3__ {int gcount; double bscale; scalar_t__ data_max_found; scalar_t__ data_min_found; scalar_t__ bzero; scalar_t__ image_extension; scalar_t__ rgb; scalar_t__ groups; scalar_t__ pcount; scalar_t__ blank_found; scalar_t__ naxis_index; int /*<<< orphan*/  state; } ;
typedef  int /*<<< orphan*/  FITSHeaderState ;
typedef  TYPE_1__ FITSHeader ;

/* Variables and functions */

int avpriv_fits_header_init(FITSHeader *header, FITSHeaderState state)
{
    header->state = state;
    header->naxis_index = 0;
    header->blank_found = 0;
    header->pcount = 0;
    header->gcount = 1;
    header->groups = 0;
    header->rgb = 0;
    header->image_extension = 0;
    header->bscale = 1.0;
    header->bzero = 0;
    header->data_min_found = 0;
    header->data_max_found = 0;
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
          int state = 100;
          int _len_header0 = 1;
          struct TYPE_3__ * header = (struct TYPE_3__ *) malloc(_len_header0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0].gcount = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].bscale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        header[_i0].data_max_found = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].data_min_found = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].bzero = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].image_extension = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].rgb = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].groups = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].pcount = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].blank_found = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].naxis_index = ((-2 * (next_i()%2)) + 1) * next_i();
        header[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = avpriv_fits_header_init(header,state);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
