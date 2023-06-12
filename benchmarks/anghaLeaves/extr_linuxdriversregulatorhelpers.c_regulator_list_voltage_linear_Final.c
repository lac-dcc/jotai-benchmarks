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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int n_voltages; unsigned int linear_min_sel; int min_uV; unsigned int uV_step; } ;

/* Variables and functions */
 int EINVAL ; 

int regulator_list_voltage_linear(struct regulator_dev *rdev,
				  unsigned int selector)
{
	if (selector >= rdev->desc->n_voltages)
		return -EINVAL;
	if (selector < rdev->desc->linear_min_sel)
		return 0;

	selector -= rdev->desc->linear_min_sel;

	return rdev->desc->min_uV + (rdev->desc->uV_step * selector);
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 100;
        
          int _len_rdev0 = 1;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__desc0 = 1;
          rdev[_i0].desc = (struct TYPE_2__ *) malloc(_len_rdev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__desc0; _j0++) {
              rdev[_i0].desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->linear_min_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->uV_step = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = regulator_list_voltage_linear(rdev,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].desc);
          }
          free(rdev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 255;
        
          int _len_rdev0 = 65025;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__desc0 = 1;
          rdev[_i0].desc = (struct TYPE_2__ *) malloc(_len_rdev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__desc0; _j0++) {
              rdev[_i0].desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->linear_min_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->uV_step = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = regulator_list_voltage_linear(rdev,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].desc);
          }
          free(rdev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 10;
        
          int _len_rdev0 = 100;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__desc0 = 1;
          rdev[_i0].desc = (struct TYPE_2__ *) malloc(_len_rdev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__desc0; _j0++) {
              rdev[_i0].desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->linear_min_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->uV_step = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = regulator_list_voltage_linear(rdev,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].desc);
          }
          free(rdev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int selector = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rdev0 = 1;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__desc0 = 1;
          rdev[_i0].desc = (struct TYPE_2__ *) malloc(_len_rdev__i0__desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rdev__i0__desc0; _j0++) {
              rdev[_i0].desc->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->linear_min_sel = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].desc->uV_step = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = regulator_list_voltage_linear(rdev,selector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].desc);
          }
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
