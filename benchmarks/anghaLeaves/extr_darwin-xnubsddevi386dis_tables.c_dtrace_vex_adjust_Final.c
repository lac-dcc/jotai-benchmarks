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

/* Type definitions */
typedef  int uint_t ;

/* Variables and functions */
 int VEX_B ; 
 int VEX_R ; 

__attribute__((used)) static void
dtrace_vex_adjust(uint_t vex_byte1, uint_t mode, uint_t *reg, uint_t *r_m)
{
#pragma unused (mode)
	if (reg != NULL && r_m == NULL) {
		if (!(vex_byte1 & VEX_B))
			*reg += 8;
	} else {
		if (reg != NULL && ((VEX_R & vex_byte1) == 0))
			*reg += 8;
		if (r_m != NULL && ((VEX_B & vex_byte1) == 0))
			*r_m += 8;
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
          int vex_byte1 = 100;
          int mode = 100;
          int _len_reg0 = 1;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_m0 = 1;
          int * r_m = (int *) malloc(_len_r_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_m0; _i0++) {
            r_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dtrace_vex_adjust(vex_byte1,mode,reg,r_m);
          free(reg);
          free(r_m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vex_byte1 = 255;
          int mode = 255;
          int _len_reg0 = 65025;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_m0 = 65025;
          int * r_m = (int *) malloc(_len_r_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_m0; _i0++) {
            r_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dtrace_vex_adjust(vex_byte1,mode,reg,r_m);
          free(reg);
          free(r_m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vex_byte1 = 10;
          int mode = 10;
          int _len_reg0 = 100;
          int * reg = (int *) malloc(_len_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_m0 = 100;
          int * r_m = (int *) malloc(_len_r_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r_m0; _i0++) {
            r_m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dtrace_vex_adjust(vex_byte1,mode,reg,r_m);
          free(reg);
          free(r_m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
