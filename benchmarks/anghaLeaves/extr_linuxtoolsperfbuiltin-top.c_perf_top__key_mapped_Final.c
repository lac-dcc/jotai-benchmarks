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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct perf_top {TYPE_1__* evlist; } ;
struct TYPE_2__ {int nr_entries; } ;

/* Variables and functions */

__attribute__((used)) static int perf_top__key_mapped(struct perf_top *top, int c)
{
	switch (c) {
		case 'd':
		case 'e':
		case 'f':
		case 'z':
		case 'q':
		case 'Q':
		case 'K':
		case 'U':
		case 'F':
		case 's':
		case 'S':
			return 1;
		case 'E':
			return top->evlist->nr_entries > 1 ? 1 : 0;
		default:
			break;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
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

          int c = 100;
        
          int _len_top0 = 1;
          struct perf_top * top = (struct perf_top *) malloc(_len_top0*sizeof(struct perf_top));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
              int _len_top__i0__evlist0 = 1;
          top[_i0].evlist = (struct TYPE_2__ *) malloc(_len_top__i0__evlist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_top__i0__evlist0; _j0++) {
              top[_i0].evlist->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = perf_top__key_mapped(top,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_top0; _aux++) {
          free(top[_aux].evlist);
          }
          free(top);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 50
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int c = 255;
        
          int _len_top0 = 65025;
          struct perf_top * top = (struct perf_top *) malloc(_len_top0*sizeof(struct perf_top));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
              int _len_top__i0__evlist0 = 1;
          top[_i0].evlist = (struct TYPE_2__ *) malloc(_len_top__i0__evlist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_top__i0__evlist0; _j0++) {
              top[_i0].evlist->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = perf_top__key_mapped(top,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_top0; _aux++) {
          free(top[_aux].evlist);
          }
          free(top);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 50
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int c = 10;
        
          int _len_top0 = 100;
          struct perf_top * top = (struct perf_top *) malloc(_len_top0*sizeof(struct perf_top));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
              int _len_top__i0__evlist0 = 1;
          top[_i0].evlist = (struct TYPE_2__ *) malloc(_len_top__i0__evlist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_top__i0__evlist0; _j0++) {
              top[_i0].evlist->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = perf_top__key_mapped(top,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_top0; _aux++) {
          free(top[_aux].evlist);
          }
          free(top);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 50
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_top0 = 1;
          struct perf_top * top = (struct perf_top *) malloc(_len_top0*sizeof(struct perf_top));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
              int _len_top__i0__evlist0 = 1;
          top[_i0].evlist = (struct TYPE_2__ *) malloc(_len_top__i0__evlist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_top__i0__evlist0; _j0++) {
              top[_i0].evlist->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = perf_top__key_mapped(top,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_top0; _aux++) {
          free(top[_aux].evlist);
          }
          free(top);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
