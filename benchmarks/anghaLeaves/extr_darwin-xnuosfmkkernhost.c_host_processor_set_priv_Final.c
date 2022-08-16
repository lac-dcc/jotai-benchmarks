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
typedef  scalar_t__ processor_set_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
typedef  scalar_t__ host_priv_t ;

/* Variables and functions */
 scalar_t__ HOST_PRIV_NULL ; 
 int /*<<< orphan*/  KERN_INVALID_ARGUMENT ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 scalar_t__ PROCESSOR_SET_NULL ; 

kern_return_t
host_processor_set_priv(host_priv_t host_priv, processor_set_t pset_name, processor_set_t * pset)
{
	if (host_priv == HOST_PRIV_NULL || pset_name == PROCESSOR_SET_NULL) {
		*pset = PROCESSOR_SET_NULL;

		return (KERN_INVALID_ARGUMENT);
	}

	*pset = pset_name;

	return (KERN_SUCCESS);
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
          long host_priv = 100;
          long pset_name = 100;
          int _len_pset0 = 1;
          long * pset = (long *) malloc(_len_pset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pset0; _i0++) {
            pset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = host_processor_set_priv(host_priv,pset_name,pset);
          printf("%d\n", benchRet); 
          free(pset);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long host_priv = 10;
          long pset_name = 10;
          int _len_pset0 = 100;
          long * pset = (long *) malloc(_len_pset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pset0; _i0++) {
            pset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = host_processor_set_priv(host_priv,pset_name,pset);
          printf("%d\n", benchRet); 
          free(pset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
