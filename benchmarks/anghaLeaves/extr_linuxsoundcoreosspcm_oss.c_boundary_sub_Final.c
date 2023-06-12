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

/* Variables and functions */

__attribute__((used)) static int boundary_sub(int a, int adir,
			int b, int bdir,
			int *c, int *cdir)
{
	adir = adir < 0 ? -1 : (adir > 0 ? 1 : 0);
	bdir = bdir < 0 ? -1 : (bdir > 0 ? 1 : 0);
	*c = a - b;
	*cdir = adir - bdir;
	if (*cdir == -2) {
		(*c)--;
	} else if (*cdir == 2) {
		(*c)++;
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
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int a = 100;
        
          int adir = 100;
        
          int b = 100;
        
          int bdir = 100;
        
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cdir0 = 1;
          int * cdir = (int *) malloc(_len_cdir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdir0; _i0++) {
            cdir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = boundary_sub(a,adir,b,bdir,c,cdir);
          printf("%d\n", benchRet); 
          free(c);
          free(cdir);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int a = 255;
        
          int adir = 255;
        
          int b = 255;
        
          int bdir = 255;
        
          int _len_c0 = 65025;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cdir0 = 65025;
          int * cdir = (int *) malloc(_len_cdir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdir0; _i0++) {
            cdir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = boundary_sub(a,adir,b,bdir,c,cdir);
          printf("%d\n", benchRet); 
          free(c);
          free(cdir);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 46
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int a = 10;
        
          int adir = 10;
        
          int b = 10;
        
          int bdir = 10;
        
          int _len_c0 = 100;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cdir0 = 100;
          int * cdir = (int *) malloc(_len_cdir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdir0; _i0++) {
            cdir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = boundary_sub(a,adir,b,bdir,c,cdir);
          printf("%d\n", benchRet); 
          free(c);
          free(cdir);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int adir = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int bdir = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_c0 = 1;
          int * c = (int *) malloc(_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cdir0 = 1;
          int * cdir = (int *) malloc(_len_cdir0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cdir0; _i0++) {
            cdir[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = boundary_sub(a,adir,b,bdir,c,cdir);
          printf("%d\n", benchRet); 
          free(c);
          free(cdir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
