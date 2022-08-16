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
typedef  unsigned long long krint64_t ;
struct TYPE_3__ {unsigned long long* mt; int mti; } ;
typedef  TYPE_1__ krand_t ;

/* Variables and functions */
 int KR_NN ; 

__attribute__((used)) static void kr_srand0(krint64_t seed, krand_t *kr)
{
	kr->mt[0] = seed;
	for (kr->mti = 1; kr->mti < KR_NN; ++kr->mti) 
		kr->mt[kr->mti] = 6364136223846793005ULL * (kr->mt[kr->mti - 1] ^ (kr->mt[kr->mti - 1] >> 62)) + kr->mti;
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

    // int-bounds
    case 0:
    {
          unsigned long long seed = 100;
          int _len_kr0 = 1;
          struct TYPE_3__ * kr = (struct TYPE_3__ *) malloc(_len_kr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_kr0; _i0++) {
              int _len_kr__i0__mt0 = 1;
          kr[_i0].mt = (unsigned long long *) malloc(_len_kr__i0__mt0*sizeof(unsigned long long));
          for(int _j0 = 0; _j0 < _len_kr__i0__mt0; _j0++) {
            kr[_i0].mt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        kr[_i0].mti = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kr_srand0(seed,kr);
          for(int _aux = 0; _aux < _len_kr0; _aux++) {
          free(kr[_aux].mt);
          }
          free(kr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
