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
struct em28xx {scalar_t__ chip_id; scalar_t__ is_webcam; } ;

/* Variables and functions */
 scalar_t__ CHIP_ID_EM2860 ; 
 scalar_t__ CHIP_ID_EM2883 ; 
 int disable_vbi ; 

__attribute__((used)) static int em28xx_vbi_supported(struct em28xx *dev)
{
	/* Modprobe option to manually disable */
	if (disable_vbi == 1)
		return 0;

	if (dev->is_webcam)
		return 0;

	/* FIXME: check subdevices for VBI support */

	if (dev->chip_id == CHIP_ID_EM2860 ||
	    dev->chip_id == CHIP_ID_EM2883)
		return 1;

	/* Version of em28xx that does not support VBI */
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
          int _len_dev0 = 1;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].is_webcam = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = em28xx_vbi_supported(dev);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
