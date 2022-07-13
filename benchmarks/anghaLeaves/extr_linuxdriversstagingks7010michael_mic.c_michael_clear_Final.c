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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct michael_mic {scalar_t__ m_bytes; int /*<<< orphan*/  k1; int /*<<< orphan*/  r; int /*<<< orphan*/  k0; int /*<<< orphan*/  l; } ;

/* Variables and functions */

__attribute__((used)) static inline void michael_clear(struct michael_mic *mic)
{
	mic->l = mic->k0;
	mic->r = mic->k1;
	mic->m_bytes = 0;
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
          int _len_mic0 = 1;
          struct michael_mic * mic = (struct michael_mic *) malloc(_len_mic0*sizeof(struct michael_mic));
          for(int _i0 = 0; _i0 < _len_mic0; _i0++) {
            mic[_i0].m_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k1 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k0 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          michael_clear(mic);
          free(mic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mic0 = 65025;
          struct michael_mic * mic = (struct michael_mic *) malloc(_len_mic0*sizeof(struct michael_mic));
          for(int _i0 = 0; _i0 < _len_mic0; _i0++) {
            mic[_i0].m_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k1 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k0 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          michael_clear(mic);
          free(mic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mic0 = 100;
          struct michael_mic * mic = (struct michael_mic *) malloc(_len_mic0*sizeof(struct michael_mic));
          for(int _i0 = 0; _i0 < _len_mic0; _i0++) {
            mic[_i0].m_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k1 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].k0 = ((-2 * (next_i()%2)) + 1) * next_i();
        mic[_i0].l = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          michael_clear(mic);
          free(mic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
