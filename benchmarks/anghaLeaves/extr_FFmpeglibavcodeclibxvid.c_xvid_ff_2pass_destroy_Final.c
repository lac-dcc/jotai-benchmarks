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
typedef  int /*<<< orphan*/  xvid_plg_destroy_t ;
struct xvid_context {scalar_t__* twopassbuffer; } ;

/* Variables and functions */

__attribute__((used)) static int xvid_ff_2pass_destroy(struct xvid_context *ref,
                                 xvid_plg_destroy_t *param)
{
    /* Currently cannot think of anything to do on destruction */
    /* Still, the framework should be here for reference/use */
    if (ref->twopassbuffer)
        ref->twopassbuffer[0] = 0;
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
          int _len_ref0 = 1;
          struct xvid_context * ref = (struct xvid_context *) malloc(_len_ref0*sizeof(struct xvid_context));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
              int _len_ref__i0__twopassbuffer0 = 1;
          ref[_i0].twopassbuffer = (long *) malloc(_len_ref__i0__twopassbuffer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ref__i0__twopassbuffer0; _j0++) {
            ref[_i0].twopassbuffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_param0 = 1;
          int * param = (int *) malloc(_len_param0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xvid_ff_2pass_destroy(ref,param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ref0; _aux++) {
          free(ref[_aux].twopassbuffer);
          }
          free(ref);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
