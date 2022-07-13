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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct tcpcb {int ecn_flags; int t_flagsext; } ;
struct socket {int so_flags; } ;

/* Variables and functions */
 int SOF_MP_SUBFLOW ; 
 int TE_SETUPSENT ; 
 int TF_FASTOPEN ; 

__attribute__((used)) static inline bool
tcp_send_ecn_flags_on_syn(struct tcpcb *tp, struct socket *so)
{
	return(!((tp->ecn_flags & TE_SETUPSENT) ||
	    (so->so_flags & SOF_MP_SUBFLOW) ||
	    (tp->t_flagsext & TF_FASTOPEN)));
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
            tp[_i0].ecn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_so0 = 1;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
            so[_i0].so_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_send_ecn_flags_on_syn(tp,so);
          printf("%d\n", benchRet); 
          free(tp);
          free(so);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tp0 = 65025;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].ecn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_so0 = 65025;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
            so[_i0].so_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_send_ecn_flags_on_syn(tp,so);
          printf("%d\n", benchRet); 
          free(tp);
          free(so);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tp0 = 100;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].ecn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flagsext = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_so0 = 100;
          struct socket * so = (struct socket *) malloc(_len_so0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_so0; _i0++) {
            so[_i0].so_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_send_ecn_flags_on_syn(tp,so);
          printf("%d\n", benchRet); 
          free(tp);
          free(so);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
