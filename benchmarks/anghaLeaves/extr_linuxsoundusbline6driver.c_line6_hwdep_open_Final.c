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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int active; } ;
struct usb_line6 {TYPE_1__ messages; } ;
struct snd_hwdep {struct usb_line6* private_data; } ;
struct file {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int line6_hwdep_open(struct snd_hwdep *hw, struct file *file)
{
	struct usb_line6 *line6 = hw->private_data;

	/* NOTE: hwdep layer provides atomicity here */

	line6->messages.active = 1;

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
          int _len_hw0 = 1;
          struct snd_hwdep * hw = (struct snd_hwdep *) malloc(_len_hw0*sizeof(struct snd_hwdep));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__private_data0 = 1;
          hw[_i0].private_data = (struct usb_line6 *) malloc(_len_hw__i0__private_data0*sizeof(struct usb_line6));
          for(int _j0 = 0; _j0 < _len_hw__i0__private_data0; _j0++) {
            hw[_i0].private_data->messages.active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = line6_hwdep_open(hw,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].private_data);
          }
          free(hw);
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
