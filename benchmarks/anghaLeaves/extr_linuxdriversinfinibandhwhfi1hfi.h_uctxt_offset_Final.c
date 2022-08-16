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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hfi1_ctxtdata {unsigned long ctxt; TYPE_1__* dd; } ;
struct TYPE_2__ {unsigned long first_dyn_alloc_ctxt; } ;

/* Variables and functions */
 unsigned long HFI1_MAX_SHARED_CTXTS ; 

__attribute__((used)) static inline unsigned long uctxt_offset(struct hfi1_ctxtdata *uctxt)
{
	return (uctxt->ctxt - uctxt->dd->first_dyn_alloc_ctxt) *
		HFI1_MAX_SHARED_CTXTS;
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
          int _len_uctxt0 = 1;
          struct hfi1_ctxtdata * uctxt = (struct hfi1_ctxtdata *) malloc(_len_uctxt0*sizeof(struct hfi1_ctxtdata));
          for(int _i0 = 0; _i0 < _len_uctxt0; _i0++) {
            uctxt[_i0].ctxt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_uctxt__i0__dd0 = 1;
          uctxt[_i0].dd = (struct TYPE_2__ *) malloc(_len_uctxt__i0__dd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_uctxt__i0__dd0; _j0++) {
            uctxt[_i0].dd->first_dyn_alloc_ctxt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = uctxt_offset(uctxt);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_uctxt0; _aux++) {
          free(uctxt[_aux].dd);
          }
          free(uctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
