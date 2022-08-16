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
typedef  int u32 ;
typedef  int bfa_port_speed_t ;

/* Variables and functions */
#define  BFA_PORT_SPEED_10GBPS 133 
#define  BFA_PORT_SPEED_16GBPS 132 
#define  BFA_PORT_SPEED_1GBPS 131 
#define  BFA_PORT_SPEED_2GBPS 130 
#define  BFA_PORT_SPEED_4GBPS 129 
#define  BFA_PORT_SPEED_8GBPS 128 
 int FDMI_TRANS_SPEED_10G ; 
 int FDMI_TRANS_SPEED_16G ; 
 int FDMI_TRANS_SPEED_4G ; 
 int FDMI_TRANS_SPEED_8G ; 
 int FDMI_TRANS_SPEED_UNKNOWN ; 

u32
bfa_fcs_fdmi_convert_speed(bfa_port_speed_t pport_speed)
{
	u32	ret;

	switch (pport_speed) {
	case BFA_PORT_SPEED_1GBPS:
	case BFA_PORT_SPEED_2GBPS:
		ret = pport_speed;
		break;

	case BFA_PORT_SPEED_4GBPS:
		ret = FDMI_TRANS_SPEED_4G;
		break;

	case BFA_PORT_SPEED_8GBPS:
		ret = FDMI_TRANS_SPEED_8G;
		break;

	case BFA_PORT_SPEED_10GBPS:
		ret = FDMI_TRANS_SPEED_10G;
		break;

	case BFA_PORT_SPEED_16GBPS:
		ret = FDMI_TRANS_SPEED_16G;
		break;

	default:
		ret = FDMI_TRANS_SPEED_UNKNOWN;
	}
	return ret;
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
          int pport_speed = 100;
          int benchRet = bfa_fcs_fdmi_convert_speed(pport_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pport_speed = 255;
          int benchRet = bfa_fcs_fdmi_convert_speed(pport_speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pport_speed = 10;
          int benchRet = bfa_fcs_fdmi_convert_speed(pport_speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
