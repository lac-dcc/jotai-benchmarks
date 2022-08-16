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
struct comedi_subdevice {int io_bits; } ;

/* Variables and functions */
 int PCM3724_DIO_DIR_A0_OUT ; 
 int PCM3724_DIO_DIR_A1_OUT ; 
 int PCM3724_DIO_DIR_B0_OUT ; 
 int PCM3724_DIO_DIR_B1_OUT ; 
 int PCM3724_DIO_DIR_C0_OUT ; 
 int PCM3724_DIO_DIR_C1_OUT ; 

__attribute__((used)) static int compute_buffer(int config, int devno, struct comedi_subdevice *s)
{
	/* 1 in io_bits indicates output */
	if (s->io_bits & 0x0000ff) {
		if (devno == 0)
			config |= PCM3724_DIO_DIR_A0_OUT;
		else
			config |= PCM3724_DIO_DIR_A1_OUT;
	}
	if (s->io_bits & 0x00ff00) {
		if (devno == 0)
			config |= PCM3724_DIO_DIR_B0_OUT;
		else
			config |= PCM3724_DIO_DIR_B1_OUT;
	}
	if (s->io_bits & 0xff0000) {
		if (devno == 0)
			config |= PCM3724_DIO_DIR_C0_OUT;
		else
			config |= PCM3724_DIO_DIR_C1_OUT;
	}
	return config;
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
          int config = 100;
          int devno = 100;
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].io_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_buffer(config,devno,s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int config = 10;
          int devno = 10;
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].io_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_buffer(config,devno,s);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
