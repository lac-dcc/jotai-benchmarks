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
struct opp_table {int dummy; } ;
struct opp_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void opp_debug_unregister(struct opp_device *opp_dev,
					struct opp_table *opp_table)
{ }


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
          int _len_opp_dev0 = 1;
          struct opp_device * opp_dev = (struct opp_device *) malloc(_len_opp_dev0*sizeof(struct opp_device));
          for(int _i0 = 0; _i0 < _len_opp_dev0; _i0++) {
            opp_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opp_table0 = 1;
          struct opp_table * opp_table = (struct opp_table *) malloc(_len_opp_table0*sizeof(struct opp_table));
          for(int _i0 = 0; _i0 < _len_opp_table0; _i0++) {
            opp_table[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          opp_debug_unregister(opp_dev,opp_table);
          free(opp_dev);
          free(opp_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
