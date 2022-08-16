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
struct dm_target {int num_discard_bios; } ;

/* Variables and functions */

__attribute__((used)) static int io_err_ctr(struct dm_target *tt, unsigned int argc, char **args)
{
	/*
	 * Return error for discards instead of -EOPNOTSUPP
	 */
	tt->num_discard_bios = 1;

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
          unsigned int argc = 100;
          int _len_tt0 = 1;
          struct dm_target * tt = (struct dm_target *) malloc(_len_tt0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_tt0; _i0++) {
            tt[_i0].num_discard_bios = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_args0 = 1;
          char ** args = (char **) malloc(_len_args0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            int _len_args1 = 1;
            args[_i0] = (char *) malloc(_len_args1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_args1; _i1++) {
              args[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = io_err_ctr(tt,argc,args);
          printf("%d\n", benchRet); 
          free(tt);
          for(int i1 = 0; i1 < _len_args0; i1++) {
            int _len_args1 = 1;
              free(args[i1]);
          }
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
