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
struct intc_window {unsigned long phys; unsigned long size; scalar_t__ virt; } ;
struct intc_desc_int {int nr_windows; struct intc_window* window; } ;

/* Variables and functions */

unsigned long intc_phys_to_virt(struct intc_desc_int *d, unsigned long address)
{
	struct intc_window *window;
	int k;

	/* scan through physical windows and convert address */
	for (k = 0; k < d->nr_windows; k++) {
		window = d->window + k;

		if (address < window->phys)
			continue;

		if (address >= (window->phys + window->size))
			continue;

		address -= window->phys;
		address += (unsigned long)window->virt;

		return address;
	}

	/* no windows defined, register must be 1:1 mapped virt:phys */
	return address;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned long address = 100;
        
          int _len_d0 = 1;
          struct intc_desc_int * d = (struct intc_desc_int *) malloc(_len_d0*sizeof(struct intc_desc_int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].nr_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__window0 = 1;
          d[_i0].window = (struct intc_window *) malloc(_len_d__i0__window0*sizeof(struct intc_window));
          for(int _j0 = 0; _j0 < _len_d__i0__window0; _j0++) {
              d[_i0].window->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->virt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = intc_phys_to_virt(d,address);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].window);
          }
          free(d);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned long address = 255;
        
          int _len_d0 = 65025;
          struct intc_desc_int * d = (struct intc_desc_int *) malloc(_len_d0*sizeof(struct intc_desc_int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].nr_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__window0 = 1;
          d[_i0].window = (struct intc_window *) malloc(_len_d__i0__window0*sizeof(struct intc_window));
          for(int _j0 = 0; _j0 < _len_d__i0__window0; _j0++) {
              d[_i0].window->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->virt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = intc_phys_to_virt(d,address);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].window);
          }
          free(d);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned long address = 10;
        
          int _len_d0 = 100;
          struct intc_desc_int * d = (struct intc_desc_int *) malloc(_len_d0*sizeof(struct intc_desc_int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].nr_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__window0 = 1;
          d[_i0].window = (struct intc_window *) malloc(_len_d__i0__window0*sizeof(struct intc_window));
          for(int _j0 = 0; _j0 < _len_d__i0__window0; _j0++) {
              d[_i0].window->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->virt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = intc_phys_to_virt(d,address);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].window);
          }
          free(d);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          unsigned long address = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_d0 = 1;
          struct intc_desc_int * d = (struct intc_desc_int *) malloc(_len_d0*sizeof(struct intc_desc_int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
              d[_i0].nr_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__window0 = 1;
          d[_i0].window = (struct intc_window *) malloc(_len_d__i0__window0*sizeof(struct intc_window));
          for(int _j0 = 0; _j0 < _len_d__i0__window0; _j0++) {
              d[_i0].window->phys = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->size = ((-2 * (next_i()%2)) + 1) * next_i();
          d[_i0].window->virt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = intc_phys_to_virt(d,address);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(d[_aux].window);
          }
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
