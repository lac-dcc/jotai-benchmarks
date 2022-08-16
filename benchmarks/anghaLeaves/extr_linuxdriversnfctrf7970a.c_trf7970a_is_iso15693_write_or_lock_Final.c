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
#define  ISO15693_CMD_LOCK_AFI 134 
#define  ISO15693_CMD_LOCK_BLOCK 133 
#define  ISO15693_CMD_LOCK_DSFID 132 
#define  ISO15693_CMD_WRITE_AFI 131 
#define  ISO15693_CMD_WRITE_DSFID 130 
#define  ISO15693_CMD_WRITE_MULTIPLE_BLOCK 129 
#define  ISO15693_CMD_WRITE_SINGLE_BLOCK 128 

__attribute__((used)) static int trf7970a_is_iso15693_write_or_lock(u8 cmd)
{
	switch (cmd) {
	case ISO15693_CMD_WRITE_SINGLE_BLOCK:
	case ISO15693_CMD_LOCK_BLOCK:
	case ISO15693_CMD_WRITE_MULTIPLE_BLOCK:
	case ISO15693_CMD_WRITE_AFI:
	case ISO15693_CMD_LOCK_AFI:
	case ISO15693_CMD_WRITE_DSFID:
	case ISO15693_CMD_LOCK_DSFID:
		return 1;
		break;
	default:
		return 0;
	}
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
          int benchRet = trf7970a_is_iso15693_write_or_lock(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          int benchRet = trf7970a_is_iso15693_write_or_lock(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          int benchRet = trf7970a_is_iso15693_write_or_lock(cmd);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
