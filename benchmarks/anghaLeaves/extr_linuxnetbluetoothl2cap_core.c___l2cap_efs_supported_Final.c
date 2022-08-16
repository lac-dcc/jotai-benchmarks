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
struct l2cap_conn {int local_fixed_chan; int feat_mask; } ;

/* Variables and functions */
 int L2CAP_FC_A2MP ; 
 int L2CAP_FEAT_EXT_FLOW ; 

__attribute__((used)) static inline bool __l2cap_efs_supported(struct l2cap_conn *conn)
{
	return ((conn->local_fixed_chan & L2CAP_FC_A2MP) &&
		(conn->feat_mask & L2CAP_FEAT_EXT_FLOW));
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
          int _len_conn0 = 1;
          struct l2cap_conn * conn = (struct l2cap_conn *) malloc(_len_conn0*sizeof(struct l2cap_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn[_i0].local_fixed_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].feat_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __l2cap_efs_supported(conn);
          printf("%d\n", benchRet); 
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
