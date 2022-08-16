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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct socket {struct sock* sk; } ;
struct sock {int /*<<< orphan*/  sk_error_report; int /*<<< orphan*/  sk_write_space; int /*<<< orphan*/  sk_state_change; int /*<<< orphan*/  sk_data_ready; } ;
struct TYPE_2__ {int /*<<< orphan*/  sk_error_report; int /*<<< orphan*/  sk_write_space; int /*<<< orphan*/  sk_state_change; int /*<<< orphan*/  sk_data_ready; } ;

/* Variables and functions */
 TYPE_1__ listen_sock ; 

__attribute__((used)) static void save_listen_callbacks(struct socket *sock)
{
	struct sock *sk = sock->sk;

	listen_sock.sk_data_ready = sk->sk_data_ready;
	listen_sock.sk_state_change = sk->sk_state_change;
	listen_sock.sk_write_space = sk->sk_write_space;
	listen_sock.sk_error_report = sk->sk_error_report;
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
          int _len_sock0 = 1;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              int _len_sock__i0__sk0 = 1;
          sock[_i0].sk = (struct sock *) malloc(_len_sock__i0__sk0*sizeof(struct sock));
          for(int _j0 = 0; _j0 < _len_sock__i0__sk0; _j0++) {
            sock[_i0].sk->sk_error_report = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_state_change = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].sk->sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          save_listen_callbacks(sock);
          for(int _aux = 0; _aux < _len_sock0; _aux++) {
          free(sock[_aux].sk);
          }
          free(sock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
