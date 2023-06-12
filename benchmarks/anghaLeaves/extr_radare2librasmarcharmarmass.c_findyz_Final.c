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

__attribute__((used)) static int findyz(int x, int *y, int *z) {
	int i, j;
	for (i = 0;i < 0xff; i++) {
		for (j = 0;j < 0xf;j++) {
			int v = i << j;
			if (v > x) {
				continue;
			}
			if (v == x) {
				*y = i;
				*z = 16 - (j / 2);
				return 1;
			}
		}
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
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 5898
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 4478
          // ------------------------------- 
          // static_instructions_O2 : 96
          // dynamic_instructions_O2 : 1521
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 1521
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 1521
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 2755
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 3212
          // ------------------------------- 

          int x = 100;
        
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_z0 = 1;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = findyz(x,y,z);
          printf("%d\n", benchRet); 
          free(y);
          free(z);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 57660
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 42112
          // ------------------------------- 
          // static_instructions_O2 : 93
          // dynamic_instructions_O2 : 15079
          // ------------------------------- 
          // static_instructions_O3 : 93
          // dynamic_instructions_O3 : 15079
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 15079
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 27798
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 32390
          // ------------------------------- 

          int x = 255;
        
          int _len_y0 = 65025;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_z0 = 65025;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = findyz(x,y,z);
          printf("%d\n", benchRet); 
          free(y);
          free(z);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 48
          // dynamic_instructions_O0 : 1232
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 948
          // ------------------------------- 
          // static_instructions_O2 : 96
          // dynamic_instructions_O2 : 338
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 338
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 338
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 568
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 664
          // ------------------------------- 

          int x = 10;
        
          int _len_y0 = 100;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_z0 = 100;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = findyz(x,y,z);
          printf("%d\n", benchRet); 
          free(y);
          free(z);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 56112
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 39532
          // ------------------------------- 
          // static_instructions_O2 : 93
          // dynamic_instructions_O2 : 15079
          // ------------------------------- 
          // static_instructions_O3 : 93
          // dynamic_instructions_O3 : 15079
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 15079
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 27798
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 32390
          // ------------------------------- 

          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_z0 = 1;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = findyz(x,y,z);
          printf("%d\n", benchRet); 
          free(y);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
