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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u_int64_t ;
struct TYPE_4__ {int sack_episodes; int rst_drop; int rxmit_drop; } ;
struct TYPE_3__ {int sack_episodes; int rst_drop; int rxmit_drop; } ;
struct if_tcp_ecn_stat {int ecn_client_success; int ecn_server_success; int ecn_off_conn; int ecn_client_setup; int ecn_server_setup; int ecn_total_conn; TYPE_2__ ecn_off; TYPE_1__ ecn_on; } ;

/* Variables and functions */

__attribute__((used)) static void
nstat_ifnet_normalize_counter(struct if_tcp_ecn_stat *if_st)
{
	u_int64_t ecn_on_conn, ecn_off_conn;

	if (if_st == NULL)
		return;
	ecn_on_conn = if_st->ecn_client_success +
	    if_st->ecn_server_success;
	ecn_off_conn = if_st->ecn_off_conn +
	    (if_st->ecn_client_setup - if_st->ecn_client_success) +
	    (if_st->ecn_server_setup - if_st->ecn_server_success);

	/*
	 * report sack episodes, rst_drop and rxmit_drop
	 *  as a ratio per connection, shift by 10 for precision
	 */
	if (ecn_on_conn > 0) {
		if_st->ecn_on.sack_episodes =
		    (if_st->ecn_on.sack_episodes << 10) / ecn_on_conn;
		if_st->ecn_on.rst_drop =
		    (if_st->ecn_on.rst_drop << 10) * 100 / ecn_on_conn;
		if_st->ecn_on.rxmit_drop =
		    (if_st->ecn_on.rxmit_drop << 10) * 100 / ecn_on_conn;
	} else {
		/* set to zero, just in case */
		if_st->ecn_on.sack_episodes = 0;
		if_st->ecn_on.rst_drop = 0;
		if_st->ecn_on.rxmit_drop = 0;
	}

	if (ecn_off_conn > 0) {
		if_st->ecn_off.sack_episodes =
		    (if_st->ecn_off.sack_episodes << 10) / ecn_off_conn;
		if_st->ecn_off.rst_drop =
		    (if_st->ecn_off.rst_drop << 10) * 100 / ecn_off_conn;
		if_st->ecn_off.rxmit_drop =
		    (if_st->ecn_off.rxmit_drop << 10) * 100 / ecn_off_conn;
	} else {
		if_st->ecn_off.sack_episodes = 0;
		if_st->ecn_off.rst_drop = 0;
		if_st->ecn_off.rxmit_drop = 0;
	}
	if_st->ecn_total_conn = ecn_off_conn + ecn_on_conn;
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
          int _len_if_st0 = 1;
          struct if_tcp_ecn_stat * if_st = (struct if_tcp_ecn_stat *) malloc(_len_if_st0*sizeof(struct if_tcp_ecn_stat));
          for(int _i0 = 0; _i0 < _len_if_st0; _i0++) {
            if_st[_i0].ecn_client_success = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_server_success = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_off_conn = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_client_setup = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_server_setup = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_total_conn = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_off.sack_episodes = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_off.rst_drop = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_off.rxmit_drop = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_on.sack_episodes = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_on.rst_drop = ((-2 * (next_i()%2)) + 1) * next_i();
        if_st[_i0].ecn_on.rxmit_drop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nstat_ifnet_normalize_counter(if_st);
          free(if_st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
