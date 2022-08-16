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
typedef  enum fc_rpsc_op_speed { ____Placeholder_fc_rpsc_op_speed } fc_rpsc_op_speed ;
typedef  enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;

/* Variables and functions */
 int BFA_PORT_SPEED_10GBPS ; 
 int BFA_PORT_SPEED_16GBPS ; 
 int BFA_PORT_SPEED_1GBPS ; 
 int BFA_PORT_SPEED_2GBPS ; 
 int BFA_PORT_SPEED_4GBPS ; 
 int BFA_PORT_SPEED_8GBPS ; 
 int BFA_PORT_SPEED_UNKNOWN ; 
#define  RPSC_OP_SPEED_10G 133 
#define  RPSC_OP_SPEED_16G 132 
#define  RPSC_OP_SPEED_1G 131 
#define  RPSC_OP_SPEED_2G 130 
#define  RPSC_OP_SPEED_4G 129 
#define  RPSC_OP_SPEED_8G 128 

__attribute__((used)) static inline  enum bfa_port_speed
fc_rpsc_operspeed_to_bfa_speed(enum fc_rpsc_op_speed speed)
{
	switch (speed) {

	case RPSC_OP_SPEED_1G:
		return BFA_PORT_SPEED_1GBPS;

	case RPSC_OP_SPEED_2G:
		return BFA_PORT_SPEED_2GBPS;

	case RPSC_OP_SPEED_4G:
		return BFA_PORT_SPEED_4GBPS;

	case RPSC_OP_SPEED_8G:
		return BFA_PORT_SPEED_8GBPS;

	case RPSC_OP_SPEED_16G:
		return BFA_PORT_SPEED_16GBPS;

	case RPSC_OP_SPEED_10G:
		return BFA_PORT_SPEED_10GBPS;

	default:
		return BFA_PORT_SPEED_UNKNOWN;
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
          enum fc_rpsc_op_speed speed = 0;
          enum bfa_port_speed benchRet = fc_rpsc_operspeed_to_bfa_speed(speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
