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
typedef  int /*<<< orphan*/  protocol_family_t ;
typedef  int /*<<< orphan*/  mbuf_t ;
typedef  int /*<<< orphan*/  ifnet_t ;
typedef  int /*<<< orphan*/  errno_t ;

/* Variables and functions */

__attribute__((used)) static errno_t
bridge_proto_input(ifnet_t ifp, protocol_family_t protocol, mbuf_t packet,
	char *header)
{
#pragma unused(protocol, packet, header)
#if BRIDGE_DEBUG
	printf("%s: unexpected packet from %s\n", __func__,
	    ifp->if_xname);
#endif /* BRIDGE_DEBUG */
	return (0);
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
          int ifp = 100;
          int protocol = 100;
          int packet = 100;
          int _len_header0 = 1;
          char * header = (char *) malloc(_len_header0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bridge_proto_input(ifp,protocol,packet,header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ifp = 10;
          int protocol = 10;
          int packet = 10;
          int _len_header0 = 100;
          char * header = (char *) malloc(_len_header0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bridge_proto_input(ifp,protocol,packet,header);
          printf("%d\n", benchRet); 
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
