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
struct vmci_transport_packet {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
struct sock {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
vmci_transport_handle_waiting_write(struct sock *sk,
				    struct vmci_transport_packet *pkt,
				    bool bottom_half,
				    struct sockaddr_vm *dst,
				    struct sockaddr_vm *src)
{
#if defined(VSOCK_OPTIMIZATION_WAITING_NOTIFY)
	struct vsock_sock *vsk;

	vsk = vsock_sk(sk);

	PKT_FIELD(vsk, peer_waiting_write) = true;
	memcpy(&PKT_FIELD(vsk, peer_waiting_write_info), &pkt->u.wait,
	       sizeof(PKT_FIELD(vsk, peer_waiting_write_info)));

	if (vmci_transport_notify_waiting_write(vsk)) {
		bool sent;

		if (bottom_half)
			sent = vmci_transport_send_read_bh(dst, src) > 0;
		else
			sent = vmci_transport_send_read(sk) > 0;

		if (sent)
			PKT_FIELD(vsk, peer_waiting_write) = false;
	}
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
          int bottom_half = 100;
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct vmci_transport_packet * pkt = (struct vmci_transport_packet *) malloc(_len_pkt0*sizeof(struct vmci_transport_packet));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          struct sockaddr_vm * dst = (struct sockaddr_vm *) malloc(_len_dst0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct sockaddr_vm * src = (struct sockaddr_vm *) malloc(_len_src0*sizeof(struct sockaddr_vm));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vmci_transport_handle_waiting_write(sk,pkt,bottom_half,dst,src);
          free(sk);
          free(pkt);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
