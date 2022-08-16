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

/* Variables and functions */
#define  BT_STATE_CLEAR_B2H 139 
#define  BT_STATE_IDLE 138 
#define  BT_STATE_LONG_BUSY 137 
#define  BT_STATE_READ_BYTES 136 
#define  BT_STATE_READ_WAIT 135 
#define  BT_STATE_RESET1 134 
#define  BT_STATE_RESET2 133 
#define  BT_STATE_RESET3 132 
#define  BT_STATE_RESTART 131 
#define  BT_STATE_WRITE_BYTES 130 
#define  BT_STATE_WRITE_CONSUME 129 
#define  BT_STATE_XACTION_START 128 

__attribute__((used)) static char *state2txt(unsigned char state)
{
	switch (state) {
	case BT_STATE_IDLE:		return("IDLE");
	case BT_STATE_XACTION_START:	return("XACTION");
	case BT_STATE_WRITE_BYTES:	return("WR_BYTES");
	case BT_STATE_WRITE_CONSUME:	return("WR_CONSUME");
	case BT_STATE_READ_WAIT:	return("RD_WAIT");
	case BT_STATE_CLEAR_B2H:	return("CLEAR_B2H");
	case BT_STATE_READ_BYTES:	return("RD_BYTES");
	case BT_STATE_RESET1:		return("RESET1");
	case BT_STATE_RESET2:		return("RESET2");
	case BT_STATE_RESET3:		return("RESET3");
	case BT_STATE_RESTART:		return("RESTART");
	case BT_STATE_LONG_BUSY:	return("LONG_BUSY");
	}
	return("BAD STATE");
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
          unsigned char state = 100;
          char * benchRet = state2txt(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char state = 255;
          char * benchRet = state2txt(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char state = 10;
          char * benchRet = state2txt(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
