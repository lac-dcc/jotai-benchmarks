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

__attribute__((used)) static inline void prepare_app_arguments(int *argc_ptr, char ***argv_ptr)
{
    /* nothing to do */
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
          int _len_argc_ptr0 = 1;
          int * argc_ptr = (int *) malloc(_len_argc_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_argc_ptr0; _i0++) {
            argc_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_argv_ptr0 = 1;
          char *** argv_ptr = (char ***) malloc(_len_argv_ptr0*sizeof(char **));
          for(int _i0 = 0; _i0 < _len_argv_ptr0; _i0++) {
            int _len_argv_ptr1 = 1;
            argv_ptr[_i0] = (char **) malloc(_len_argv_ptr1*sizeof(char *));
            for(int _i1 = 0; _i1 < _len_argv_ptr1; _i1++) {
              int _len_argv_ptr2 = 1;
              argv_ptr[_i0][_i1] = (char *) malloc(_len_argv_ptr2*sizeof(char));
              for(int _i2 = 0; _i2 < _len_argv_ptr2; _i2++) {
                argv_ptr[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          prepare_app_arguments(argc_ptr,argv_ptr);
          free(argc_ptr);
          for(int i1 = 0; i1 < _len_argv_ptr0; i1++) {
            int _len_argv_ptr1 = 1;
              for(int i2 = 0; i2 < _len_argv_ptr1; i2++) {
            int _len_argv_ptr2 = 1;
              free(argv_ptr[i1][i2]);
          }
          free(argv_ptr[i1]);
          }
          free(argv_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
