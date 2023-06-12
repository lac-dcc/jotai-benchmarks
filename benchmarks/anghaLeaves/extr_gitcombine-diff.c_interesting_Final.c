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
struct sline {unsigned long flag; scalar_t__ lost; } ;

/* Variables and functions */

__attribute__((used)) static int interesting(struct sline *sline, unsigned long all_mask)
{
	/* If some parents lost lines here, or if we have added to
	 * some parent, it is interesting.
	 */
	return ((sline->flag & all_mask) || sline->lost);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned long all_mask = 100;
        
          int _len_sline0 = 1;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
              sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          sline[_i0].lost = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = interesting(sline,all_mask);
          printf("%d\n", benchRet); 
          free(sline);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long all_mask = 255;
        
          int _len_sline0 = 65025;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
              sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          sline[_i0].lost = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = interesting(sline,all_mask);
          printf("%d\n", benchRet); 
          free(sline);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long all_mask = 10;
        
          int _len_sline0 = 100;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
              sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          sline[_i0].lost = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = interesting(sline,all_mask);
          printf("%d\n", benchRet); 
          free(sline);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long all_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sline0 = 1;
          struct sline * sline = (struct sline *) malloc(_len_sline0*sizeof(struct sline));
          for(int _i0 = 0; _i0 < _len_sline0; _i0++) {
              sline[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          sline[_i0].lost = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = interesting(sline,all_mask);
          printf("%d\n", benchRet); 
          free(sline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
