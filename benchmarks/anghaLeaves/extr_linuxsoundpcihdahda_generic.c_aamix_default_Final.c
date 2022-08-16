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
struct hda_gen_spec {scalar_t__ aamix_mode; int /*<<< orphan*/  have_aamix_ctl; } ;

/* Variables and functions */

__attribute__((used)) static bool aamix_default(struct hda_gen_spec *spec)
{
	return !spec->have_aamix_ctl || spec->aamix_mode;
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
          int _len_spec0 = 1;
          struct hda_gen_spec * spec = (struct hda_gen_spec *) malloc(_len_spec0*sizeof(struct hda_gen_spec));
          for(int _i0 = 0; _i0 < _len_spec0; _i0++) {
            spec[_i0].aamix_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        spec[_i0].have_aamix_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = aamix_default(spec);
          printf("%d\n", benchRet); 
          free(spec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
