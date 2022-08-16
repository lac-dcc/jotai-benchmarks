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
typedef  int mptcp_state_t ;

/* Variables and functions */
#define  MPTCPS_CLOSED 137 
#define  MPTCPS_CLOSE_WAIT 136 
#define  MPTCPS_CLOSING 135 
#define  MPTCPS_ESTABLISHED 134 
#define  MPTCPS_FIN_WAIT_1 133 
#define  MPTCPS_FIN_WAIT_2 132 
#define  MPTCPS_LAST_ACK 131 
#define  MPTCPS_LISTEN 130 
#define  MPTCPS_TERMINATE 129 
#define  MPTCPS_TIME_WAIT 128 

__attribute__((used)) static const char *
mptcp_state_to_str(mptcp_state_t state)
{
        const char *c = "UNDEFINED";
	switch (state) {
	case MPTCPS_CLOSED:
		c = "MPTCPS_CLOSED";
		break;
	case MPTCPS_LISTEN:
		c = "MPTCPS_LISTEN";
		break;
	case MPTCPS_ESTABLISHED:
		c = "MPTCPS_ESTABLISHED";
		break;
	case MPTCPS_CLOSE_WAIT:
		c = "MPTCPS_CLOSE_WAIT";
		break;
	case MPTCPS_FIN_WAIT_1:
		c = "MPTCPS_FIN_WAIT_1";
		break;
	case MPTCPS_CLOSING:
		c = "MPTCPS_CLOSING";
		break;
	case MPTCPS_LAST_ACK:
		c = "MPTCPS_LAST_ACK";
		break;
	case MPTCPS_FIN_WAIT_2:
		c = "MPTCPS_FIN_WAIT_2";
		break;
	case MPTCPS_TIME_WAIT:
		c = "MPTCPS_TIME_WAIT";
		break;
	case MPTCPS_TERMINATE:
		c = "MPTCPS_TERMINATE";
		break;
	}
	return (c);
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
          const char * benchRet = mptcp_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          const char * benchRet = mptcp_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          const char * benchRet = mptcp_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
