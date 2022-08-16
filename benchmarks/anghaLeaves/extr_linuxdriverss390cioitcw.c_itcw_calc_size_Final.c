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
struct tsb {int dummy; } ;
struct tidaw {int dummy; } ;
struct tcw {int dummy; } ;
struct itcw {int dummy; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 
 scalar_t__ TCCB_MAX_SIZE ; 

size_t itcw_calc_size(int intrg, int max_tidaws, int intrg_max_tidaws)
{
	size_t len;
	int cross_count;

	/* Main data. */
	len = sizeof(struct itcw);
	len += /* TCW */ sizeof(struct tcw) + /* TCCB */ TCCB_MAX_SIZE +
	       /* TSB */ sizeof(struct tsb) +
	       /* TIDAL */ max_tidaws * sizeof(struct tidaw);
	/* Interrogate data. */
	if (intrg) {
		len += /* TCW */ sizeof(struct tcw) + /* TCCB */ TCCB_MAX_SIZE +
		       /* TSB */ sizeof(struct tsb) +
		       /* TIDAL */ intrg_max_tidaws * sizeof(struct tidaw);
	}

	/* Maximum required alignment padding. */
	len += /* Initial TCW */ 63 + /* Interrogate TCCB */ 7;

	/* TIDAW lists may not cross a 4k boundary. To cross a
	 * boundary we need to add a TTIC TIDAW. We need to reserve
	 * one additional TIDAW for a TTIC that we may need to add due
	 * to the placement of the data chunk in memory, and a further
	 * TIDAW for each page boundary that the TIDAW list may cross
	 * due to it's own size.
	 */
	if (max_tidaws) {
		cross_count = 1 + ((max_tidaws * sizeof(struct tidaw) - 1)
				   >> PAGE_SHIFT);
		len += cross_count * sizeof(struct tidaw);
	}
	if (intrg_max_tidaws) {
		cross_count = 1 + ((intrg_max_tidaws * sizeof(struct tidaw) - 1)
				   >> PAGE_SHIFT);
		len += cross_count * sizeof(struct tidaw);
	}
	return len;
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
          int intrg = 100;
          int max_tidaws = 100;
          int intrg_max_tidaws = 100;
          unsigned long benchRet = itcw_calc_size(intrg,max_tidaws,intrg_max_tidaws);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int intrg = 255;
          int max_tidaws = 255;
          int intrg_max_tidaws = 255;
          unsigned long benchRet = itcw_calc_size(intrg,max_tidaws,intrg_max_tidaws);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int intrg = 10;
          int max_tidaws = 10;
          int intrg_max_tidaws = 10;
          unsigned long benchRet = itcw_calc_size(intrg,max_tidaws,intrg_max_tidaws);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
