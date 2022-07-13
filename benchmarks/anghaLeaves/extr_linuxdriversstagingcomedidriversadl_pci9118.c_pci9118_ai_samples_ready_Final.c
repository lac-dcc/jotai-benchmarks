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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pci9118_private {unsigned int ai_add_front; unsigned int ai_add_back; unsigned int ai_act_dmapos; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pci9118_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int pci9118_ai_samples_ready(struct comedi_device *dev,
					     struct comedi_subdevice *s,
					     unsigned int n_raw_samples)
{
	struct pci9118_private *devpriv = dev->private;
	struct comedi_cmd *cmd = &s->async->cmd;
	unsigned int start_pos = devpriv->ai_add_front;
	unsigned int stop_pos = start_pos + cmd->chanlist_len;
	unsigned int span_len = stop_pos + devpriv->ai_add_back;
	unsigned int dma_pos = devpriv->ai_act_dmapos;
	unsigned int whole_spans, n_samples, x;

	if (span_len == cmd->chanlist_len)
		return n_raw_samples;	/* use all samples */

	/*
	 * Not all samples are to be used.  Buffer contents consist of a
	 * possibly non-whole number of spans and a region of each span
	 * is to be used.
	 *
	 * Account for samples in whole number of spans.
	 */
	whole_spans = n_raw_samples / span_len;
	n_samples = whole_spans * cmd->chanlist_len;
	n_raw_samples -= whole_spans * span_len;

	/*
	 * Deal with remaining samples which could overlap up to two spans.
	 */
	while (n_raw_samples) {
		if (dma_pos < start_pos) {
			/* Skip samples before start position. */
			x = start_pos - dma_pos;
			if (x > n_raw_samples)
				x = n_raw_samples;
			dma_pos += x;
			n_raw_samples -= x;
			if (!n_raw_samples)
				break;
		}
		if (dma_pos < stop_pos) {
			/* Include samples before stop position. */
			x = stop_pos - dma_pos;
			if (x > n_raw_samples)
				x = n_raw_samples;
			n_samples += x;
			dma_pos += x;
			n_raw_samples -= x;
		}
		/* Advance to next span. */
		start_pos += span_len;
		stop_pos += span_len;
	}
	return n_samples;
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
          unsigned int n_raw_samples = 100;
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci9118_private *) malloc(_len_dev__i0__private0*sizeof(struct pci9118_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_add_front = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_add_back = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_act_dmapos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct TYPE_2__ *) malloc(_len_s__i0__async0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->cmd.chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pci9118_ai_samples_ready(dev,s,n_raw_samples);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int n_raw_samples = 255;
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci9118_private *) malloc(_len_dev__i0__private0*sizeof(struct pci9118_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_add_front = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_add_back = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_act_dmapos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct TYPE_2__ *) malloc(_len_s__i0__async0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->cmd.chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pci9118_ai_samples_ready(dev,s,n_raw_samples);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int n_raw_samples = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct pci9118_private *) malloc(_len_dev__i0__private0*sizeof(struct pci9118_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->ai_add_front = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_add_back = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->ai_act_dmapos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct TYPE_2__ *) malloc(_len_s__i0__async0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->cmd.chanlist_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pci9118_ai_samples_ready(dev,s,n_raw_samples);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
