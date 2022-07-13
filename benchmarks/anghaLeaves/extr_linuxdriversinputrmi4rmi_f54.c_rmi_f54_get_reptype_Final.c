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
struct f54_data {int* inputs; } ;
typedef  enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;

/* Variables and functions */
 unsigned int F54_MAX_REPORT_TYPE ; 
 int F54_REPORT_NONE ; 

__attribute__((used)) static enum rmi_f54_report_type rmi_f54_get_reptype(struct f54_data *f54,
						unsigned int i)
{
	if (i >= F54_MAX_REPORT_TYPE)
		return F54_REPORT_NONE;

	return f54->inputs[i];
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
          unsigned int i = 100;
          int _len_f540 = 1;
          struct f54_data * f54 = (struct f54_data *) malloc(_len_f540*sizeof(struct f54_data));
          for(int _i0 = 0; _i0 < _len_f540; _i0++) {
              int _len_f54__i0__inputs0 = 1;
          f54[_i0].inputs = (int *) malloc(_len_f54__i0__inputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f54__i0__inputs0; _j0++) {
            f54[_i0].inputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum rmi_f54_report_type benchRet = rmi_f54_get_reptype(f54,i);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_f540; _aux++) {
          free(f54[_aux].inputs);
          }
          free(f54);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int i = 255;
          int _len_f540 = 65025;
          struct f54_data * f54 = (struct f54_data *) malloc(_len_f540*sizeof(struct f54_data));
          for(int _i0 = 0; _i0 < _len_f540; _i0++) {
              int _len_f54__i0__inputs0 = 1;
          f54[_i0].inputs = (int *) malloc(_len_f54__i0__inputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f54__i0__inputs0; _j0++) {
            f54[_i0].inputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum rmi_f54_report_type benchRet = rmi_f54_get_reptype(f54,i);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_f540; _aux++) {
          free(f54[_aux].inputs);
          }
          free(f54);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int i = 10;
          int _len_f540 = 100;
          struct f54_data * f54 = (struct f54_data *) malloc(_len_f540*sizeof(struct f54_data));
          for(int _i0 = 0; _i0 < _len_f540; _i0++) {
              int _len_f54__i0__inputs0 = 1;
          f54[_i0].inputs = (int *) malloc(_len_f54__i0__inputs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_f54__i0__inputs0; _j0++) {
            f54[_i0].inputs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum rmi_f54_report_type benchRet = rmi_f54_get_reptype(f54,i);
          printf("{{other_type}} %p\n", &benchRet); 
          for(int _aux = 0; _aux < _len_f540; _aux++) {
          free(f54[_aux].inputs);
          }
          free(f54);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
