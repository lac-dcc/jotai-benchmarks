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

/* Type definitions */
struct gasket_interrupt_data {int num_interrupts; int /*<<< orphan*/ ** eventfd_ctxs; } ;

/* Variables and functions */
 int EINVAL ; 

int gasket_interrupt_clear_eventfd(struct gasket_interrupt_data *interrupt_data,
				   int interrupt)
{
	if (interrupt < 0 || interrupt >= interrupt_data->num_interrupts)
		return -EINVAL;

	interrupt_data->eventfd_ctxs[interrupt] = NULL;
	return 0;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int interrupt = 100;
        
          int _len_interrupt_data0 = 1;
          struct gasket_interrupt_data * interrupt_data = (struct gasket_interrupt_data *) malloc(_len_interrupt_data0*sizeof(struct gasket_interrupt_data));
          for(int _i0 = 0; _i0 < _len_interrupt_data0; _i0++) {
              interrupt_data[_i0].num_interrupts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_interrupt_data__i0__eventfd_ctxs0 = 1;
          interrupt_data[_i0].eventfd_ctxs = (int **) malloc(_len_interrupt_data__i0__eventfd_ctxs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_interrupt_data__i0__eventfd_ctxs0; _j0++) {
            int _len_interrupt_data__i0__eventfd_ctxs1 = 1;
            interrupt_data[_i0].eventfd_ctxs[_j0] = (int *) malloc(_len_interrupt_data__i0__eventfd_ctxs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_interrupt_data__i0__eventfd_ctxs1; _j1++) {
              interrupt_data[_i0].eventfd_ctxs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          }
        
          int benchRet = gasket_interrupt_clear_eventfd(interrupt_data,interrupt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interrupt_data0; _aux++) {
          free(*(interrupt_data[_aux].eventfd_ctxs));
        free(interrupt_data[_aux].eventfd_ctxs);
          }
          free(interrupt_data);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int interrupt = 255;
        
          int _len_interrupt_data0 = 65025;
          struct gasket_interrupt_data * interrupt_data = (struct gasket_interrupt_data *) malloc(_len_interrupt_data0*sizeof(struct gasket_interrupt_data));
          for(int _i0 = 0; _i0 < _len_interrupt_data0; _i0++) {
              interrupt_data[_i0].num_interrupts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_interrupt_data__i0__eventfd_ctxs0 = 1;
          interrupt_data[_i0].eventfd_ctxs = (int **) malloc(_len_interrupt_data__i0__eventfd_ctxs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_interrupt_data__i0__eventfd_ctxs0; _j0++) {
            int _len_interrupt_data__i0__eventfd_ctxs1 = 1;
            interrupt_data[_i0].eventfd_ctxs[_j0] = (int *) malloc(_len_interrupt_data__i0__eventfd_ctxs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_interrupt_data__i0__eventfd_ctxs1; _j1++) {
              interrupt_data[_i0].eventfd_ctxs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          }
        
          int benchRet = gasket_interrupt_clear_eventfd(interrupt_data,interrupt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interrupt_data0; _aux++) {
          free(*(interrupt_data[_aux].eventfd_ctxs));
        free(interrupt_data[_aux].eventfd_ctxs);
          }
          free(interrupt_data);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int interrupt = 10;
        
          int _len_interrupt_data0 = 100;
          struct gasket_interrupt_data * interrupt_data = (struct gasket_interrupt_data *) malloc(_len_interrupt_data0*sizeof(struct gasket_interrupt_data));
          for(int _i0 = 0; _i0 < _len_interrupt_data0; _i0++) {
              interrupt_data[_i0].num_interrupts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_interrupt_data__i0__eventfd_ctxs0 = 1;
          interrupt_data[_i0].eventfd_ctxs = (int **) malloc(_len_interrupt_data__i0__eventfd_ctxs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_interrupt_data__i0__eventfd_ctxs0; _j0++) {
            int _len_interrupt_data__i0__eventfd_ctxs1 = 1;
            interrupt_data[_i0].eventfd_ctxs[_j0] = (int *) malloc(_len_interrupt_data__i0__eventfd_ctxs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_interrupt_data__i0__eventfd_ctxs1; _j1++) {
              interrupt_data[_i0].eventfd_ctxs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          }
        
          int benchRet = gasket_interrupt_clear_eventfd(interrupt_data,interrupt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interrupt_data0; _aux++) {
          free(*(interrupt_data[_aux].eventfd_ctxs));
        free(interrupt_data[_aux].eventfd_ctxs);
          }
          free(interrupt_data);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int interrupt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_interrupt_data0 = 1;
          struct gasket_interrupt_data * interrupt_data = (struct gasket_interrupt_data *) malloc(_len_interrupt_data0*sizeof(struct gasket_interrupt_data));
          for(int _i0 = 0; _i0 < _len_interrupt_data0; _i0++) {
              interrupt_data[_i0].num_interrupts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_interrupt_data__i0__eventfd_ctxs0 = 1;
          interrupt_data[_i0].eventfd_ctxs = (int **) malloc(_len_interrupt_data__i0__eventfd_ctxs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_interrupt_data__i0__eventfd_ctxs0; _j0++) {
            int _len_interrupt_data__i0__eventfd_ctxs1 = 1;
            interrupt_data[_i0].eventfd_ctxs[_j0] = (int *) malloc(_len_interrupt_data__i0__eventfd_ctxs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_interrupt_data__i0__eventfd_ctxs1; _j1++) {
              interrupt_data[_i0].eventfd_ctxs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          }
        
          int benchRet = gasket_interrupt_clear_eventfd(interrupt_data,interrupt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_interrupt_data0; _aux++) {
          free(*(interrupt_data[_aux].eventfd_ctxs));
        free(interrupt_data[_aux].eventfd_ctxs);
          }
          free(interrupt_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
