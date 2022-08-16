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

/* Type definitions */
struct ib_mad_mgmt_method_table {scalar_t__* agent; } ;

/* Variables and functions */
 int IB_MGMT_MAX_METHODS ; 

__attribute__((used)) static int check_method_table(struct ib_mad_mgmt_method_table *method)
{
	int i;

	for (i = 0; i < IB_MGMT_MAX_METHODS; i++)
		if (method->agent[i])
			return 1;
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
          int _len_method0 = 1;
          struct ib_mad_mgmt_method_table * method = (struct ib_mad_mgmt_method_table *) malloc(_len_method0*sizeof(struct ib_mad_mgmt_method_table));
          for(int _i0 = 0; _i0 < _len_method0; _i0++) {
              int _len_method__i0__agent0 = 1;
          method[_i0].agent = (long *) malloc(_len_method__i0__agent0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_method__i0__agent0; _j0++) {
            method[_i0].agent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_method_table(method);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_method0; _aux++) {
          free(method[_aux].agent);
          }
          free(method);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
