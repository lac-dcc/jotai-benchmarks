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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;

/* Variables and functions */
 int ERANGE ; 

__attribute__((used)) static int hwecc4_ooblayout_small_free(struct mtd_info *mtd, int section,
				       struct mtd_oob_region *oobregion)
{
	if (section > 1)
		return -ERANGE;

	if (!section) {
		oobregion->offset = 8;
		oobregion->length = 5;
	} else {
		oobregion->offset = 16;
		oobregion->length = mtd->oobsize - 16;
	}

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
          int section = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].oobsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oobregion0 = 1;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
            oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hwecc4_ooblayout_small_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }
    // big-arr
    case 1:
    {
          int section = 255;
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].oobsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oobregion0 = 65025;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
            oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hwecc4_ooblayout_small_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int section = 10;
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].oobsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oobregion0 = 100;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
            oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hwecc4_ooblayout_small_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}