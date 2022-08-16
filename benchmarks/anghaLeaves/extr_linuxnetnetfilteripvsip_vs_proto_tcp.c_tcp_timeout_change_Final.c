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
       1            big-arr-10x\n\
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
struct ip_vs_proto_data {int /*<<< orphan*/  tcp_state_table; } ;

/* Variables and functions */
 int /*<<< orphan*/  tcp_states ; 
 int /*<<< orphan*/  tcp_states_dos ; 

__attribute__((used)) static void tcp_timeout_change(struct ip_vs_proto_data *pd, int flags)
{
	int on = (flags & 1);		/* secure_tcp */

	/*
	** FIXME: change secure_tcp to independent sysctl var
	** or make it per-service or per-app because it is valid
	** for most if not for all of the applications. Something
	** like "capabilities" (flags) for each object.
	*/
	pd->tcp_state_table = (on ? tcp_states_dos : tcp_states);
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
          int flags = 100;
          int _len_pd0 = 1;
          struct ip_vs_proto_data * pd = (struct ip_vs_proto_data *) malloc(_len_pd0*sizeof(struct ip_vs_proto_data));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].tcp_state_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_timeout_change(pd,flags);
          free(pd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flags = 10;
          int _len_pd0 = 100;
          struct ip_vs_proto_data * pd = (struct ip_vs_proto_data *) malloc(_len_pd0*sizeof(struct ip_vs_proto_data));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].tcp_state_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_timeout_change(pd,flags);
          free(pd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
