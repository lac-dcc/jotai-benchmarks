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
       0            big-arr\n\
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
struct console {size_t index; } ;

/* Variables and functions */
 int ENODEV ; 
 size_t MAX_NR_HVC_CONSOLES ; 
 int* vtermnos ; 

__attribute__((used)) static int hvc_console_setup(struct console *co, char *options)
{	
	if (co->index < 0 || co->index >= MAX_NR_HVC_CONSOLES)
		return -ENODEV;

	if (vtermnos[co->index] == -1)
		return -ENODEV;

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

    // big-arr
    case 0:
    {
          int _len_co0 = 1;
          struct console * co = (struct console *) malloc(_len_co0*sizeof(struct console));
          for(int _i0 = 0; _i0 < _len_co0; _i0++) {
            co->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_options0 = 65025;
          char * options = (char *) malloc(_len_options0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_options0; _i0++) {
            options[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hvc_console_setup(co,options);
          printf("%d\n", benchRet); 
          free(co);
          free(options);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
