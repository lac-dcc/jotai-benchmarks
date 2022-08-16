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
struct sctp_transport {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int sctp_cacc_skip_3_1_d(struct sctp_transport *primary,
				       struct sctp_transport *transport,
				       int count_of_newacks)
{
	if (count_of_newacks >= 2 && transport != primary)
		return 1;
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
          int count_of_newacks = 100;
          int _len_primary0 = 1;
          struct sctp_transport * primary = (struct sctp_transport *) malloc(_len_primary0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_primary0; _i0++) {
            primary[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_transport0 = 1;
          struct sctp_transport * transport = (struct sctp_transport *) malloc(_len_transport0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_transport0; _i0++) {
            transport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sctp_cacc_skip_3_1_d(primary,transport,count_of_newacks);
          printf("%d\n", benchRet); 
          free(primary);
          free(transport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
