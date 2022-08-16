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
struct me4000_private {int ai_init_ticks; int ai_scan_ticks; int ai_chan_ticks; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct me4000_private* private; } ;
struct comedi_cmd {int start_arg; int flags; int scan_begin_arg; int convert_arg; } ;

/* Variables and functions */
 int CMDF_ROUND_MASK ; 
 int CMDF_ROUND_NEAREST ; 
 int CMDF_ROUND_UP ; 

__attribute__((used)) static void me4000_ai_round_cmd_args(struct comedi_device *dev,
				     struct comedi_subdevice *s,
				     struct comedi_cmd *cmd)
{
	struct me4000_private *devpriv = dev->private;
	int rest;

	devpriv->ai_init_ticks = 0;
	devpriv->ai_scan_ticks = 0;
	devpriv->ai_chan_ticks = 0;

	if (cmd->start_arg) {
		devpriv->ai_init_ticks = (cmd->start_arg * 33) / 1000;
		rest = (cmd->start_arg * 33) % 1000;

		if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_NEAREST) {
			if (rest > 33)
				devpriv->ai_init_ticks++;
		} else if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_UP) {
			if (rest)
				devpriv->ai_init_ticks++;
		}
	}

	if (cmd->scan_begin_arg) {
		devpriv->ai_scan_ticks = (cmd->scan_begin_arg * 33) / 1000;
		rest = (cmd->scan_begin_arg * 33) % 1000;

		if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_NEAREST) {
			if (rest > 33)
				devpriv->ai_scan_ticks++;
		} else if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_UP) {
			if (rest)
				devpriv->ai_scan_ticks++;
		}
	}

	if (cmd->convert_arg) {
		devpriv->ai_chan_ticks = (cmd->convert_arg * 33) / 1000;
		rest = (cmd->convert_arg * 33) % 1000;

		if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_NEAREST) {
			if (rest > 33)
				devpriv->ai_chan_ticks++;
		} else if ((cmd->flags & CMDF_ROUND_MASK) == CMDF_ROUND_UP) {
			if (rest)
				devpriv->ai_chan_ticks++;
		}
	}
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
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct me4000_private *) malloc(_len_dev__i0__private0*sizeof(struct me4000_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_init_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_scan_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_chan_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct comedi_cmd * cmd = (struct comedi_cmd *) malloc(_len_cmd0*sizeof(struct comedi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].start_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].scan_begin_arg = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].convert_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          me4000_ai_round_cmd_args(dev,s,cmd);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(s);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
