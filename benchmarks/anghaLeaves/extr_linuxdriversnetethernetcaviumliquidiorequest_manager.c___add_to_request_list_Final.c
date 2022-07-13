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
       0            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct octeon_instr_queue {TYPE_1__* request_list; } ;
struct TYPE_2__ {int reqtype; void* buf; } ;

/* Variables and functions */

__attribute__((used)) static inline void
__add_to_request_list(struct octeon_instr_queue *iq,
		      int idx, void *buf, int reqtype)
{
	iq->request_list[idx].buf = buf;
	iq->request_list[idx].reqtype = reqtype;
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

    // big-arr-10x
    case 0:
    {
          int idx = 10;
          int reqtype = 10;
          int _len_iq0 = 100;
          struct octeon_instr_queue * iq = (struct octeon_instr_queue *) malloc(_len_iq0*sizeof(struct octeon_instr_queue));
          for(int _i0 = 0; _i0 < _len_iq0; _i0++) {
              int _len_iq__i0__request_list0 = 1;
          iq[_i0].request_list = (struct TYPE_2__ *) malloc(_len_iq__i0__request_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_iq__i0__request_list0; _j0++) {
            iq[_i0].request_list->reqtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * buf;
          __add_to_request_list(iq,idx,buf,reqtype);
          for(int _aux = 0; _aux < _len_iq0; _aux++) {
          free(iq[_aux].request_list);
          }
          free(iq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
