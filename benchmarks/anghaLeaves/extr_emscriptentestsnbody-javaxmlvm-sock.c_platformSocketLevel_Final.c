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
typedef  int I_32 ;

/* Variables and functions */
 int HYPORT_ERROR_SOCKET_SOCKLEVELINVALID ; 
#define  HY_IPPROTO_IP 130 
#define  HY_IPPROTO_TCP 129 
#define  HY_SOL_SOCKET 128 
 int OS_IPPROTO_IP ; 
 int OS_IPPROTO_TCP ; 
 int OS_SOL_SOCKET ; 

I_32
platformSocketLevel (I_32 portableSocketLevel)
{
    switch (portableSocketLevel)
    {
        case HY_SOL_SOCKET:
            return OS_SOL_SOCKET;
        case HY_IPPROTO_TCP:
            return OS_IPPROTO_TCP;
        case HY_IPPROTO_IP:
            return OS_IPPROTO_IP;
#if defined(IPv6_FUNCTION_SUPPORT)
        case HY_IPPROTO_IPV6:
            return OS_IPPROTO_IPV6;
#endif
            
    }
    return HYPORT_ERROR_SOCKET_SOCKLEVELINVALID;
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
          int portableSocketLevel = 100;
          int benchRet = platformSocketLevel(portableSocketLevel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int portableSocketLevel = 255;
          int benchRet = platformSocketLevel(portableSocketLevel);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int portableSocketLevel = 10;
          int benchRet = platformSocketLevel(portableSocketLevel);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
