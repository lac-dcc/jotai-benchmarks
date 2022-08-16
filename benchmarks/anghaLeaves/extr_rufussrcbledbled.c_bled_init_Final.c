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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  progress_t ;
typedef  int /*<<< orphan*/  printf_t ;

/* Variables and functions */
 unsigned long* bled_cancel_request ; 
 int bled_initialized ; 
 int /*<<< orphan*/  bled_printf ; 
 int /*<<< orphan*/  bled_progress ; 

int bled_init(printf_t print_function, progress_t progress_function, unsigned long* cancel_request)
{
	if (bled_initialized)
		return -1;
	bled_initialized = true;
	bled_printf = print_function;
	bled_progress = progress_function;
	bled_cancel_request = cancel_request;
	return 0;
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
          int print_function = 100;
          int progress_function = 100;
          int _len_cancel_request0 = 1;
          unsigned long * cancel_request = (unsigned long *) malloc(_len_cancel_request0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cancel_request0; _i0++) {
            cancel_request[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bled_init(print_function,progress_function,cancel_request);
          printf("%d\n", benchRet); 
          free(cancel_request);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int print_function = 10;
          int progress_function = 10;
          int _len_cancel_request0 = 100;
          unsigned long * cancel_request = (unsigned long *) malloc(_len_cancel_request0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cancel_request0; _i0++) {
            cancel_request[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bled_init(print_function,progress_function,cancel_request);
          printf("%d\n", benchRet); 
          free(cancel_request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
