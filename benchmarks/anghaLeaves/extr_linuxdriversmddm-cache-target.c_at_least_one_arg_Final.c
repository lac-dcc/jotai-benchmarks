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
struct dm_arg_set {int /*<<< orphan*/  argc; } ;

/* Variables and functions */

__attribute__((used)) static bool at_least_one_arg(struct dm_arg_set *as, char **error)
{
	if (!as->argc) {
		*error = "Insufficient args";
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
          int _len_as0 = 1;
          struct dm_arg_set * as = (struct dm_arg_set *) malloc(_len_as0*sizeof(struct dm_arg_set));
          for(int _i0 = 0; _i0 < _len_as0; _i0++) {
            as[_i0].argc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_error0 = 1;
          char ** error = (char **) malloc(_len_error0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            int _len_error1 = 1;
            error[_i0] = (char *) malloc(_len_error1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_error1; _i1++) {
              error[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = at_least_one_arg(as,error);
          printf("%d\n", benchRet); 
          free(as);
          for(int i1 = 0; i1 < _len_error0; i1++) {
            int _len_error1 = 1;
              free(error[i1]);
          }
          free(error);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
