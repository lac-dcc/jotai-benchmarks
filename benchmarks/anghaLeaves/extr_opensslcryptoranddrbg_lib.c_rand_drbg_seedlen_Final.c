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
struct TYPE_3__ {size_t strength; size_t min_entropylen; scalar_t__ min_noncelen; int /*<<< orphan*/ * get_nonce; } ;
typedef  TYPE_1__ RAND_DRBG ;

/* Variables and functions */

size_t rand_drbg_seedlen(RAND_DRBG *drbg)
{
    /*
     * If no os entropy source is available then RAND_seed(buffer, bufsize)
     * is expected to succeed if and only if the buffer length satisfies
     * the following requirements, which follow from the calculations
     * in RAND_DRBG_instantiate().
     */
    size_t min_entropy = drbg->strength;
    size_t min_entropylen = drbg->min_entropylen;

    /*
     * Extra entropy for the random nonce in the absence of a
     * get_nonce callback, see comment in RAND_DRBG_instantiate().
     */
    if (drbg->min_noncelen > 0 && drbg->get_nonce == NULL) {
        min_entropy += drbg->strength / 2;
        min_entropylen += drbg->min_noncelen;
    }

    /*
     * Convert entropy requirement from bits to bytes
     * (dividing by 8 without rounding upwards, because
     * all entropy requirements are divisible by 8).
     */
    min_entropy >>= 3;

    /* Return a value that satisfies both requirements */
    return min_entropy > min_entropylen ? min_entropy : min_entropylen;
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
          int _len_drbg0 = 1;
          struct TYPE_3__ * drbg = (struct TYPE_3__ *) malloc(_len_drbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drbg0; _i0++) {
            drbg[_i0].strength = ((-2 * (next_i()%2)) + 1) * next_i();
        drbg[_i0].min_entropylen = ((-2 * (next_i()%2)) + 1) * next_i();
        drbg[_i0].min_noncelen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drbg__i0__get_nonce0 = 1;
          drbg[_i0].get_nonce = (int *) malloc(_len_drbg__i0__get_nonce0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drbg__i0__get_nonce0; _j0++) {
            drbg[_i0].get_nonce[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = rand_drbg_seedlen(drbg);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_drbg0; _aux++) {
          free(drbg[_aux].get_nonce);
          }
          free(drbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
