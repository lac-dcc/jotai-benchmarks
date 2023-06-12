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
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int dummy; } ;

/* Variables and functions */
 int ERANGE ; 

__attribute__((used)) static int docg3_ooblayout_free(struct mtd_info *mtd, int section,
				struct mtd_oob_region *oobregion)
{
	if (section > 1)
		return -ERANGE;

	/* free bytes: byte 0 until byte 6, byte 15 */
	if (!section) {
		oobregion->offset = 0;
		oobregion->length = 7;
	} else {
		oobregion->offset = 15;
		oobregion->length = 1;
	}

	return 0;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int section = 100;
        
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_oobregion0 = 1;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
              oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = docg3_ooblayout_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int section = 255;
        
          int _len_mtd0 = 65025;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_oobregion0 = 65025;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
              oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = docg3_ooblayout_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int section = 10;
        
          int _len_mtd0 = 100;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_oobregion0 = 100;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
              oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = docg3_ooblayout_free(mtd,section,oobregion);
          printf("%d\n", benchRet); 
          free(mtd);
          free(oobregion);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int section = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
              mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_oobregion0 = 1;
          struct mtd_oob_region * oobregion = (struct mtd_oob_region *) malloc(_len_oobregion0*sizeof(struct mtd_oob_region));
          for(int _i0 = 0; _i0 < _len_oobregion0; _i0++) {
              oobregion[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          oobregion[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = docg3_ooblayout_free(mtd,section,oobregion);
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
