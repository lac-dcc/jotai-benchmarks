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
typedef  int fw_port_cap32_t ;
typedef  int /*<<< orphan*/  fw_port_cap16_t ;

/* Variables and functions */
 int FW_PORT_CAP32_802_3_ASM_DIR ; 
 int FW_PORT_CAP32_802_3_PAUSE ; 
 int FW_PORT_CAP32_ANEG ; 
 int FW_PORT_CAP32_FC_RX ; 
 int FW_PORT_CAP32_FC_TX ; 
 int FW_PORT_CAP32_FEC_BASER_RS ; 
 int FW_PORT_CAP32_FEC_RS ; 
 int FW_PORT_CAP32_FORCE_PAUSE ; 
 int FW_PORT_CAP32_MDIAUTO ; 
 int FW_PORT_CAP32_MDISTRAIGHT ; 
 int FW_PORT_CAP32_SPEED_100G ; 
 int FW_PORT_CAP32_SPEED_100M ; 
 int FW_PORT_CAP32_SPEED_10G ; 
 int FW_PORT_CAP32_SPEED_1G ; 
 int FW_PORT_CAP32_SPEED_25G ; 
 int FW_PORT_CAP32_SPEED_40G ; 
 int /*<<< orphan*/  FW_PORT_CAP_802_3_ASM_DIR ; 
 int /*<<< orphan*/  FW_PORT_CAP_802_3_PAUSE ; 
 int /*<<< orphan*/  FW_PORT_CAP_ANEG ; 
 int /*<<< orphan*/  FW_PORT_CAP_FC_RX ; 
 int /*<<< orphan*/  FW_PORT_CAP_FC_TX ; 
 int /*<<< orphan*/  FW_PORT_CAP_FEC_BASER_RS ; 
 int /*<<< orphan*/  FW_PORT_CAP_FEC_RS ; 
 int /*<<< orphan*/  FW_PORT_CAP_FORCE_PAUSE ; 
 int /*<<< orphan*/  FW_PORT_CAP_MDIAUTO ; 
 int /*<<< orphan*/  FW_PORT_CAP_MDISTRAIGHT ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_100G ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_100M ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_10G ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_1G ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_25G ; 
 int /*<<< orphan*/  FW_PORT_CAP_SPEED_40G ; 

fw_port_cap16_t fwcaps32_to_caps16(fw_port_cap32_t caps32)
{
	fw_port_cap16_t caps16 = 0;

	#define CAP32_TO_CAP16(__cap) \
		do { \
			if (caps32 & FW_PORT_CAP32_##__cap) \
				caps16 |= FW_PORT_CAP_##__cap; \
		} while (0)

	CAP32_TO_CAP16(SPEED_100M);
	CAP32_TO_CAP16(SPEED_1G);
	CAP32_TO_CAP16(SPEED_10G);
	CAP32_TO_CAP16(SPEED_25G);
	CAP32_TO_CAP16(SPEED_40G);
	CAP32_TO_CAP16(SPEED_100G);
	CAP32_TO_CAP16(FC_RX);
	CAP32_TO_CAP16(FC_TX);
	CAP32_TO_CAP16(802_3_PAUSE);
	CAP32_TO_CAP16(802_3_ASM_DIR);
	CAP32_TO_CAP16(ANEG);
	CAP32_TO_CAP16(FORCE_PAUSE);
	CAP32_TO_CAP16(MDIAUTO);
	CAP32_TO_CAP16(MDISTRAIGHT);
	CAP32_TO_CAP16(FEC_RS);
	CAP32_TO_CAP16(FEC_BASER_RS);

	#undef CAP32_TO_CAP16

	return caps16;
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
          int caps32 = 100;
          int benchRet = fwcaps32_to_caps16(caps32);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int caps32 = 255;
          int benchRet = fwcaps32_to_caps16(caps32);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int caps32 = 10;
          int benchRet = fwcaps32_to_caps16(caps32);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
