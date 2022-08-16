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
struct irte {unsigned int svt; unsigned int sq; unsigned int sid; } ;

/* Variables and functions */
 unsigned int SVT_NO_VERIFY ; 
 scalar_t__ disable_sourceid_checking ; 

__attribute__((used)) static void set_irte_sid(struct irte *irte, unsigned int svt,
			 unsigned int sq, unsigned int sid)
{
	if (disable_sourceid_checking)
		svt = SVT_NO_VERIFY;
	irte->svt = svt;
	irte->sq = sq;
	irte->sid = sid;
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
          unsigned int svt = 100;
          unsigned int sq = 100;
          unsigned int sid = 100;
          int _len_irte0 = 1;
          struct irte * irte = (struct irte *) malloc(_len_irte0*sizeof(struct irte));
          for(int _i0 = 0; _i0 < _len_irte0; _i0++) {
            irte[_i0].svt = ((-2 * (next_i()%2)) + 1) * next_i();
        irte[_i0].sq = ((-2 * (next_i()%2)) + 1) * next_i();
        irte[_i0].sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_irte_sid(irte,svt,sq,sid);
          free(irte);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
