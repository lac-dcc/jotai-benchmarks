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
struct knote {long kn_sfflags; long kn_fflags; } ;

/* Variables and functions */

__attribute__((used)) static int
filt_fsevent(struct knote *kn, long hint)
{
	/*
	 * Backwards compatibility:
	 * Other filters would do nothing if kn->kn_sfflags == 0
	 */

	if ((kn->kn_sfflags == 0) || (kn->kn_sfflags & hint)) {
		kn->kn_fflags |= hint;
	}

	return (kn->kn_fflags != 0);
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
          long hint = 100;
          int _len_kn0 = 1;
          struct knote * kn = (struct knote *) malloc(_len_kn0*sizeof(struct knote));
          for(int _i0 = 0; _i0 < _len_kn0; _i0++) {
            kn[_i0].kn_sfflags = ((-2 * (next_i()%2)) + 1) * next_i();
        kn[_i0].kn_fflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = filt_fsevent(kn,hint);
          printf("%d\n", benchRet); 
          free(kn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
