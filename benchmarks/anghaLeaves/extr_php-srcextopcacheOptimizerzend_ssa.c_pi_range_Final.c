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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {char underflow; char overflow; void* max; void* min; } ;
struct TYPE_8__ {int min_var; int max_var; int min_ssa_var; int max_ssa_var; int /*<<< orphan*/  negative; TYPE_2__ range; } ;
typedef  TYPE_3__ zend_ssa_range_constraint ;
struct TYPE_6__ {TYPE_3__ range; } ;
struct TYPE_9__ {int has_range_constraint; TYPE_1__ constraint; } ;
typedef  TYPE_4__ zend_ssa_phi ;
typedef  void* zend_long ;

/* Variables and functions */
 int /*<<< orphan*/  NEG_INIT ; 
 int /*<<< orphan*/  NEG_NONE ; 

__attribute__((used)) static void pi_range(
		zend_ssa_phi *phi, int min_var, int max_var, zend_long min, zend_long max,
		char underflow, char overflow, char negative) /* {{{ */
{
	zend_ssa_range_constraint *constraint = &phi->constraint.range;
	constraint->min_var = min_var;
	constraint->max_var = max_var;
	constraint->min_ssa_var = -1;
	constraint->max_ssa_var = -1;
	constraint->range.min = min;
	constraint->range.max = max;
	constraint->range.underflow = underflow;
	constraint->range.overflow = overflow;
	constraint->negative = negative ? NEG_INIT : NEG_NONE;
	phi->has_range_constraint = 1;
}

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
          int min_var = 100;
        
          int max_var = 100;
        
          char underflow = 100;
        
          char overflow = 100;
        
          char negative = 100;
        
          int _len_phi0 = 1;
          struct TYPE_9__ * phi = (struct TYPE_9__ *) malloc(_len_phi0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
              phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.negative = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.overflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          void * min;
        
          void * max;
        
          pi_range(phi,min_var,max_var,min,max,underflow,overflow,negative);
          free(phi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int min_var = 255;
        
          int max_var = 255;
        
          char underflow = 255;
        
          char overflow = 255;
        
          char negative = 255;
        
          int _len_phi0 = 65025;
          struct TYPE_9__ * phi = (struct TYPE_9__ *) malloc(_len_phi0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
              phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.negative = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.overflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          void * min;
        
          void * max;
        
          pi_range(phi,min_var,max_var,min,max,underflow,overflow,negative);
          free(phi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int min_var = 10;
        
          int max_var = 10;
        
          char underflow = 10;
        
          char overflow = 10;
        
          char negative = 10;
        
          int _len_phi0 = 100;
          struct TYPE_9__ * phi = (struct TYPE_9__ *) malloc(_len_phi0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
              phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.negative = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.overflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          void * min;
        
          void * max;
        
          pi_range(phi,min_var,max_var,min,max,underflow,overflow,negative);
          free(phi);
        
        break;
    }
    // empty
    case 3:
    {
          int min_var = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int max_var = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char underflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char overflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
          char negative = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_phi0 = 1;
          struct TYPE_9__ * phi = (struct TYPE_9__ *) malloc(_len_phi0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
              phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.min_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.max_ssa_var = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.negative = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.underflow = ((-2 * (next_i()%2)) + 1) * next_i();
          phi[_i0].constraint.range.range.overflow = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          void * min;
        
          void * max;
        
          pi_range(phi,min_var,max_var,min,max,underflow,overflow,negative);
          free(phi);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
