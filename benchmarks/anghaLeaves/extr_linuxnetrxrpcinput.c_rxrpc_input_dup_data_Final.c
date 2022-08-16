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
typedef  scalar_t__ u8 ;
struct rxrpc_call {int /*<<< orphan*/  nr_jumbo_bad; } ;
typedef  int /*<<< orphan*/  rxrpc_seq_t ;

/* Variables and functions */

__attribute__((used)) static void rxrpc_input_dup_data(struct rxrpc_call *call, rxrpc_seq_t seq,
				 u8 annotation, bool *_jumbo_bad)
{
	/* Discard normal packets that are duplicates. */
	if (annotation == 0)
		return;

	/* Skip jumbo subpackets that are duplicates.  When we've had three or
	 * more partially duplicate jumbo packets, we refuse to take any more
	 * jumbos for this call.
	 */
	if (!*_jumbo_bad) {
		call->nr_jumbo_bad++;
		*_jumbo_bad = true;
	}
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
          int seq = 100;
          long annotation = 100;
          int _len_call0 = 1;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].nr_jumbo_bad = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__jumbo_bad0 = 1;
          int * _jumbo_bad = (int *) malloc(_len__jumbo_bad0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__jumbo_bad0; _i0++) {
            _jumbo_bad[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rxrpc_input_dup_data(call,seq,annotation,_jumbo_bad);
          free(call);
          free(_jumbo_bad);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
