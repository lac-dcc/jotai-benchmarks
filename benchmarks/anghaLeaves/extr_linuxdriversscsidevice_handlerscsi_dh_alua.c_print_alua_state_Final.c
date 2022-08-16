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
#define  SCSI_ACCESS_STATE_ACTIVE 134 
#define  SCSI_ACCESS_STATE_LBA 133 
#define  SCSI_ACCESS_STATE_OFFLINE 132 
#define  SCSI_ACCESS_STATE_OPTIMAL 131 
#define  SCSI_ACCESS_STATE_STANDBY 130 
#define  SCSI_ACCESS_STATE_TRANSITIONING 129 
#define  SCSI_ACCESS_STATE_UNAVAILABLE 128 

__attribute__((used)) static char print_alua_state(unsigned char state)
{
	switch (state) {
	case SCSI_ACCESS_STATE_OPTIMAL:
		return 'A';
	case SCSI_ACCESS_STATE_ACTIVE:
		return 'N';
	case SCSI_ACCESS_STATE_STANDBY:
		return 'S';
	case SCSI_ACCESS_STATE_UNAVAILABLE:
		return 'U';
	case SCSI_ACCESS_STATE_LBA:
		return 'L';
	case SCSI_ACCESS_STATE_OFFLINE:
		return 'O';
	case SCSI_ACCESS_STATE_TRANSITIONING:
		return 'T';
	default:
		return 'X';
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
          unsigned char state = 100;
          char benchRet = print_alua_state(state);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char state = 255;
          char benchRet = print_alua_state(state);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char state = 10;
          char benchRet = print_alua_state(state);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
