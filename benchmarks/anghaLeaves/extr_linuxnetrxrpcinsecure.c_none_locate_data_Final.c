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
struct sk_buff {int dummy; } ;
struct rxrpc_call {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void none_locate_data(struct rxrpc_call *call, struct sk_buff *skb,
			     unsigned int *_offset, unsigned int *_len)
{
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
          int _len_call0 = 1;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__offset0 = 1;
          unsigned int * _offset = (unsigned int *) malloc(_len__offset0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__offset0; _i0++) {
            _offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__len0 = 1;
          unsigned int * _len = (unsigned int *) malloc(_len__len0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len__len0; _i0++) {
            _len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          none_locate_data(call,skb,_offset,_len);
          free(call);
          free(skb);
          free(_offset);
          free(_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
