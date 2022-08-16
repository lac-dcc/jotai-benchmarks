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
#define  FIT_SR_DRIVE_BUSY 140 
#define  FIT_SR_DRIVE_BUSY_ERASE 139 
#define  FIT_SR_DRIVE_BUSY_SANITIZE 138 
#define  FIT_SR_DRIVE_DEGRADED 137 
#define  FIT_SR_DRIVE_FAULT 136 
#define  FIT_SR_DRIVE_FW_BOOTING 135 
#define  FIT_SR_DRIVE_INIT 134 
#define  FIT_SR_DRIVE_INIT_FAULT 133 
#define  FIT_SR_DRIVE_NEED_FW_DOWNLOAD 132 
#define  FIT_SR_DRIVE_OFFLINE 131 
#define  FIT_SR_DRIVE_ONLINE 130 
#define  FIT_SR_DRIVE_SOFT_RESET 129 
#define  FIT_SR_PCIE_LINK_DOWN 128 

const char *skd_drive_state_to_str(int state)
{
	switch (state) {
	case FIT_SR_DRIVE_OFFLINE:
		return "OFFLINE";
	case FIT_SR_DRIVE_INIT:
		return "INIT";
	case FIT_SR_DRIVE_ONLINE:
		return "ONLINE";
	case FIT_SR_DRIVE_BUSY:
		return "BUSY";
	case FIT_SR_DRIVE_FAULT:
		return "FAULT";
	case FIT_SR_DRIVE_DEGRADED:
		return "DEGRADED";
	case FIT_SR_PCIE_LINK_DOWN:
		return "INK_DOWN";
	case FIT_SR_DRIVE_SOFT_RESET:
		return "SOFT_RESET";
	case FIT_SR_DRIVE_NEED_FW_DOWNLOAD:
		return "NEED_FW";
	case FIT_SR_DRIVE_INIT_FAULT:
		return "INIT_FAULT";
	case FIT_SR_DRIVE_BUSY_SANITIZE:
		return "BUSY_SANITIZE";
	case FIT_SR_DRIVE_BUSY_ERASE:
		return "BUSY_ERASE";
	case FIT_SR_DRIVE_FW_BOOTING:
		return "FW_BOOTING";
	default:
		return "???";
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
          int state = 100;
          const char * benchRet = skd_drive_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          const char * benchRet = skd_drive_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          const char * benchRet = skd_drive_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
