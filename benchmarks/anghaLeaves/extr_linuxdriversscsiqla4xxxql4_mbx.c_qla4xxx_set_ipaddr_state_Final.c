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
typedef  int uint8_t ;

/* Variables and functions */
#define  IP_ADDRSTATE_ACQUIRING 134 
#define  IP_ADDRSTATE_DEPRICATED 133 
#define  IP_ADDRSTATE_DISABLING 132 
#define  IP_ADDRSTATE_INVALID 131 
#define  IP_ADDRSTATE_PREFERRED 130 
#define  IP_ADDRSTATE_TENTATIVE 129 
#define  IP_ADDRSTATE_UNCONFIGURED 128 
 int ISCSI_IPDDRESS_STATE_ACQUIRING ; 
 int ISCSI_IPDDRESS_STATE_DEPRECATED ; 
 int ISCSI_IPDDRESS_STATE_DISABLING ; 
 int ISCSI_IPDDRESS_STATE_INVALID ; 
 int ISCSI_IPDDRESS_STATE_TENTATIVE ; 
 int ISCSI_IPDDRESS_STATE_UNCONFIGURED ; 
 int ISCSI_IPDDRESS_STATE_VALID ; 

uint8_t qla4xxx_set_ipaddr_state(uint8_t fw_ipaddr_state)
{
	uint8_t ipaddr_state;

	switch (fw_ipaddr_state) {
	case IP_ADDRSTATE_UNCONFIGURED:
		ipaddr_state = ISCSI_IPDDRESS_STATE_UNCONFIGURED;
		break;
	case IP_ADDRSTATE_INVALID:
		ipaddr_state = ISCSI_IPDDRESS_STATE_INVALID;
		break;
	case IP_ADDRSTATE_ACQUIRING:
		ipaddr_state = ISCSI_IPDDRESS_STATE_ACQUIRING;
		break;
	case IP_ADDRSTATE_TENTATIVE:
		ipaddr_state = ISCSI_IPDDRESS_STATE_TENTATIVE;
		break;
	case IP_ADDRSTATE_DEPRICATED:
		ipaddr_state = ISCSI_IPDDRESS_STATE_DEPRECATED;
		break;
	case IP_ADDRSTATE_PREFERRED:
		ipaddr_state = ISCSI_IPDDRESS_STATE_VALID;
		break;
	case IP_ADDRSTATE_DISABLING:
		ipaddr_state = ISCSI_IPDDRESS_STATE_DISABLING;
		break;
	default:
		ipaddr_state = ISCSI_IPDDRESS_STATE_UNCONFIGURED;
	}
	return ipaddr_state;
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
          int fw_ipaddr_state = 100;
          int benchRet = qla4xxx_set_ipaddr_state(fw_ipaddr_state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fw_ipaddr_state = 255;
          int benchRet = qla4xxx_set_ipaddr_state(fw_ipaddr_state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fw_ipaddr_state = 10;
          int benchRet = qla4xxx_set_ipaddr_state(fw_ipaddr_state);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
