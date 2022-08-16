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
typedef  int u_int32_t ;

/* Variables and functions */
 int IP_FW_TCPF_ACK_COMPAT ; 
 int IP_FW_TCPF_FIN_COMPAT ; 
 int IP_FW_TCPF_PSH_COMPAT ; 
 int IP_FW_TCPF_RST_COMPAT ; 
 int IP_FW_TCPF_SYN_COMPAT ; 
 int IP_FW_TCPF_URG_COMPAT ; 
 int TH_ACK ; 
 int TH_FIN ; 
 int TH_PUSH ; 
 int TH_RST ; 
 int TH_SYN ; 
 int TH_URG ; 

__attribute__((used)) static u_int32_t
fill_compat_tcpflags(u_int32_t flags) {
	u_int32_t	flags_compat = 0;
	
	if (flags & TH_FIN)
		flags_compat |= IP_FW_TCPF_FIN_COMPAT;
	if (flags & TH_SYN)
		flags_compat |= IP_FW_TCPF_SYN_COMPAT;
	if (flags & TH_RST)
		flags_compat |= IP_FW_TCPF_RST_COMPAT;
	if (flags & TH_PUSH)
		flags_compat |= IP_FW_TCPF_PSH_COMPAT;
	if (flags & TH_ACK)
		flags_compat |= IP_FW_TCPF_ACK_COMPAT;
	if (flags & TH_URG)
		flags_compat |= IP_FW_TCPF_URG_COMPAT;
		
	return flags_compat;
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
          int benchRet = fill_compat_tcpflags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int benchRet = fill_compat_tcpflags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int benchRet = fill_compat_tcpflags(flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
