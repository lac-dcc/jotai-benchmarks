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
typedef  scalar_t__ u64 ;
struct vas_window {int winid; TYPE_1__* vinst; } ;
struct TYPE_2__ {scalar_t__ hvwc_bar_start; } ;

/* Variables and functions */
 int VAS_HVWC_SIZE ; 

__attribute__((used)) static inline void get_hvwc_mmio_bar(struct vas_window *window,
			u64 *start, int *len)
{
	u64 pbaddr;

	pbaddr = window->vinst->hvwc_bar_start;
	*start = pbaddr + window->winid * VAS_HVWC_SIZE;
	*len = VAS_HVWC_SIZE;
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
          int _len_window0 = 1;
          struct vas_window * window = (struct vas_window *) malloc(_len_window0*sizeof(struct vas_window));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].winid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_window__i0__vinst0 = 1;
          window[_i0].vinst = (struct TYPE_2__ *) malloc(_len_window__i0__vinst0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_window__i0__vinst0; _j0++) {
            window[_i0].vinst->hvwc_bar_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_start0 = 1;
          long * start = (long *) malloc(_len_start0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_hvwc_mmio_bar(window,start,len);
          for(int _aux = 0; _aux < _len_window0; _aux++) {
          free(window[_aux].vinst);
          }
          free(window);
          free(start);
          free(len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
