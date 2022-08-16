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
struct mtd_info {int numeraseregions; TYPE_1__* eraseregions; } ;
typedef  scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ offset; } ;

/* Variables and functions */

int flexonenand_region(struct mtd_info *mtd, loff_t addr)
{
	int i;

	for (i = 0; i < mtd->numeraseregions; i++)
		if (addr < mtd->eraseregions[i].offset)
			break;
	return i - 1;
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
          long addr = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].numeraseregions = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mtd__i0__eraseregions0 = 1;
          mtd[_i0].eraseregions = (struct TYPE_2__ *) malloc(_len_mtd__i0__eraseregions0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mtd__i0__eraseregions0; _j0++) {
            mtd[_i0].eraseregions->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = flexonenand_region(mtd,addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mtd0; _aux++) {
          free(mtd[_aux].eraseregions);
          }
          free(mtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
