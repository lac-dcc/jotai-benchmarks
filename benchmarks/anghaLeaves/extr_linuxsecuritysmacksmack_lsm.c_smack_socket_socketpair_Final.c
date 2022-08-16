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
struct socket_smack {int /*<<< orphan*/  smk_out; int /*<<< orphan*/  smk_packet; } ;
struct socket {TYPE_1__* sk; } ;
struct TYPE_2__ {struct socket_smack* sk_security; } ;

/* Variables and functions */

__attribute__((used)) static int smack_socket_socketpair(struct socket *socka,
		                   struct socket *sockb)
{
	struct socket_smack *asp = socka->sk->sk_security;
	struct socket_smack *bsp = sockb->sk->sk_security;

	asp->smk_packet = bsp->smk_out;
	bsp->smk_packet = asp->smk_out;

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
          int _len_socka0 = 1;
          struct socket * socka = (struct socket *) malloc(_len_socka0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_socka0; _i0++) {
              int _len_socka__i0__sk0 = 1;
          socka[_i0].sk = (struct TYPE_2__ *) malloc(_len_socka__i0__sk0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_socka__i0__sk0; _j0++) {
              int _len_socka__i0__sk_sk_security0 = 1;
          socka[_i0].sk->sk_security = (struct socket_smack *) malloc(_len_socka__i0__sk_sk_security0*sizeof(struct socket_smack));
          for(int _j0 = 0; _j0 < _len_socka__i0__sk_sk_security0; _j0++) {
            socka[_i0].sk->sk_security->smk_out = ((-2 * (next_i()%2)) + 1) * next_i();
        socka[_i0].sk->sk_security->smk_packet = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_sockb0 = 1;
          struct socket * sockb = (struct socket *) malloc(_len_sockb0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sockb0; _i0++) {
              int _len_sockb__i0__sk0 = 1;
          sockb[_i0].sk = (struct TYPE_2__ *) malloc(_len_sockb__i0__sk0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sockb__i0__sk0; _j0++) {
              int _len_sockb__i0__sk_sk_security0 = 1;
          sockb[_i0].sk->sk_security = (struct socket_smack *) malloc(_len_sockb__i0__sk_sk_security0*sizeof(struct socket_smack));
          for(int _j0 = 0; _j0 < _len_sockb__i0__sk_sk_security0; _j0++) {
            sockb[_i0].sk->sk_security->smk_out = ((-2 * (next_i()%2)) + 1) * next_i();
        sockb[_i0].sk->sk_security->smk_packet = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = smack_socket_socketpair(socka,sockb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_socka0; _aux++) {
          free(socka[_aux].sk);
          }
          free(socka);
          for(int _aux = 0; _aux < _len_sockb0; _aux++) {
          free(sockb[_aux].sk);
          }
          free(sockb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
