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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ int32_t ;
typedef  TYPE_1__* bondport_ref ;
typedef  scalar_t__ __darwin_time_t ;
struct TYPE_3__ {scalar_t__ po_last_transmit_secs; scalar_t__ po_n_transmit; } ;

/* Variables and functions */
 scalar_t__ LACP_PACKET_RATE ; 

__attribute__((used)) static int
bondport_can_transmit(bondport_ref p, int32_t current_secs,
		      __darwin_time_t * next_secs)
{
    if (p->po_last_transmit_secs != current_secs) {
	p->po_last_transmit_secs = current_secs;
	p->po_n_transmit = 0;
    }
    if (p->po_n_transmit < LACP_PACKET_RATE) {
	p->po_n_transmit++;
	return (1);
    }
    if (next_secs != NULL) {
	*next_secs = current_secs + 1;
    }
    return (0);
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
          long current_secs = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].po_last_transmit_secs = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].po_n_transmit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next_secs0 = 1;
          long * next_secs = (long *) malloc(_len_next_secs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_next_secs0; _i0++) {
            next_secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bondport_can_transmit(p,current_secs,next_secs);
          printf("%d\n", benchRet); 
          free(p);
          free(next_secs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
