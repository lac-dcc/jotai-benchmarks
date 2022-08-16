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
struct sock {scalar_t__ sk_data_ready; int /*<<< orphan*/  sk_write_space; } ;
struct smap_psock {scalar_t__ save_data_ready; int strp_enabled; int /*<<< orphan*/  save_write_space; } ;

/* Variables and functions */
 scalar_t__ smap_data_ready ; 
 int /*<<< orphan*/  smap_write_space ; 

__attribute__((used)) static void smap_start_sock(struct smap_psock *psock, struct sock *sk)
{
	if (sk->sk_data_ready == smap_data_ready)
		return;
	psock->save_data_ready = sk->sk_data_ready;
	psock->save_write_space = sk->sk_write_space;
	sk->sk_data_ready = smap_data_ready;
	sk->sk_write_space = smap_write_space;
	psock->strp_enabled = true;
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
          int _len_psock0 = 1;
          struct smap_psock * psock = (struct smap_psock *) malloc(_len_psock0*sizeof(struct smap_psock));
          for(int _i0 = 0; _i0 < _len_psock0; _i0++) {
            psock[_i0].save_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        psock[_i0].strp_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        psock[_i0].save_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_data_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        sk[_i0].sk_write_space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smap_start_sock(psock,sk);
          free(psock);
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
