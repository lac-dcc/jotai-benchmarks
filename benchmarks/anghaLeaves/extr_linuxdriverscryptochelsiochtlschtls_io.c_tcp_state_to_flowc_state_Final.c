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
typedef  int u8 ;

/* Variables and functions */
 int FW_FLOWC_MNEM_TCPSTATE_CLOSEWAIT ; 
 int FW_FLOWC_MNEM_TCPSTATE_CLOSING ; 
 int FW_FLOWC_MNEM_TCPSTATE_ESTABLISHED ; 
 int FW_FLOWC_MNEM_TCPSTATE_FINWAIT1 ; 
 int FW_FLOWC_MNEM_TCPSTATE_FINWAIT2 ; 
 int FW_FLOWC_MNEM_TCPSTATE_LASTACK ; 
#define  TCP_CLOSE_WAIT 133 
#define  TCP_CLOSING 132 
#define  TCP_ESTABLISHED 131 
#define  TCP_FIN_WAIT1 130 
#define  TCP_FIN_WAIT2 129 
#define  TCP_LAST_ACK 128 

__attribute__((used)) static u8 tcp_state_to_flowc_state(u8 state)
{
	switch (state) {
	case TCP_ESTABLISHED:
		return FW_FLOWC_MNEM_TCPSTATE_ESTABLISHED;
	case TCP_CLOSE_WAIT:
		return FW_FLOWC_MNEM_TCPSTATE_CLOSEWAIT;
	case TCP_FIN_WAIT1:
		return FW_FLOWC_MNEM_TCPSTATE_FINWAIT1;
	case TCP_CLOSING:
		return FW_FLOWC_MNEM_TCPSTATE_CLOSING;
	case TCP_LAST_ACK:
		return FW_FLOWC_MNEM_TCPSTATE_LASTACK;
	case TCP_FIN_WAIT2:
		return FW_FLOWC_MNEM_TCPSTATE_FINWAIT2;
	}

	return FW_FLOWC_MNEM_TCPSTATE_ESTABLISHED;
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
          int state = 100;
          int benchRet = tcp_state_to_flowc_state(state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          int benchRet = tcp_state_to_flowc_state(state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          int benchRet = tcp_state_to_flowc_state(state);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
