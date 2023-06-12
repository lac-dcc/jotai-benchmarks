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
       0            empty\n\
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
struct hashset_int {unsigned int size; long long* h; int /*<<< orphan*/  filled; } ;

/* Variables and functions */

int hashset_int_insert (struct hashset_int *H, int id) {
  int h1, h2;
  long long D;
  h1 = ((unsigned int) id) % H->size;
  h2 = 1 + ((unsigned int) id) % (H->size - 1);
  while ((D = H->h[h1]) != 0) {
    if (D == id) {
      return 0;
    }
    h1 += h2;
    if (h1 >= H->size) { h1 -= H->size; }
  }
  H->h[h1] = id;
  H->filled++;
  return 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
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
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_H0 = 1;
          struct hashset_int * H = (struct hashset_int *) malloc(_len_H0*sizeof(struct hashset_int));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
              H[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_H__i0__h0 = 1;
          H[_i0].h = (long long *) malloc(_len_H__i0__h0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_H__i0__h0; _j0++) {
            H[_i0].h[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          H[_i0].filled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = hashset_int_insert(H,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_H0; _aux++) {
          free(H[_aux].h);
          }
          free(H);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
