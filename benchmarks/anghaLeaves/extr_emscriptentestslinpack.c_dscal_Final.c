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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int REAL ;

/* Variables and functions */

void dscal(int n, REAL da, REAL dx[], int incx)

/*     scales a vector by a constant.
      jack dongarra, linpack, 3/11/78.
*/

{
        int i,m,mp1,nincx;

        mp1 = 0;
        m = 0;

        if(n <= 0)return;
        if(incx != 1) {

                /* code for increment not equal to 1 */

                nincx = n*incx;
                for (i = 0; i < nincx; i = i + incx)
                        dx[i] = da*dx[i];
                        
                return;
        }

        /* code for increment equal to 1 */


#ifdef ROLL

        for (i = 0; i < n; i++)
                dx[i] = da*dx[i];
                

#endif

#ifdef UNROLL


        m = n % 5;
        if (m != 0) {
                for (i = 0; i < m; i++)
                        dx[i] = da*dx[i];
                if (n < 5) return;
        }
        for (i = m; i < n; i = i + 5){
                dx[i] = da*dx[i];
                dx[i+1] = da*dx[i+1];
                dx[i+2] = da*dx[i+2];
                dx[i+3] = da*dx[i+3];
                dx[i+4] = da*dx[i+4];
        }

#endif

}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 3592
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 1545
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 1545
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 1545
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 1545
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 1544
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 1799
          // ------------------------------- 

          int n = 255;
        
          int da = 255;
        
          int incx = 255;
        
          int _len_dx0 = 65025;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dscal(n,da,dx,incx);
          free(dx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 162
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 75
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 75
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 75
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 75
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 74
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 84
          // ------------------------------- 

          int n = 10;
        
          int da = 10;
        
          int incx = 10;
        
          int _len_dx0 = 100;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dscal(n,da,dx,incx);
          free(dx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int da = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int incx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dx0 = 1;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dscal(n,da,dx,incx);
          free(dx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
