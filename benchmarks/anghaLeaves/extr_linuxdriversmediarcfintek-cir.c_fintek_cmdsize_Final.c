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
 int BUF_CMD_G_REVISION ; 
#define  BUF_CMD_SIG_END 136 
#define  BUF_CMD_S_CARRIER 135 
#define  BUF_CMD_S_RXSENSOR 134 
#define  BUF_CMD_S_TIMEOUT 133 
#define  BUF_CMD_S_TXMASK 132 
#define  BUF_COMMAND_HEADER 131 
#define  BUF_COMMAND_NULL 130 
#define  BUF_HW_CMD_HEADER 129 
#define  BUF_RSP_PULSE_COUNT 128 

__attribute__((used)) static int fintek_cmdsize(u8 cmd, u8 subcmd)
{
	int datasize = 0;

	switch (cmd) {
	case BUF_COMMAND_NULL:
		if (subcmd == BUF_HW_CMD_HEADER)
			datasize = 1;
		break;
	case BUF_HW_CMD_HEADER:
		if (subcmd == BUF_CMD_G_REVISION)
			datasize = 2;
		break;
	case BUF_COMMAND_HEADER:
		switch (subcmd) {
		case BUF_CMD_S_CARRIER:
		case BUF_CMD_S_TIMEOUT:
		case BUF_RSP_PULSE_COUNT:
			datasize = 2;
			break;
		case BUF_CMD_SIG_END:
		case BUF_CMD_S_TXMASK:
		case BUF_CMD_S_RXSENSOR:
			datasize = 1;
			break;
		}
	}

	return datasize;
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
          int cmd = 100;
          int subcmd = 100;
          int benchRet = fintek_cmdsize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          int subcmd = 255;
          int benchRet = fintek_cmdsize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          int subcmd = 10;
          int benchRet = fintek_cmdsize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
