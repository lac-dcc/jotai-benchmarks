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
struct ib_mad_mgmt_class_table {scalar_t__* method_table; } ;

/* Variables and functions */
 int MAX_MGMT_CLASS ; 

__attribute__((used)) static int check_class_table(struct ib_mad_mgmt_class_table *class)
{
	int i;

	for (i = 0; i < MAX_MGMT_CLASS; i++)
		if (class->method_table[i])
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
          int _len_class0 = 1;
          struct ib_mad_mgmt_class_table * class = (struct ib_mad_mgmt_class_table *) malloc(_len_class0*sizeof(struct ib_mad_mgmt_class_table));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__method_table0 = 1;
          class[_i0].method_table = (long *) malloc(_len_class__i0__method_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_class__i0__method_table0; _j0++) {
            class[_i0].method_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_class_table(class);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class0; _aux++) {
          free(class[_aux].method_table);
          }
          free(class);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_class0 = 65025;
          struct ib_mad_mgmt_class_table * class = (struct ib_mad_mgmt_class_table *) malloc(_len_class0*sizeof(struct ib_mad_mgmt_class_table));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__method_table0 = 1;
          class[_i0].method_table = (long *) malloc(_len_class__i0__method_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_class__i0__method_table0; _j0++) {
            class[_i0].method_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_class_table(class);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class0; _aux++) {
          free(class[_aux].method_table);
          }
          free(class);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_class0 = 100;
          struct ib_mad_mgmt_class_table * class = (struct ib_mad_mgmt_class_table *) malloc(_len_class0*sizeof(struct ib_mad_mgmt_class_table));
          for(int _i0 = 0; _i0 < _len_class0; _i0++) {
              int _len_class__i0__method_table0 = 1;
          class[_i0].method_table = (long *) malloc(_len_class__i0__method_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_class__i0__method_table0; _j0++) {
            class[_i0].method_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_class_table(class);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_class0; _aux++) {
          free(class[_aux].method_table);
          }
          free(class);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
