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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int crtc_mode_ctrl; } ;
struct TYPE_3__ {int seq_clock_mode; int seq_reset; } ;
struct vga_softc {TYPE_2__ vga_crtc; TYPE_1__ vga_seq; } ;

/* Variables and functions */
 int CRTC_MC_TE ; 
 int SEQ_CM_SO ; 
 int SEQ_RESET_ASYNC ; 
 int SEQ_RESET_SYNC ; 

__attribute__((used)) static bool
vga_in_reset(struct vga_softc *sc)
{
	return (((sc->vga_seq.seq_clock_mode & SEQ_CM_SO) != 0) ||
	    ((sc->vga_seq.seq_reset & SEQ_RESET_ASYNC) == 0) ||
	    ((sc->vga_seq.seq_reset & SEQ_RESET_SYNC) == 0) ||
	    ((sc->vga_crtc.crtc_mode_ctrl & CRTC_MC_TE) == 0));
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
          int _len_sc0 = 1;
          struct vga_softc * sc = (struct vga_softc *) malloc(_len_sc0*sizeof(struct vga_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].vga_crtc.crtc_mode_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_seq.seq_clock_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_seq.seq_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vga_in_reset(sc);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
