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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int ctrlb; scalar_t__ dscr; } ;
struct at_desc {TYPE_1__ lli; } ;

/* Variables and functions */
 int ATC_DST_DSCR_DIS ; 
 int ATC_IEN ; 
 int ATC_SRC_DSCR_DIS ; 

__attribute__((used)) static void set_desc_eol(struct at_desc *desc)
{
	u32 ctrlb = desc->lli.ctrlb;

	ctrlb &= ~ATC_IEN;
	ctrlb |= ATC_SRC_DSCR_DIS | ATC_DST_DSCR_DIS;

	desc->lli.ctrlb = ctrlb;
	desc->lli.dscr = 0;
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
          int _len_desc0 = 1;
          struct at_desc * desc = (struct at_desc *) malloc(_len_desc0*sizeof(struct at_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].lli.ctrlb = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].lli.dscr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_desc_eol(desc);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
