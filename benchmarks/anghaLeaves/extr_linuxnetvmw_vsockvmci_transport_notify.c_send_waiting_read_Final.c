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
typedef  int /*<<< orphan*/  u64 ;
struct sock {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool send_waiting_read(struct sock *sk, u64 room_needed)
{
#if defined(VSOCK_OPTIMIZATION_WAITING_NOTIFY)
	struct vsock_sock *vsk;
	struct vmci_transport_waiting_info waiting_info;
	u64 tail;
	u64 head;
	u64 room_left;
	bool ret;

	vsk = vsock_sk(sk);

	if (PKT_FIELD(vsk, sent_waiting_read))
		return true;

	if (PKT_FIELD(vsk, write_notify_window) <
			vmci_trans(vsk)->consume_size)
		PKT_FIELD(vsk, write_notify_window) =
		    min(PKT_FIELD(vsk, write_notify_window) + PAGE_SIZE,
			vmci_trans(vsk)->consume_size);

	vmci_qpair_get_consume_indexes(vmci_trans(vsk)->qpair, &tail, &head);
	room_left = vmci_trans(vsk)->consume_size - head;
	if (room_needed >= room_left) {
		waiting_info.offset = room_needed - room_left;
		waiting_info.generation =
		    PKT_FIELD(vsk, consume_q_generation) + 1;
	} else {
		waiting_info.offset = head + room_needed;
		waiting_info.generation = PKT_FIELD(vsk, consume_q_generation);
	}

	ret = vmci_transport_send_waiting_read(sk, &waiting_info) > 0;
	if (ret)
		PKT_FIELD(vsk, sent_waiting_read) = true;

	return ret;
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
          int room_needed = 100;
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = send_waiting_read(sk,room_needed);
          printf("%d\n", benchRet); 
          free(sk);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int room_needed = 10;
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = send_waiting_read(sk,room_needed);
          printf("%d\n", benchRet); 
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
