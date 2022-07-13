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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int stbi_uc ;
typedef  scalar_t__ stbi__int16 ;
struct TYPE_3__ {int* fast; int* values; int* size; } ;
typedef  TYPE_1__ stbi__huffman ;

/* Variables and functions */
 int FAST_BITS ; 

__attribute__((used)) static void stbi__build_fast_ac(stbi__int16 *fast_ac, stbi__huffman *h)
{
   int i;
   for (i=0; i < (1 << FAST_BITS); ++i) {
      stbi_uc fast = h->fast[i];
      fast_ac[i] = 0;
      if (fast < 255) {
         int rs = h->values[fast];
         int run = (rs >> 4) & 15;
         int magbits = rs & 15;
         int len = h->size[fast];

         if (magbits && len + magbits <= FAST_BITS) {
            // magnitude code followed by receive_extend code
            int k = ((i << len) & ((1 << FAST_BITS) - 1)) >> (FAST_BITS - magbits);
            int m = 1 << (magbits - 1);
            if (k < m) k += (-1 << magbits) + 1;
            // if the result is small enough, we can fit it in fast_ac table
            if (k >= -128 && k <= 127)
               fast_ac[i] = (stbi__int16) ((k << 8) + (run << 4) + (len + magbits));
         }
      }
   }
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

    // big-arr
    case 0:
    {
          int _len_fast_ac0 = 65025;
          long * fast_ac = (long *) malloc(_len_fast_ac0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fast_ac0; _i0++) {
            fast_ac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 65025;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__fast0 = 1;
          h[_i0].fast = (int *) malloc(_len_h__i0__fast0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__fast0; _j0++) {
            h[_i0].fast[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__values0 = 1;
          h[_i0].values = (int *) malloc(_len_h__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__values0; _j0++) {
            h[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__size0 = 1;
          h[_i0].size = (int *) malloc(_len_h__i0__size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__size0; _j0++) {
            h[_i0].size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stbi__build_fast_ac(fast_ac,h);
          free(fast_ac);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].fast);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].values);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].size);
          }
          free(h);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fast_ac0 = 100;
          long * fast_ac = (long *) malloc(_len_fast_ac0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_fast_ac0; _i0++) {
            fast_ac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 100;
          struct TYPE_3__ * h = (struct TYPE_3__ *) malloc(_len_h0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
              int _len_h__i0__fast0 = 1;
          h[_i0].fast = (int *) malloc(_len_h__i0__fast0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__fast0; _j0++) {
            h[_i0].fast[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__values0 = 1;
          h[_i0].values = (int *) malloc(_len_h__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__values0; _j0++) {
            h[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h__i0__size0 = 1;
          h[_i0].size = (int *) malloc(_len_h__i0__size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_h__i0__size0; _j0++) {
            h[_i0].size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          stbi__build_fast_ac(fast_ac,h);
          free(fast_ac);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].fast);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].values);
          }
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(h[_aux].size);
          }
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
