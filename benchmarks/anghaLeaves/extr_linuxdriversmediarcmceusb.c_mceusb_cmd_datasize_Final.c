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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
#define  MCE_CMD_G_REVISION 145 
#define  MCE_CMD_NULL 144 
#define  MCE_CMD_PORT_IR 143 
#define  MCE_CMD_PORT_SYS 142 
#define  MCE_CMD_SIG_END 141 
#define  MCE_CMD_UNKNOWN 140 
#define  MCE_RSP_EQDEVDETAILS 139 
#define  MCE_RSP_EQEMVER 138 
#define  MCE_RSP_EQIRCFS 137 
#define  MCE_RSP_EQIRNUMPORTS 136 
#define  MCE_RSP_EQIRRXCFCNT 135 
#define  MCE_RSP_EQIRRXPORTEN 134 
#define  MCE_RSP_EQIRTIMEOUT 133 
#define  MCE_RSP_EQIRTXPORTS 132 
#define  MCE_RSP_EQWAKESUPPORT 131 
#define  MCE_RSP_EQWAKEVERSION 130 
#define  MCE_RSP_GETPORTSTATUS 129 
#define  MCE_RSP_GETWAKESOURCE 128 

__attribute__((used)) static int mceusb_cmd_datasize(u8 cmd, u8 subcmd)
{
	int datasize = 0;

	switch (cmd) {
	case MCE_CMD_NULL:
		if (subcmd == MCE_CMD_PORT_SYS)
			datasize = 1;
		break;
	case MCE_CMD_PORT_SYS:
		switch (subcmd) {
		case MCE_RSP_GETPORTSTATUS:
			datasize = 5;
			break;
		case MCE_RSP_EQWAKEVERSION:
			datasize = 4;
			break;
		case MCE_CMD_G_REVISION:
			datasize = 2;
			break;
		case MCE_RSP_EQWAKESUPPORT:
		case MCE_RSP_GETWAKESOURCE:
		case MCE_RSP_EQDEVDETAILS:
		case MCE_RSP_EQEMVER:
			datasize = 1;
			break;
		}
		break;
	case MCE_CMD_PORT_IR:
		switch (subcmd) {
		case MCE_CMD_UNKNOWN:
		case MCE_RSP_EQIRCFS:
		case MCE_RSP_EQIRTIMEOUT:
		case MCE_RSP_EQIRRXCFCNT:
		case MCE_RSP_EQIRNUMPORTS:
			datasize = 2;
			break;
		case MCE_CMD_SIG_END:
		case MCE_RSP_EQIRTXPORTS:
		case MCE_RSP_EQIRRXPORTEN:
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
          int benchRet = mceusb_cmd_datasize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          int subcmd = 255;
          int benchRet = mceusb_cmd_datasize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          int subcmd = 10;
          int benchRet = mceusb_cmd_datasize(cmd,subcmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
