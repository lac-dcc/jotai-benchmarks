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
struct v4l2_frequency {int /*<<< orphan*/  frequency; scalar_t__ tuner; } ;
struct saa7164_port {int /*<<< orphan*/  freq; } ;

/* Variables and functions */
 int EINVAL ; 

int saa7164_g_frequency(struct saa7164_port *port, struct v4l2_frequency *f)
{
	if (f->tuner)
		return -EINVAL;

	f->frequency = port->freq;
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
          int _len_port0 = 1;
          struct saa7164_port * port = (struct saa7164_port *) malloc(_len_port0*sizeof(struct saa7164_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          struct v4l2_frequency * f = (struct v4l2_frequency *) malloc(_len_f0*sizeof(struct v4l2_frequency));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].tuner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = saa7164_g_frequency(port,f);
          printf("%d\n", benchRet); 
          free(port);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
