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
       0            big-arr\n\
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

/* Type definitions */
struct cmipci_sb_reg {unsigned long left_reg; unsigned long right_reg; unsigned long left_shift; unsigned long right_shift; unsigned long invert; unsigned long stereo; unsigned long mask; } ;

/* Variables and functions */

__attribute__((used)) static void cmipci_sb_reg_decode(struct cmipci_sb_reg *r, unsigned long val)
{
	r->left_reg = val & 0xff;
	r->right_reg = (val >> 8) & 0xff;
	r->left_shift = (val >> 16) & 0x07;
	r->right_shift = (val >> 19) & 0x07;
	r->invert = (val >> 22) & 1;
	r->stereo = (val >> 23) & 1;
	r->mask = (val >> 24) & 0xff;
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

    // big-arr
    case 0:
    {
          unsigned long val = 255;
          int _len_r0 = 1;
          struct cmipci_sb_reg * r = (struct cmipci_sb_reg *) malloc(_len_r0*sizeof(struct cmipci_sb_reg));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r->left_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        r->right_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        r->left_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        r->right_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        r->invert = ((-2 * (next_i()%2)) + 1) * next_i();
        r->stereo = ((-2 * (next_i()%2)) + 1) * next_i();
        r->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cmipci_sb_reg_decode(r,val);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
