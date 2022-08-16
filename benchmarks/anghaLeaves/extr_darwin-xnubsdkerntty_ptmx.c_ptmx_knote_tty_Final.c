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
struct tty {int dummy; } ;
struct ptmx_ioctl {struct tty* pt_tty; } ;
struct knote {struct ptmx_ioctl* kn_hook; } ;

/* Variables and functions */

__attribute__((used)) static struct tty *
ptmx_knote_tty(struct knote *kn)
{
	struct ptmx_ioctl *pti = kn->kn_hook;
	return pti->pt_tty;
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
          int _len_kn0 = 1;
          struct knote * kn = (struct knote *) malloc(_len_kn0*sizeof(struct knote));
          for(int _i0 = 0; _i0 < _len_kn0; _i0++) {
              int _len_kn__i0__kn_hook0 = 1;
          kn[_i0].kn_hook = (struct ptmx_ioctl *) malloc(_len_kn__i0__kn_hook0*sizeof(struct ptmx_ioctl));
          for(int _j0 = 0; _j0 < _len_kn__i0__kn_hook0; _j0++) {
              int _len_kn__i0__kn_hook_pt_tty0 = 1;
          kn[_i0].kn_hook->pt_tty = (struct tty *) malloc(_len_kn__i0__kn_hook_pt_tty0*sizeof(struct tty));
          for(int _j0 = 0; _j0 < _len_kn__i0__kn_hook_pt_tty0; _j0++) {
            kn[_i0].kn_hook->pt_tty->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct tty * benchRet = ptmx_knote_tty(kn);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_kn0; _aux++) {
          free(kn[_aux].kn_hook);
          }
          free(kn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
