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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* style; } ;
struct TYPE_5__ {int dwMask; int dwEffects; } ;
struct TYPE_6__ {TYPE_1__ fmt; } ;
typedef  TYPE_3__ ME_Run ;
typedef  int BOOL ;

/* Variables and functions */
 int CFE_LINK ; 
 int CFM_LINK ; 

__attribute__((used)) static BOOL is_link( ME_Run *run )
{
    return (run->style->fmt.dwMask & CFM_LINK) && (run->style->fmt.dwEffects & CFE_LINK);
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
          int _len_run0 = 1;
          struct TYPE_7__ * run = (struct TYPE_7__ *) malloc(_len_run0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_run0; _i0++) {
              int _len_run__i0__style0 = 1;
          run[_i0].style = (struct TYPE_6__ *) malloc(_len_run__i0__style0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_run__i0__style0; _j0++) {
            run[_i0].style->fmt.dwMask = ((-2 * (next_i()%2)) + 1) * next_i();
        run[_i0].style->fmt.dwEffects = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_link(run);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_run0; _aux++) {
          free(run[_aux].style);
          }
          free(run);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
