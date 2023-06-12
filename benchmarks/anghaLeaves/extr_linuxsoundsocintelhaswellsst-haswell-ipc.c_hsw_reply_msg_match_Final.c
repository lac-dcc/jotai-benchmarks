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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u64 ;

/* Variables and functions */
 int IPC_GLB_REPLY_MASK ; 
 int IPC_STATUS_MASK ; 

__attribute__((used)) static u64 hsw_reply_msg_match(u64 header, u64 *mask)
{
	/* clear reply bits & status bits */
	header &= ~(IPC_STATUS_MASK | IPC_GLB_REPLY_MASK);
	*mask = (u64)-1;

	return header;
}

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
          int header = 100;
        
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = hsw_reply_msg_match(header,mask);
          printf("%d\n", benchRet); 
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int header = 255;
        
          int _len_mask0 = 65025;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = hsw_reply_msg_match(header,mask);
          printf("%d\n", benchRet); 
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int header = 10;
        
          int _len_mask0 = 100;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = hsw_reply_msg_match(header,mask);
          printf("%d\n", benchRet); 
          free(mask);
        
        break;
    }
    // empty
    case 3:
    {
          int header = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mask0 = 1;
          int * mask = (int *) malloc(_len_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = hsw_reply_msg_match(header,mask);
          printf("%d\n", benchRet); 
          free(mask);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
