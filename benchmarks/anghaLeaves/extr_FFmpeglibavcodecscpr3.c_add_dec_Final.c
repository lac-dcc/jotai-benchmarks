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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int size; int length; int* symbols; int* freqs; int* cnts; } ;
typedef  TYPE_1__ PixelModel3 ;

/* Variables and functions */

__attribute__((used)) static int add_dec(PixelModel3 *m, int sym, int f1, int f2)
{
    int size;

    if (m->size >= 40 || m->size >= m->length)
        return -1;

    size = m->size;
    m->symbols[size] = sym;
    m->freqs[2 * size] = f1;
    m->freqs[2 * size + 1] = f2;
    m->cnts[size] = f1 - (f1 >> 1);
    m->size++;

    return size;
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
          int sym = 100;
        
          int f1 = 100;
        
          int f2 = 100;
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__symbols0 = 1;
          m[_i0].symbols = (int *) malloc(_len_m__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__symbols0; _j0++) {
            m[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__cnts0 = 1;
          m[_i0].cnts = (int *) malloc(_len_m__i0__cnts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__cnts0; _j0++) {
            m[_i0].cnts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = add_dec(m,sym,f1,f2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].symbols);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].cnts);
          }
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sym = 255;
        
          int f1 = 255;
        
          int f2 = 255;
        
          int _len_m0 = 65025;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__symbols0 = 1;
          m[_i0].symbols = (int *) malloc(_len_m__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__symbols0; _j0++) {
            m[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__cnts0 = 1;
          m[_i0].cnts = (int *) malloc(_len_m__i0__cnts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__cnts0; _j0++) {
            m[_i0].cnts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = add_dec(m,sym,f1,f2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].symbols);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].cnts);
          }
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sym = 10;
        
          int f1 = 10;
        
          int f2 = 10;
        
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__symbols0 = 1;
          m[_i0].symbols = (int *) malloc(_len_m__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__symbols0; _j0++) {
            m[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__cnts0 = 1;
          m[_i0].cnts = (int *) malloc(_len_m__i0__cnts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__cnts0; _j0++) {
            m[_i0].cnts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = add_dec(m,sym,f1,f2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].symbols);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].cnts);
          }
          free(m);
        
        break;
    }
    // empty
    case 3:
    {
          int sym = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int f1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int f2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
              m[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          m[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__symbols0 = 1;
          m[_i0].symbols = (int *) malloc(_len_m__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__symbols0; _j0++) {
            m[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__freqs0 = 1;
          m[_i0].freqs = (int *) malloc(_len_m__i0__freqs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__freqs0; _j0++) {
            m[_i0].freqs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__cnts0 = 1;
          m[_i0].cnts = (int *) malloc(_len_m__i0__cnts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__cnts0; _j0++) {
            m[_i0].cnts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = add_dec(m,sym,f1,f2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].symbols);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].freqs);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].cnts);
          }
          free(m);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
