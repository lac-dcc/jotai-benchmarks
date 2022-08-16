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
struct vmci_transport_send_notify_data {int dummy; } ;
struct sock {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int
vmci_transport_notify_pkt_send_init(
			struct sock *sk,
			struct vmci_transport_send_notify_data *data)
{
#ifdef VSOCK_OPTIMIZATION_WAITING_NOTIFY
	data->consume_head = 0;
	data->produce_tail = 0;
#endif

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
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct vmci_transport_send_notify_data * data = (struct vmci_transport_send_notify_data *) malloc(_len_data0*sizeof(struct vmci_transport_send_notify_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vmci_transport_notify_pkt_send_init(sk,data);
          printf("%d\n", benchRet); 
          free(sk);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
