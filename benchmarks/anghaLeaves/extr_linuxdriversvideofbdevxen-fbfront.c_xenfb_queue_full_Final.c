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
typedef  scalar_t__ u32 ;
struct xenfb_info {TYPE_1__* page; } ;
struct TYPE_2__ {scalar_t__ out_prod; scalar_t__ out_cons; } ;

/* Variables and functions */
 scalar_t__ XENFB_OUT_RING_LEN ; 

__attribute__((used)) static int xenfb_queue_full(struct xenfb_info *info)
{
	u32 cons, prod;

	prod = info->page->out_prod;
	cons = info->page->out_cons;
	return prod - cons == XENFB_OUT_RING_LEN;
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
          int _len_info0 = 1;
          struct xenfb_info * info = (struct xenfb_info *) malloc(_len_info0*sizeof(struct xenfb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__page0 = 1;
          info[_i0].page = (struct TYPE_2__ *) malloc(_len_info__i0__page0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__page0; _j0++) {
            info[_i0].page->out_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].page->out_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xenfb_queue_full(info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].page);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
