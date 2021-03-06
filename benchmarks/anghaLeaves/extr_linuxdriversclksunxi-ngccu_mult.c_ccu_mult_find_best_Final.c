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
struct _ccu_mult {int min; int max; int mult; } ;

/* Variables and functions */

__attribute__((used)) static void ccu_mult_find_best(unsigned long parent, unsigned long rate,
			       struct _ccu_mult *mult)
{
	int _mult;

	_mult = rate / parent;
	if (_mult < mult->min)
		_mult = mult->min;

	if (_mult > mult->max)
		_mult = mult->max;

	mult->mult = _mult;
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
          unsigned long parent = 100;
          unsigned long rate = 100;
          int _len_mult0 = 1;
          struct _ccu_mult * mult = (struct _ccu_mult *) malloc(_len_mult0*sizeof(struct _ccu_mult));
          for(int _i0 = 0; _i0 < _len_mult0; _i0++) {
            mult[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccu_mult_find_best(parent,rate,mult);
          free(mult);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long parent = 255;
          unsigned long rate = 255;
          int _len_mult0 = 65025;
          struct _ccu_mult * mult = (struct _ccu_mult *) malloc(_len_mult0*sizeof(struct _ccu_mult));
          for(int _i0 = 0; _i0 < _len_mult0; _i0++) {
            mult[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccu_mult_find_best(parent,rate,mult);
          free(mult);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long parent = 10;
          unsigned long rate = 10;
          int _len_mult0 = 100;
          struct _ccu_mult * mult = (struct _ccu_mult *) malloc(_len_mult0*sizeof(struct _ccu_mult));
          for(int _i0 = 0; _i0 < _len_mult0; _i0++) {
            mult[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
        mult[_i0].mult = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccu_mult_find_best(parent,rate,mult);
          free(mult);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
