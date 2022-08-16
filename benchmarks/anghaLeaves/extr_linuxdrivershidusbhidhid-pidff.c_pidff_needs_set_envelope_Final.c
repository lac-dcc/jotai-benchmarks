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
struct ff_envelope {scalar_t__ attack_level; scalar_t__ fade_level; scalar_t__ attack_length; scalar_t__ fade_length; } ;

/* Variables and functions */

__attribute__((used)) static int pidff_needs_set_envelope(struct ff_envelope *envelope,
				    struct ff_envelope *old)
{
	return envelope->attack_level != old->attack_level ||
	       envelope->fade_level != old->fade_level ||
	       envelope->attack_length != old->attack_length ||
	       envelope->fade_length != old->fade_length;
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
          int _len_envelope0 = 1;
          struct ff_envelope * envelope = (struct ff_envelope *) malloc(_len_envelope0*sizeof(struct ff_envelope));
          for(int _i0 = 0; _i0 < _len_envelope0; _i0++) {
            envelope[_i0].attack_level = ((-2 * (next_i()%2)) + 1) * next_i();
        envelope[_i0].fade_level = ((-2 * (next_i()%2)) + 1) * next_i();
        envelope[_i0].attack_length = ((-2 * (next_i()%2)) + 1) * next_i();
        envelope[_i0].fade_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old0 = 1;
          struct ff_envelope * old = (struct ff_envelope *) malloc(_len_old0*sizeof(struct ff_envelope));
          for(int _i0 = 0; _i0 < _len_old0; _i0++) {
            old[_i0].attack_level = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].fade_level = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].attack_length = ((-2 * (next_i()%2)) + 1) * next_i();
        old[_i0].fade_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pidff_needs_set_envelope(envelope,old);
          printf("%d\n", benchRet); 
          free(envelope);
          free(old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
