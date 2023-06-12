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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* file; } ;
struct TYPE_4__ {unsigned int scale; int rounderr; } ;
typedef  TYPE_2__ HLPFILE_PAGE ;

/* Variables and functions */

__attribute__((used)) static unsigned HLPFILE_HalfPointsScale(HLPFILE_PAGE* page, unsigned pts)
{
    return pts * page->file->scale - page->file->rounderr;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int pts = 100;
        
          int _len_page0 = 1;
          struct TYPE_5__ * page = (struct TYPE_5__ *) malloc(_len_page0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              int _len_page__i0__file0 = 1;
          page[_i0].file = (struct TYPE_4__ *) malloc(_len_page__i0__file0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_page__i0__file0; _j0++) {
              page[_i0].file->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          page[_i0].file->rounderr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = HLPFILE_HalfPointsScale(page,pts);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].file);
          }
          free(page);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int pts = 255;
        
          int _len_page0 = 65025;
          struct TYPE_5__ * page = (struct TYPE_5__ *) malloc(_len_page0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              int _len_page__i0__file0 = 1;
          page[_i0].file = (struct TYPE_4__ *) malloc(_len_page__i0__file0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_page__i0__file0; _j0++) {
              page[_i0].file->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          page[_i0].file->rounderr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = HLPFILE_HalfPointsScale(page,pts);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].file);
          }
          free(page);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int pts = 10;
        
          int _len_page0 = 100;
          struct TYPE_5__ * page = (struct TYPE_5__ *) malloc(_len_page0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              int _len_page__i0__file0 = 1;
          page[_i0].file = (struct TYPE_4__ *) malloc(_len_page__i0__file0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_page__i0__file0; _j0++) {
              page[_i0].file->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          page[_i0].file->rounderr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = HLPFILE_HalfPointsScale(page,pts);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].file);
          }
          free(page);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int pts = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_page0 = 1;
          struct TYPE_5__ * page = (struct TYPE_5__ *) malloc(_len_page0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
              int _len_page__i0__file0 = 1;
          page[_i0].file = (struct TYPE_4__ *) malloc(_len_page__i0__file0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_page__i0__file0; _j0++) {
              page[_i0].file->scale = ((-2 * (next_i()%2)) + 1) * next_i();
          page[_i0].file->rounderr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = HLPFILE_HalfPointsScale(page,pts);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_page0; _aux++) {
          free(page[_aux].file);
          }
          free(page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
