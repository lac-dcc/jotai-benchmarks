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
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ MAX_HOST_LISTEN_PORT ; 
 scalar_t__ VMADDR_CID_HOST ; 

__attribute__((used)) static bool hvs_stream_allow(u32 cid, u32 port)
{
	/* The host's port range [MIN_HOST_EPHEMERAL_PORT, 0xFFFFFFFF) is
	 * reserved as ephemeral ports, which are used as the host's ports
	 * when the host initiates connections.
	 *
	 * Perform this check in the guest so an immediate error is produced
	 * instead of a timeout.
	 */
	if (port > MAX_HOST_LISTEN_PORT)
		return false;

	if (cid == VMADDR_CID_HOST)
		return true;

	return false;
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
          long cid = 100;
        
          long port = 100;
        
          int benchRet = hvs_stream_allow(cid,port);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long cid = 255;
        
          long port = 255;
        
          int benchRet = hvs_stream_allow(cid,port);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cid = 10;
        
          long port = 10;
        
          int benchRet = hvs_stream_allow(cid,port);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          long cid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long port = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = hvs_stream_allow(cid,port);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
