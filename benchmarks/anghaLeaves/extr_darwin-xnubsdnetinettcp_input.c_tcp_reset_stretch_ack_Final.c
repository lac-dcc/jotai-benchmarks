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
struct tcpcb {int t_flags; scalar_t__ rcv_waitforss; int /*<<< orphan*/  t_flagsext; scalar_t__ rcv_unackwin; scalar_t__ rcv_by_unackwin; } ;

/* Variables and functions */
 int /*<<< orphan*/  TF_RCVUNACK_WAITSS ; 
 int TF_STREAMING_ON ; 
 int TF_STRETCHACK ; 
 scalar_t__ tcp_now ; 
 scalar_t__ tcp_rcvunackwin ; 

void
tcp_reset_stretch_ack(struct tcpcb *tp)
{
	tp->t_flags &= ~(TF_STRETCHACK|TF_STREAMING_ON);
	tp->rcv_by_unackwin = 0;
	tp->rcv_unackwin = tcp_now + tcp_rcvunackwin;

	/*
	 * When there is packet loss or packet re-ordering or CWR due to
	 * ECN, the sender's congestion window is reduced. In these states,
	 * generate an ack for every other packet for some time to allow
	 * the sender's congestion window to grow.
	 */
	tp->t_flagsext |= TF_RCVUNACK_WAITSS;
	tp->rcv_waitforss = 0;
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].rcv_waitforss = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].rcv_unackwin = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].rcv_by_unackwin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_reset_stretch_ack(tp);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
