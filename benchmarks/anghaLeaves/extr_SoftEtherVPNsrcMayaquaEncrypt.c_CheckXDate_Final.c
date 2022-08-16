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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ notBefore; scalar_t__ notAfter; } ;
typedef  TYPE_1__ X ;
typedef  scalar_t__ UINT64 ;

/* Variables and functions */

bool CheckXDate(X *x, UINT64 current_system_time)
{
	// Validate arguments
	if (x == NULL)
	{
		return false;
	}

	if (x->notBefore >= current_system_time || x->notAfter <= current_system_time)
	{
		return false;
	}
	return true;
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
          long current_system_time = 100;
          int _len_x0 = 1;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].notBefore = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].notAfter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CheckXDate(x,current_system_time);
          printf("%d\n", benchRet); 
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
