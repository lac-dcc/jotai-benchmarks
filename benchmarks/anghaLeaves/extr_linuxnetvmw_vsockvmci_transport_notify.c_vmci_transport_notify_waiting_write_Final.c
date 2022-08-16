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

/* Type definitions */
struct vsock_sock {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool vmci_transport_notify_waiting_write(struct vsock_sock *vsk)
{
#if defined(VSOCK_OPTIMIZATION_WAITING_NOTIFY)
	bool retval;
	u64 notify_limit;

	if (!PKT_FIELD(vsk, peer_waiting_write))
		return false;

#ifdef VSOCK_OPTIMIZATION_FLOW_CONTROL
	/* When the sender blocks, we take that as a sign that the sender is
	 * faster than the receiver. To reduce the transmit rate of the sender,
	 * we delay the sending of the read notification by decreasing the
	 * write_notify_window. The notification is delayed until the number of
	 * bytes used in the queue drops below the write_notify_window.
	 */

	if (!PKT_FIELD(vsk, peer_waiting_write_detected)) {
		PKT_FIELD(vsk, peer_waiting_write_detected) = true;
		if (PKT_FIELD(vsk, write_notify_window) < PAGE_SIZE) {
			PKT_FIELD(vsk, write_notify_window) =
			    PKT_FIELD(vsk, write_notify_min_window);
		} else {
			PKT_FIELD(vsk, write_notify_window) -= PAGE_SIZE;
			if (PKT_FIELD(vsk, write_notify_window) <
			    PKT_FIELD(vsk, write_notify_min_window))
				PKT_FIELD(vsk, write_notify_window) =
				    PKT_FIELD(vsk, write_notify_min_window);

		}
	}
	notify_limit = vmci_trans(vsk)->consume_size -
		PKT_FIELD(vsk, write_notify_window);
#else
	notify_limit = 0;
#endif

	/* For now we ignore the wait information and just see if the free
	 * space exceeds the notify limit.  Note that improving this function
	 * to be more intelligent will not require a protocol change and will
	 * retain compatibility between endpoints with mixed versions of this
	 * function.
	 *
	 * The notify_limit is used to delay notifications in the case where
	 * flow control is enabled. Below the test is expressed in terms of
	 * free space in the queue: if free_space > ConsumeSize -
	 * write_notify_window then notify An alternate way of expressing this
	 * is to rewrite the expression to use the data ready in the receive
	 * queue: if write_notify_window > bufferReady then notify as
	 * free_space == ConsumeSize - bufferReady.
	 */
	retval = vmci_qpair_consume_free_space(vmci_trans(vsk)->qpair) >
		notify_limit;
#ifdef VSOCK_OPTIMIZATION_FLOW_CONTROL
	if (retval) {
		/*
		 * Once we notify the peer, we reset the detected flag so the
		 * next wait will again cause a decrease in the window size.
		 */

		PKT_FIELD(vsk, peer_waiting_write_detected) = false;
	}
#endif
	return retval;
#else
	return true;
#endif
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
          int _len_vsk0 = 1;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
            vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmci_transport_notify_waiting_write(vsk);
          printf("%d\n", benchRet); 
          free(vsk);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vsk0 = 100;
          struct vsock_sock * vsk = (struct vsock_sock *) malloc(_len_vsk0*sizeof(struct vsock_sock));
          for(int _i0 = 0; _i0 < _len_vsk0; _i0++) {
            vsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmci_transport_notify_waiting_write(vsk);
          printf("%d\n", benchRet); 
          free(vsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
