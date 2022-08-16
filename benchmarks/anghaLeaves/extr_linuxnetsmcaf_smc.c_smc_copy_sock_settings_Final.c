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
struct sock {unsigned long sk_flags; int /*<<< orphan*/  sk_err; int /*<<< orphan*/  sk_bound_dev_if; int /*<<< orphan*/  sk_rcvlowat; int /*<<< orphan*/  sk_priority; int /*<<< orphan*/  sk_mark; int /*<<< orphan*/  sk_rcvtimeo; int /*<<< orphan*/  sk_sndtimeo; int /*<<< orphan*/  sk_rcvbuf; int /*<<< orphan*/  sk_sndbuf; int /*<<< orphan*/  sk_type; } ;

/* Variables and functions */

__attribute__((used)) static void smc_copy_sock_settings(struct sock *nsk, struct sock *osk,
				   unsigned long mask)
{
	/* options we don't get control via setsockopt for */
	nsk->sk_type = osk->sk_type;
	nsk->sk_sndbuf = osk->sk_sndbuf;
	nsk->sk_rcvbuf = osk->sk_rcvbuf;
	nsk->sk_sndtimeo = osk->sk_sndtimeo;
	nsk->sk_rcvtimeo = osk->sk_rcvtimeo;
	nsk->sk_mark = osk->sk_mark;
	nsk->sk_priority = osk->sk_priority;
	nsk->sk_rcvlowat = osk->sk_rcvlowat;
	nsk->sk_bound_dev_if = osk->sk_bound_dev_if;
	nsk->sk_err = osk->sk_err;

	nsk->sk_flags &= ~mask;
	nsk->sk_flags |= osk->sk_flags & mask;
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
          unsigned long mask = 100;
          int _len_nsk0 = 1;
          struct sock * nsk = (struct sock *) malloc(_len_nsk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_nsk0; _i0++) {
            nsk[_i0].sk_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_err = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_bound_dev_if = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_rcvlowat = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_priority = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_rcvtimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_sndtimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_rcvbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_sndbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        nsk[_i0].sk_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_osk0 = 1;
          struct sock * osk = (struct sock *) malloc(_len_osk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_osk0; _i0++) {
            osk[_i0].sk_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_err = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_bound_dev_if = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_rcvlowat = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_priority = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_mark = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_rcvtimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_sndtimeo = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_rcvbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_sndbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        osk[_i0].sk_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smc_copy_sock_settings(nsk,osk,mask);
          free(nsk);
          free(osk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
