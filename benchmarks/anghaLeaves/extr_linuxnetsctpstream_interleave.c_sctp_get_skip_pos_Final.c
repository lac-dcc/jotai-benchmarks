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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct sctp_ifwdtsn_skip {scalar_t__ stream; scalar_t__ flags; } ;
typedef  scalar_t__ __u8 ;
typedef  scalar_t__ __be16 ;

/* Variables and functions */

__attribute__((used)) static inline int sctp_get_skip_pos(struct sctp_ifwdtsn_skip *skiplist,
				    int nskips, __be16 stream, __u8 flags)
{
	int i;

	for (i = 0; i < nskips; i++)
		if (skiplist[i].stream == stream &&
		    skiplist[i].flags == flags)
			return i;

	return i;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int nskips = 255;
        
          long stream = 255;
        
          long flags = 255;
        
          int _len_skiplist0 = 65025;
          struct sctp_ifwdtsn_skip * skiplist = (struct sctp_ifwdtsn_skip *) malloc(_len_skiplist0*sizeof(struct sctp_ifwdtsn_skip));
          for(int _i0 = 0; _i0 < _len_skiplist0; _i0++) {
              skiplist[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          skiplist[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sctp_get_skip_pos(skiplist,nskips,stream,flags);
          printf("%d\n", benchRet); 
          free(skiplist);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int nskips = 10;
        
          long stream = 10;
        
          long flags = 10;
        
          int _len_skiplist0 = 100;
          struct sctp_ifwdtsn_skip * skiplist = (struct sctp_ifwdtsn_skip *) malloc(_len_skiplist0*sizeof(struct sctp_ifwdtsn_skip));
          for(int _i0 = 0; _i0 < _len_skiplist0; _i0++) {
              skiplist[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          skiplist[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sctp_get_skip_pos(skiplist,nskips,stream,flags);
          printf("%d\n", benchRet); 
          free(skiplist);
        
        break;
    }
    // empty
    case 2:
    {
          int nskips = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long stream = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_skiplist0 = 1;
          struct sctp_ifwdtsn_skip * skiplist = (struct sctp_ifwdtsn_skip *) malloc(_len_skiplist0*sizeof(struct sctp_ifwdtsn_skip));
          for(int _i0 = 0; _i0 < _len_skiplist0; _i0++) {
              skiplist[_i0].stream = ((-2 * (next_i()%2)) + 1) * next_i();
          skiplist[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sctp_get_skip_pos(skiplist,nskips,stream,flags);
          printf("%d\n", benchRet); 
          free(skiplist);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
