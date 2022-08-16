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
struct rio_pw_filter {scalar_t__ mask; scalar_t__ low; scalar_t__ high; } ;

/* Variables and functions */

__attribute__((used)) static int rio_mport_match_pw_filter(struct rio_pw_filter *a,
				     struct rio_pw_filter *b)
{
	if ((a->mask == b->mask) && (a->low == b->low) && (a->high == b->high))
		return 1;
	return 0;
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
          int _len_a0 = 1;
          struct rio_pw_filter * a = (struct rio_pw_filter *) malloc(_len_a0*sizeof(struct rio_pw_filter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct rio_pw_filter * b = (struct rio_pw_filter *) malloc(_len_b0*sizeof(struct rio_pw_filter));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].high = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_mport_match_pw_filter(a,b);
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
