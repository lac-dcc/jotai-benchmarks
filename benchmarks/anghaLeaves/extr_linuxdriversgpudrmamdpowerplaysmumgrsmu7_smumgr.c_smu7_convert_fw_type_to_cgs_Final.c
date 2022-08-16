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
typedef  int uint32_t ;
typedef  enum cgs_ucode_id { ____Placeholder_cgs_ucode_id } cgs_ucode_id ;

/* Variables and functions */
 int CGS_UCODE_ID_CP_CE ; 
 int CGS_UCODE_ID_CP_ME ; 
 int CGS_UCODE_ID_CP_MEC ; 
 int CGS_UCODE_ID_CP_MEC_JT1 ; 
 int CGS_UCODE_ID_CP_MEC_JT2 ; 
 int CGS_UCODE_ID_CP_PFP ; 
 int CGS_UCODE_ID_MAXIMUM ; 
 int CGS_UCODE_ID_RLC_G ; 
 int CGS_UCODE_ID_SDMA0 ; 
 int CGS_UCODE_ID_SDMA1 ; 
 int CGS_UCODE_ID_SMU ; 
 int CGS_UCODE_ID_SMU_SK ; 
 int CGS_UCODE_ID_STORAGE ; 
#define  UCODE_ID_CP_CE 139 
#define  UCODE_ID_CP_ME 138 
#define  UCODE_ID_CP_MEC 137 
#define  UCODE_ID_CP_MEC_JT1 136 
#define  UCODE_ID_CP_MEC_JT2 135 
#define  UCODE_ID_CP_PFP 134 
#define  UCODE_ID_MEC_STORAGE 133 
#define  UCODE_ID_RLC_G 132 
#define  UCODE_ID_SDMA0 131 
#define  UCODE_ID_SDMA1 130 
#define  UCODE_ID_SMU 129 
#define  UCODE_ID_SMU_SK 128 

enum cgs_ucode_id smu7_convert_fw_type_to_cgs(uint32_t fw_type)
{
	enum cgs_ucode_id result = CGS_UCODE_ID_MAXIMUM;

	switch (fw_type) {
	case UCODE_ID_SMU:
		result = CGS_UCODE_ID_SMU;
		break;
	case UCODE_ID_SMU_SK:
		result = CGS_UCODE_ID_SMU_SK;
		break;
	case UCODE_ID_SDMA0:
		result = CGS_UCODE_ID_SDMA0;
		break;
	case UCODE_ID_SDMA1:
		result = CGS_UCODE_ID_SDMA1;
		break;
	case UCODE_ID_CP_CE:
		result = CGS_UCODE_ID_CP_CE;
		break;
	case UCODE_ID_CP_PFP:
		result = CGS_UCODE_ID_CP_PFP;
		break;
	case UCODE_ID_CP_ME:
		result = CGS_UCODE_ID_CP_ME;
		break;
	case UCODE_ID_CP_MEC:
		result = CGS_UCODE_ID_CP_MEC;
		break;
	case UCODE_ID_CP_MEC_JT1:
		result = CGS_UCODE_ID_CP_MEC_JT1;
		break;
	case UCODE_ID_CP_MEC_JT2:
		result = CGS_UCODE_ID_CP_MEC_JT2;
		break;
	case UCODE_ID_RLC_G:
		result = CGS_UCODE_ID_RLC_G;
		break;
	case UCODE_ID_MEC_STORAGE:
		result = CGS_UCODE_ID_STORAGE;
		break;
	default:
		break;
	}

	return result;
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
          int fw_type = 100;
          enum cgs_ucode_id benchRet = smu7_convert_fw_type_to_cgs(fw_type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fw_type = 255;
          enum cgs_ucode_id benchRet = smu7_convert_fw_type_to_cgs(fw_type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fw_type = 10;
          enum cgs_ucode_id benchRet = smu7_convert_fw_type_to_cgs(fw_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
