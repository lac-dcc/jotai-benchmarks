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

/* Type definitions */
struct rs_rate {scalar_t__ ant; scalar_t__ type; scalar_t__ bw; scalar_t__ sgi; scalar_t__ bfer; scalar_t__ stbc; } ;

/* Variables and functions */
 scalar_t__ ANT_A ; 
 scalar_t__ ANT_B ; 

__attribute__((used)) static inline bool rs_rate_column_match(struct rs_rate *a,
					struct rs_rate *b)
{
	bool ant_match;

	if (a->stbc || a->bfer)
		ant_match = (b->ant == ANT_A || b->ant == ANT_B);
	else
		ant_match = (a->ant == b->ant);

	return (a->type == b->type) && (a->bw == b->bw) && (a->sgi == b->sgi)
		&& ant_match;
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
          int _len_a0 = 1;
          struct rs_rate * a = (struct rs_rate *) malloc(_len_a0*sizeof(struct rs_rate));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a->ant = ((-2 * (next_i()%2)) + 1) * next_i();
        a->type = ((-2 * (next_i()%2)) + 1) * next_i();
        a->bw = ((-2 * (next_i()%2)) + 1) * next_i();
        a->sgi = ((-2 * (next_i()%2)) + 1) * next_i();
        a->bfer = ((-2 * (next_i()%2)) + 1) * next_i();
        a->stbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct rs_rate * b = (struct rs_rate *) malloc(_len_b0*sizeof(struct rs_rate));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b->ant = ((-2 * (next_i()%2)) + 1) * next_i();
        b->type = ((-2 * (next_i()%2)) + 1) * next_i();
        b->bw = ((-2 * (next_i()%2)) + 1) * next_i();
        b->sgi = ((-2 * (next_i()%2)) + 1) * next_i();
        b->bfer = ((-2 * (next_i()%2)) + 1) * next_i();
        b->stbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rs_rate_column_match(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
