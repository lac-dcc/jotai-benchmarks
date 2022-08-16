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

/* Type definitions */
struct biquad2_state {int gain; int z1; int a1; int z2; int a2; int b1; int b2; } ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static inline int16_t biquad2(struct biquad2_state *bq, int16_t sample)
{
	int32_t y;
	int32_t z0;

	z0 = sample * bq->gain + bq->z1 * bq->a1 + bq->z2 * bq->a2;
	y = z0 + bq->z1 * bq->b1 + bq->z2 * bq->b2;

	bq->z2 = bq->z1;
	bq->z1 = z0 >> 15;
	y >>= 15;
	return  y;
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
          int sample = 100;
          int _len_bq0 = 1;
          struct biquad2_state * bq = (struct biquad2_state *) malloc(_len_bq0*sizeof(struct biquad2_state));
          for(int _i0 = 0; _i0 < _len_bq0; _i0++) {
            bq[_i0].gain = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].z1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].a1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].z2 = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].a2 = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].b1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bq[_i0].b2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = biquad2(bq,sample);
          printf("%d\n", benchRet); 
          free(bq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
