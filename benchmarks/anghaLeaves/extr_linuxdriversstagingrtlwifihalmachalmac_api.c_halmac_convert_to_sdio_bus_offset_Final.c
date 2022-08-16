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
       1            big-arr-10x\n\
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
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 int HALMAC_RET_CONVERT_SDIO_OFFSET_FAIL ; 
 int HALMAC_RET_SUCCESS ; 
 int HALMAC_SDIO_CMD_ADDR_MAC_REG ; 
 int HALMAC_SDIO_CMD_ADDR_SDIO_REG ; 
 int HALMAC_SDIO_LOCAL_MSK ; 
 int HALMAC_WLAN_MAC_REG_MSK ; 
#define  SDIO_LOCAL_OFFSET 129 
#define  WLAN_IOREG_OFFSET 128 

__attribute__((used)) static enum halmac_ret_status
halmac_convert_to_sdio_bus_offset(u32 *halmac_offset)
{
	switch ((*halmac_offset) & 0xFFFF0000) {
	case WLAN_IOREG_OFFSET:
		*halmac_offset = (HALMAC_SDIO_CMD_ADDR_MAC_REG << 13) |
				 (*halmac_offset & HALMAC_WLAN_MAC_REG_MSK);
		break;
	case SDIO_LOCAL_OFFSET:
		*halmac_offset = (HALMAC_SDIO_CMD_ADDR_SDIO_REG << 13) |
				 (*halmac_offset & HALMAC_SDIO_LOCAL_MSK);
		break;
	default:
		*halmac_offset = 0xFFFFFFFF;
		return HALMAC_RET_CONVERT_SDIO_OFFSET_FAIL;
	}

	return HALMAC_RET_SUCCESS;
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
          int _len_halmac_offset0 = 1;
          int * halmac_offset = (int *) malloc(_len_halmac_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_halmac_offset0; _i0++) {
            halmac_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_convert_to_sdio_bus_offset(halmac_offset);
          free(halmac_offset);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_halmac_offset0 = 100;
          int * halmac_offset = (int *) malloc(_len_halmac_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_halmac_offset0; _i0++) {
            halmac_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_convert_to_sdio_bus_offset(halmac_offset);
          free(halmac_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
