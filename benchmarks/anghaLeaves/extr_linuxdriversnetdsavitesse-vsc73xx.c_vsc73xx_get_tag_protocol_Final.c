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
struct dsa_switch {int dummy; } ;
typedef  enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;

/* Variables and functions */
 int DSA_TAG_PROTO_NONE ; 

__attribute__((used)) static enum dsa_tag_protocol vsc73xx_get_tag_protocol(struct dsa_switch *ds,
						      int port)
{
	/* The switch internally uses a 8 byte header with length,
	 * source port, tag, LPA and priority. This is supposedly
	 * only accessible when operating the switch using the internal
	 * CPU or with an external CPU mapping the device in, but not
	 * when operating the switch over SPI and putting frames in/out
	 * on port 6 (the CPU port). So far we must assume that we
	 * cannot access the tag. (See "Internal frame header" section
	 * 3.9.1 in the manual.)
	 */
	return DSA_TAG_PROTO_NONE;
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
          int port = 100;
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dsa_tag_protocol benchRet = vsc73xx_get_tag_protocol(ds,port);
          free(ds);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int port = 10;
          int _len_ds0 = 100;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
            ds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dsa_tag_protocol benchRet = vsc73xx_get_tag_protocol(ds,port);
          free(ds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
