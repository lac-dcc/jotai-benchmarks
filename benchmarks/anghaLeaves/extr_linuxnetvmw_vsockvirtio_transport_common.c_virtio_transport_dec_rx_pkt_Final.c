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
struct virtio_vsock_sock {int /*<<< orphan*/  fwd_cnt; int /*<<< orphan*/  rx_bytes; } ;
struct virtio_vsock_pkt {scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static void virtio_transport_dec_rx_pkt(struct virtio_vsock_sock *vvs,
					struct virtio_vsock_pkt *pkt)
{
	vvs->rx_bytes -= pkt->len;
	vvs->fwd_cnt += pkt->len;
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
          int _len_vvs0 = 1;
          struct virtio_vsock_sock * vvs = (struct virtio_vsock_sock *) malloc(_len_vvs0*sizeof(struct virtio_vsock_sock));
          for(int _i0 = 0; _i0 < _len_vvs0; _i0++) {
            vvs[_i0].fwd_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        vvs[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct virtio_vsock_pkt * pkt = (struct virtio_vsock_pkt *) malloc(_len_pkt0*sizeof(struct virtio_vsock_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          virtio_transport_dec_rx_pkt(vvs,pkt);
          free(vvs);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
