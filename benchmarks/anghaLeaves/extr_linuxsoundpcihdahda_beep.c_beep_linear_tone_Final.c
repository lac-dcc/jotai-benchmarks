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
       1            big-arr-10x\n\
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
struct hda_beep {int dummy; } ;

/* Variables and functions */
 int DIGBEEP_HZ_MAX ; 
 int DIGBEEP_HZ_MIN ; 
 int DIGBEEP_HZ_STEP ; 

__attribute__((used)) static int beep_linear_tone(struct hda_beep *beep, int hz)
{
	if (hz <= 0)
		return 0;
	hz *= 1000; /* fixed point */
	hz = hz - DIGBEEP_HZ_MIN
		+ DIGBEEP_HZ_STEP / 2; /* round to nearest step */
	if (hz < 0)
		hz = 0; /* turn off PC beep*/
	else if (hz >= (DIGBEEP_HZ_MAX - DIGBEEP_HZ_MIN))
		hz = 1; /* max frequency */
	else {
		hz /= DIGBEEP_HZ_STEP;
		hz = 255 - hz;
	}
	return hz;
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
          int hz = 100;
          int _len_beep0 = 1;
          struct hda_beep * beep = (struct hda_beep *) malloc(_len_beep0*sizeof(struct hda_beep));
          for(int _i0 = 0; _i0 < _len_beep0; _i0++) {
            beep[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = beep_linear_tone(beep,hz);
          printf("%d\n", benchRet); 
          free(beep);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int hz = 10;
          int _len_beep0 = 100;
          struct hda_beep * beep = (struct hda_beep *) malloc(_len_beep0*sizeof(struct hda_beep));
          for(int _i0 = 0; _i0 < _len_beep0; _i0++) {
            beep[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = beep_linear_tone(beep,hz);
          printf("%d\n", benchRet); 
          free(beep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
