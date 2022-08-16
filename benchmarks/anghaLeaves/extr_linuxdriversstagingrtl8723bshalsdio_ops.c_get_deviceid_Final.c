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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */
 int /*<<< orphan*/  SDIO_LOCAL_DEVICE_ID ; 
 int /*<<< orphan*/  WLAN_IOREG_DEVICE_ID ; 
 int /*<<< orphan*/  WLAN_RX0FF_DEVICE_ID ; 
 int /*<<< orphan*/  WLAN_TX_HIQ_DEVICE_ID ; 
 int /*<<< orphan*/  WLAN_TX_LOQ_DEVICE_ID ; 
 int /*<<< orphan*/  WLAN_TX_MIQ_DEVICE_ID ; 

__attribute__((used)) static u8 get_deviceid(u32 addr)
{
	u8 devide_id;
	u16 pseudo_id;


	pseudo_id = (u16)(addr >> 16);
	switch (pseudo_id) {
	case 0x1025:
		devide_id = SDIO_LOCAL_DEVICE_ID;
		break;

	case 0x1026:
		devide_id = WLAN_IOREG_DEVICE_ID;
		break;

/* 		case 0x1027: */
/* 			devide_id = SDIO_FIRMWARE_FIFO; */
/* 			break; */

	case 0x1031:
		devide_id = WLAN_TX_HIQ_DEVICE_ID;
		break;

	case 0x1032:
		devide_id = WLAN_TX_MIQ_DEVICE_ID;
		break;

	case 0x1033:
		devide_id = WLAN_TX_LOQ_DEVICE_ID;
		break;

	case 0x1034:
		devide_id = WLAN_RX0FF_DEVICE_ID;
		break;

	default:
/* 			devide_id = (u8)((addr >> 13) & 0xF); */
		devide_id = WLAN_IOREG_DEVICE_ID;
		break;
	}

	return devide_id;
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
          int addr = 100;
          int benchRet = get_deviceid(addr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int addr = 255;
          int benchRet = get_deviceid(addr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addr = 10;
          int benchRet = get_deviceid(addr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
