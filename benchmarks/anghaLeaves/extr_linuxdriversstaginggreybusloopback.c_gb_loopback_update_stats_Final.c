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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  scalar_t__ u32 ;
struct gb_loopback_stats {scalar_t__ min; scalar_t__ max; int /*<<< orphan*/  count; int /*<<< orphan*/  sum; } ;

/* Variables and functions */

__attribute__((used)) static void gb_loopback_update_stats(struct gb_loopback_stats *stats, u32 val)
{
	if (stats->min > val)
		stats->min = val;
	if (stats->max < val)
		stats->max = val;
	stats->sum += val;
	stats->count++;
}

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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 100;
        
          int _len_stats0 = 1;
          struct gb_loopback_stats * stats = (struct gb_loopback_stats *) malloc(_len_stats0*sizeof(struct gb_loopback_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
              stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].sum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gb_loopback_update_stats(stats,val);
          free(stats);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 255;
        
          int _len_stats0 = 65025;
          struct gb_loopback_stats * stats = (struct gb_loopback_stats *) malloc(_len_stats0*sizeof(struct gb_loopback_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
              stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].sum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gb_loopback_update_stats(stats,val);
          free(stats);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long val = 10;
        
          int _len_stats0 = 100;
          struct gb_loopback_stats * stats = (struct gb_loopback_stats *) malloc(_len_stats0*sizeof(struct gb_loopback_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
              stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].sum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gb_loopback_update_stats(stats,val);
          free(stats);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_stats0 = 1;
          struct gb_loopback_stats * stats = (struct gb_loopback_stats *) malloc(_len_stats0*sizeof(struct gb_loopback_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
              stats[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          stats[_i0].sum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          gb_loopback_update_stats(stats,val);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
