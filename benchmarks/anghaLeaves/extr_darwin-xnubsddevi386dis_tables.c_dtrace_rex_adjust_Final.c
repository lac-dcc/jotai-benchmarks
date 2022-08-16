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
typedef  int uint_t ;

/* Variables and functions */
 int REX_B ; 
 int REX_R ; 

__attribute__((used)) static void
dtrace_rex_adjust(uint_t rex_prefix, uint_t mode, uint_t *reg, uint_t *r_m)
{
#pragma unused (mode)
	if (reg != NULL && r_m == NULL) {
		if (rex_prefix & REX_B)
			*reg += 8;
	} else {
		if (reg != NULL && (REX_R & rex_prefix) != 0)
			*reg += 8;
		if (r_m != NULL && (REX_B & rex_prefix) != 0)
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
          int rex_prefix = 100;
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
          dtrace_rex_adjust(rex_prefix,mode,reg,r_m);
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
