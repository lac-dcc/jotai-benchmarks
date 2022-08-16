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
typedef  int /*<<< orphan*/  u_int ;
struct tty {int oflag; int /*<<< orphan*/  osy; int /*<<< orphan*/  osx; int /*<<< orphan*/  ooy; int /*<<< orphan*/  oox; } ;

/* Variables and functions */

int
tty_window_offset(struct tty *tty, u_int *ox, u_int *oy, u_int *sx, u_int *sy)
{
	*ox = tty->oox;
	*oy = tty->ooy;
	*sx = tty->osx;
	*sy = tty->osy;

	return (tty->oflag);
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
          int _len_tty0 = 1;
          struct tty * tty = (struct tty *) malloc(_len_tty0*sizeof(struct tty));
          for(int _i0 = 0; _i0 < _len_tty0; _i0++) {
            tty[_i0].oflag = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].osy = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].osx = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].ooy = ((-2 * (next_i()%2)) + 1) * next_i();
        tty[_i0].oox = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ox0 = 1;
          int * ox = (int *) malloc(_len_ox0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ox0; _i0++) {
            ox[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_oy0 = 1;
          int * oy = (int *) malloc(_len_oy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_oy0; _i0++) {
            oy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sx0 = 1;
          int * sx = (int *) malloc(_len_sx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sx0; _i0++) {
            sx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sy0 = 1;
          int * sy = (int *) malloc(_len_sy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sy0; _i0++) {
            sy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tty_window_offset(tty,ox,oy,sx,sy);
          printf("%d\n", benchRet); 
          free(tty);
          free(ox);
          free(oy);
          free(sx);
          free(sy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
