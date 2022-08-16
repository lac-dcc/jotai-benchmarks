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
struct lem_counter {int lem_float_ber; } ;
struct s_phy {TYPE_1__* mib; struct lem_counter lem; } ;
struct TYPE_2__ {int fddiPORTLer_Estimate; } ;

/* Variables and functions */

__attribute__((used)) static void reset_lem_struct(struct s_phy *phy)
{
	struct lem_counter *lem = &phy->lem ;

	phy->mib->fddiPORTLer_Estimate = 15 ;
	lem->lem_float_ber = 15 * 100 ;
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
          int _len_phy0 = 1;
          struct s_phy * phy = (struct s_phy *) malloc(_len_phy0*sizeof(struct s_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__mib0 = 1;
          phy[_i0].mib = (struct TYPE_2__ *) malloc(_len_phy__i0__mib0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_phy__i0__mib0; _j0++) {
            phy[_i0].mib->fddiPORTLer_Estimate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy[_i0].lem.lem_float_ber = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_lem_struct(phy);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].mib);
          }
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
