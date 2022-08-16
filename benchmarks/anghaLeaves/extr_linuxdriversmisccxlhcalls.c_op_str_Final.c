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

/* Variables and functions */

__attribute__((used)) static char *op_str(unsigned int op, char *name_array[], int array_len)
{
	if (op >= array_len)
		return "UNKNOWN_OP";
	return name_array[op];
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
          unsigned int op = 100;
          int array_len = 100;
          int _len_name_array0 = 1;
          char ** name_array = (char **) malloc(_len_name_array0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_name_array0; _i0++) {
            int _len_name_array1 = 1;
            name_array[_i0] = (char *) malloc(_len_name_array1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_name_array1; _i1++) {
              name_array[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          char * benchRet = op_str(op,name_array,array_len);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_name_array0; i1++) {
            int _len_name_array1 = 1;
              free(name_array[i1]);
          }
          free(name_array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
