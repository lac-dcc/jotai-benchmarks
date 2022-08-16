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
 int EADDRNOTAVAIL ; 
 int EALREADY ; 
 int EHWPOISON ; 
 int EINVAL ; 
 int EIO ; 
 int EKEYREJECTED ; 
 int EMSGSIZE ; 
 int ENOBUFS ; 
 int ENOKEY ; 
 int EPROTO ; 
#define  NXP_NCI_FW_RESULT_ABORTED_CMD 141 
#define  NXP_NCI_FW_RESULT_ADDR_RANGE_OFL_ERROR 140 
#define  NXP_NCI_FW_RESULT_BUFFER_OFL_ERROR 139 
#define  NXP_NCI_FW_RESULT_FIRMWARE_VERSION_ERROR 138 
#define  NXP_NCI_FW_RESULT_INVALID_ADDR 137 
#define  NXP_NCI_FW_RESULT_MEM_BSY 136 
#define  NXP_NCI_FW_RESULT_OK 135 
#define  NXP_NCI_FW_RESULT_PH_STATUS_FIRST_CHUNK 134 
#define  NXP_NCI_FW_RESULT_PH_STATUS_INTERNAL_ERROR_5 133 
#define  NXP_NCI_FW_RESULT_PH_STATUS_NEXT_CHUNK 132 
#define  NXP_NCI_FW_RESULT_PROTOCOL_ERROR 131 
#define  NXP_NCI_FW_RESULT_SFWU_DEGRADED 130 
#define  NXP_NCI_FW_RESULT_SIGNATURE_ERROR 129 
#define  NXP_NCI_FW_RESULT_UNKNOWN_CMD 128 

__attribute__((used)) static int nxp_nci_fw_read_status(u8 stat)
{
	switch (stat) {
	case NXP_NCI_FW_RESULT_OK:
		return 0;
	case NXP_NCI_FW_RESULT_INVALID_ADDR:
		return -EINVAL;
	case NXP_NCI_FW_RESULT_UNKNOWN_CMD:
		return -EINVAL;
	case NXP_NCI_FW_RESULT_ABORTED_CMD:
		return -EMSGSIZE;
	case NXP_NCI_FW_RESULT_ADDR_RANGE_OFL_ERROR:
		return -EADDRNOTAVAIL;
	case NXP_NCI_FW_RESULT_BUFFER_OFL_ERROR:
		return -ENOBUFS;
	case NXP_NCI_FW_RESULT_MEM_BSY:
		return -ENOKEY;
	case NXP_NCI_FW_RESULT_SIGNATURE_ERROR:
		return -EKEYREJECTED;
	case NXP_NCI_FW_RESULT_FIRMWARE_VERSION_ERROR:
		return -EALREADY;
	case NXP_NCI_FW_RESULT_PROTOCOL_ERROR:
		return -EPROTO;
	case NXP_NCI_FW_RESULT_SFWU_DEGRADED:
		return -EHWPOISON;
	case NXP_NCI_FW_RESULT_PH_STATUS_FIRST_CHUNK:
		return 0;
	case NXP_NCI_FW_RESULT_PH_STATUS_NEXT_CHUNK:
		return 0;
	case NXP_NCI_FW_RESULT_PH_STATUS_INTERNAL_ERROR_5:
		return -EINVAL;
	default:
		return -EIO;
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
          int stat = 100;
          int benchRet = nxp_nci_fw_read_status(stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int stat = 255;
          int benchRet = nxp_nci_fw_read_status(stat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stat = 10;
          int benchRet = nxp_nci_fw_read_status(stat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
