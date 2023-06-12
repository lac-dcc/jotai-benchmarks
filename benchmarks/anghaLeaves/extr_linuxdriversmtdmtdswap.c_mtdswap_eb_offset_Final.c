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
       0            big-arr-10x\n\
       1            empty\n\
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
struct swap_eb {int dummy; } ;
struct mtdswap_dev {TYPE_1__* mtd; struct swap_eb* eb_data; } ;
typedef  int loff_t ;
struct TYPE_2__ {int erasesize; } ;

/* Variables and functions */

__attribute__((used)) static loff_t mtdswap_eb_offset(struct mtdswap_dev *d, struct swap_eb *eb)
{
	return (loff_t)(eb - d->eb_data) * d->mtd->erasesize;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr-10x
    case 0:
    {
          int _len_d0 = 100;
          struct mtdswap_dev * d = (struct mtdswap_dev *) malloc(_len_d0*sizeof(struct mtdswap_dev));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__mtd0 = 1;
          d[_i0].mtd = (struct TYPE_2__ *) malloc(_len_d__i0__mtd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__mtd0; _j0++) {
              d[_i0].mtd->erasesize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_d__i0__eb_data0 = 1;
          d[_i0].eb_data = (struct swap_eb *) malloc(_len_d__i0__eb_data0*sizeof(struct swap_eb));
          for(int _j0 = 0; _j0 < _len_d__i0__eb_data0; _j0++) {
              d[_i0].eb_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_eb0 = 100;
          struct swap_eb * eb = (struct swap_eb *) malloc(_len_eb0*sizeof(struct swap_eb));
          for(int _i0 = 0; _i0 < _len_eb0; _i0++) {
              eb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mtdswap_eb_offset(d,eb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].mtd);
          }
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].eb_data);
          }
          free(d);
          free(eb);
        
        break;
    }
    // empty
    case 1:
    {
          int _len_d0 = 1;
          struct mtdswap_dev * d = (struct mtdswap_dev *) malloc(_len_d0*sizeof(struct mtdswap_dev));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              int _len_d__i0__mtd0 = 1;
          d[_i0].mtd = (struct TYPE_2__ *) malloc(_len_d__i0__mtd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_d__i0__mtd0; _j0++) {
              d[_i0].mtd->erasesize = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_d__i0__eb_data0 = 1;
          d[_i0].eb_data = (struct swap_eb *) malloc(_len_d__i0__eb_data0*sizeof(struct swap_eb));
          for(int _j0 = 0; _j0 < _len_d__i0__eb_data0; _j0++) {
              d[_i0].eb_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_eb0 = 1;
          struct swap_eb * eb = (struct swap_eb *) malloc(_len_eb0*sizeof(struct swap_eb));
          for(int _i0 = 0; _i0 < _len_eb0; _i0++) {
              eb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mtdswap_eb_offset(d,eb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].mtd);
          }
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].eb_data);
          }
          free(d);
          free(eb);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
