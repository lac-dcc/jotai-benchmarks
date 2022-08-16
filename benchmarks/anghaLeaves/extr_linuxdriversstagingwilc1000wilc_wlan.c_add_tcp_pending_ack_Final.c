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
       1            big-arr-10x\n\
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
typedef  size_t u32 ;
struct txq_entry_t {size_t tcp_pending_ack_idx; } ;
struct TYPE_2__ {size_t ack_num; size_t session_index; struct txq_entry_t* txqe; } ;

/* Variables and functions */
 size_t MAX_PENDING_ACKS ; 
 size_t pending_acks ; 
 TYPE_1__* pending_acks_info ; 
 size_t pending_base ; 

__attribute__((used)) static inline int add_tcp_pending_ack(u32 ack, u32 session_index,
				      struct txq_entry_t *txqe)
{
	u32 i = pending_base + pending_acks;

	if (i < MAX_PENDING_ACKS) {
		pending_acks_info[i].ack_num = ack;
		pending_acks_info[i].txqe = txqe;
		pending_acks_info[i].session_index = session_index;
		txqe->tcp_pending_ack_idx = i;
		pending_acks++;
	}
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
          unsigned long ack = 100;
          unsigned long session_index = 100;
          int _len_txqe0 = 1;
          struct txq_entry_t * txqe = (struct txq_entry_t *) malloc(_len_txqe0*sizeof(struct txq_entry_t));
          for(int _i0 = 0; _i0 < _len_txqe0; _i0++) {
            txqe[_i0].tcp_pending_ack_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = add_tcp_pending_ack(ack,session_index,txqe);
          printf("%d\n", benchRet); 
          free(txqe);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long ack = 10;
          unsigned long session_index = 10;
          int _len_txqe0 = 100;
          struct txq_entry_t * txqe = (struct txq_entry_t *) malloc(_len_txqe0*sizeof(struct txq_entry_t));
          for(int _i0 = 0; _i0 < _len_txqe0; _i0++) {
            txqe[_i0].tcp_pending_ack_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = add_tcp_pending_ack(ack,session_index,txqe);
          printf("%d\n", benchRet); 
          free(txqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
