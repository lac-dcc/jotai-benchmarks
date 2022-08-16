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
struct TYPE_3__ {unsigned long* key; int pos; } ;
typedef  TYPE_1__ rk_state ;

/* Variables and functions */
 int RK_STATE_LEN ; 

__attribute__((used)) static void
init_genrand(rk_state *self, unsigned long s)
{
    int mti;
    unsigned long *mt = self->key;

    mt[0] = s & 0xffffffffUL;
    for (mti = 1; mti < RK_STATE_LEN; mti++) {
        /*
         * See Knuth TAOCP Vol2. 3rd Ed. P.106 for multiplier.
         * In the previous versions, MSBs of the seed affect
         * only MSBs of the array mt[].
         * 2002/01/09 modified by Makoto Matsumoto
         */
        mt[mti] = (1812433253UL * (mt[mti-1] ^ (mt[mti-1] >> 30)) + mti);
        /* for > 32 bit machines */
        mt[mti] &= 0xffffffffUL;
    }
    self->pos = mti;
    return;
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
          unsigned long s = 100;
          int _len_self0 = 1;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__key0 = 1;
          self[_i0].key = (unsigned long *) malloc(_len_self__i0__key0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_self__i0__key0; _j0++) {
            self[_i0].key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        self[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_genrand(self,s);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].key);
          }
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
