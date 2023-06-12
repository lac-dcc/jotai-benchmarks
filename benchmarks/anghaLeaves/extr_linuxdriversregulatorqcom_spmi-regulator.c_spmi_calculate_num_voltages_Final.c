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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct spmi_voltage_set_points {int count; unsigned int n_voltages; struct spmi_voltage_range* range; } ;
struct spmi_voltage_range {unsigned int set_point_max_uV; unsigned int set_point_min_uV; unsigned int step_uV; unsigned int n_voltages; } ;

/* Variables and functions */

__attribute__((used)) static void spmi_calculate_num_voltages(struct spmi_voltage_set_points *points)
{
	unsigned int n;
	struct spmi_voltage_range *range = points->range;

	for (; range < points->range + points->count; range++) {
		n = 0;
		if (range->set_point_max_uV) {
			n = range->set_point_max_uV - range->set_point_min_uV;
			n = (n / range->step_uV) + 1;
		}
		range->n_voltages = n;
		points->n_voltages += n;
	}
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_points0 = 65025;
          struct spmi_voltage_set_points * points = (struct spmi_voltage_set_points *) malloc(_len_points0*sizeof(struct spmi_voltage_set_points));
          for(int _i0 = 0; _i0 < _len_points0; _i0++) {
              points[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_points__i0__range0 = 1;
          points[_i0].range = (struct spmi_voltage_range *) malloc(_len_points__i0__range0*sizeof(struct spmi_voltage_range));
          for(int _j0 = 0; _j0 < _len_points__i0__range0; _j0++) {
              points[_i0].range->set_point_max_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->set_point_min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->step_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          spmi_calculate_num_voltages(points);
          for(int _aux = 0; _aux < _len_points0; _aux++) {
          free(points[_aux].range);
          }
          free(points);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_points0 = 100;
          struct spmi_voltage_set_points * points = (struct spmi_voltage_set_points *) malloc(_len_points0*sizeof(struct spmi_voltage_set_points));
          for(int _i0 = 0; _i0 < _len_points0; _i0++) {
              points[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_points__i0__range0 = 1;
          points[_i0].range = (struct spmi_voltage_range *) malloc(_len_points__i0__range0*sizeof(struct spmi_voltage_range));
          for(int _j0 = 0; _j0 < _len_points__i0__range0; _j0++) {
              points[_i0].range->set_point_max_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->set_point_min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->step_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          spmi_calculate_num_voltages(points);
          for(int _aux = 0; _aux < _len_points0; _aux++) {
          free(points[_aux].range);
          }
          free(points);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_points0 = 1;
          struct spmi_voltage_set_points * points = (struct spmi_voltage_set_points *) malloc(_len_points0*sizeof(struct spmi_voltage_set_points));
          for(int _i0 = 0; _i0 < _len_points0; _i0++) {
              points[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_points__i0__range0 = 1;
          points[_i0].range = (struct spmi_voltage_range *) malloc(_len_points__i0__range0*sizeof(struct spmi_voltage_range));
          for(int _j0 = 0; _j0 < _len_points__i0__range0; _j0++) {
              points[_i0].range->set_point_max_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->set_point_min_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->step_uV = ((-2 * (next_i()%2)) + 1) * next_i();
          points[_i0].range->n_voltages = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          spmi_calculate_num_voltages(points);
          for(int _aux = 0; _aux < _len_points0; _aux++) {
          free(points[_aux].range);
          }
          free(points);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
