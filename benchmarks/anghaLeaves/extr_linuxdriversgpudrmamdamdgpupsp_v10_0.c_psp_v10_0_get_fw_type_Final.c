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
struct amdgpu_firmware_info {int ucode_id; } ;
typedef  enum psp_gfx_fw_type { ____Placeholder_psp_gfx_fw_type } psp_gfx_fw_type ;

/* Variables and functions */
#define  AMDGPU_UCODE_ID_CP_CE 145 
#define  AMDGPU_UCODE_ID_CP_ME 144 
#define  AMDGPU_UCODE_ID_CP_MEC1 143 
#define  AMDGPU_UCODE_ID_CP_MEC1_JT 142 
#define  AMDGPU_UCODE_ID_CP_MEC2 141 
#define  AMDGPU_UCODE_ID_CP_MEC2_JT 140 
#define  AMDGPU_UCODE_ID_CP_PFP 139 
#define  AMDGPU_UCODE_ID_MAXIMUM 138 
#define  AMDGPU_UCODE_ID_RLC_G 137 
#define  AMDGPU_UCODE_ID_RLC_RESTORE_LIST_CNTL 136 
#define  AMDGPU_UCODE_ID_RLC_RESTORE_LIST_GPM_MEM 135 
#define  AMDGPU_UCODE_ID_RLC_RESTORE_LIST_SRM_MEM 134 
#define  AMDGPU_UCODE_ID_SDMA0 133 
#define  AMDGPU_UCODE_ID_SDMA1 132 
#define  AMDGPU_UCODE_ID_SMC 131 
#define  AMDGPU_UCODE_ID_UVD 130 
#define  AMDGPU_UCODE_ID_VCE 129 
#define  AMDGPU_UCODE_ID_VCN 128 
 int EINVAL ; 
 int GFX_FW_TYPE_CP_CE ; 
 int GFX_FW_TYPE_CP_ME ; 
 int GFX_FW_TYPE_CP_MEC ; 
 int GFX_FW_TYPE_CP_MEC_ME1 ; 
 int GFX_FW_TYPE_CP_MEC_ME2 ; 
 int GFX_FW_TYPE_CP_PFP ; 
 int GFX_FW_TYPE_RLC_G ; 
 int GFX_FW_TYPE_RLC_RESTORE_LIST_CNTL ; 
 int GFX_FW_TYPE_RLC_RESTORE_LIST_GPM_MEM ; 
 int GFX_FW_TYPE_RLC_RESTORE_LIST_SRM_MEM ; 
 int GFX_FW_TYPE_SDMA0 ; 
 int GFX_FW_TYPE_SDMA1 ; 
 int GFX_FW_TYPE_SMU ; 
 int GFX_FW_TYPE_UVD ; 
 int GFX_FW_TYPE_VCE ; 
 int GFX_FW_TYPE_VCN ; 

__attribute__((used)) static int
psp_v10_0_get_fw_type(struct amdgpu_firmware_info *ucode, enum psp_gfx_fw_type *type)
{
	switch(ucode->ucode_id) {
	case AMDGPU_UCODE_ID_SDMA0:
		*type = GFX_FW_TYPE_SDMA0;
		break;
	case AMDGPU_UCODE_ID_SDMA1:
		*type = GFX_FW_TYPE_SDMA1;
		break;
	case AMDGPU_UCODE_ID_CP_CE:
		*type = GFX_FW_TYPE_CP_CE;
		break;
	case AMDGPU_UCODE_ID_CP_PFP:
		*type = GFX_FW_TYPE_CP_PFP;
		break;
	case AMDGPU_UCODE_ID_CP_ME:
		*type = GFX_FW_TYPE_CP_ME;
		break;
	case AMDGPU_UCODE_ID_CP_MEC1:
		*type = GFX_FW_TYPE_CP_MEC;
		break;
	case AMDGPU_UCODE_ID_CP_MEC1_JT:
		*type = GFX_FW_TYPE_CP_MEC_ME1;
		break;
	case AMDGPU_UCODE_ID_CP_MEC2:
		*type = GFX_FW_TYPE_CP_MEC;
		break;
	case AMDGPU_UCODE_ID_CP_MEC2_JT:
		*type = GFX_FW_TYPE_CP_MEC_ME2;
		break;
	case AMDGPU_UCODE_ID_RLC_G:
		*type = GFX_FW_TYPE_RLC_G;
		break;
	case AMDGPU_UCODE_ID_RLC_RESTORE_LIST_CNTL:
		*type = GFX_FW_TYPE_RLC_RESTORE_LIST_CNTL;
		break;
	case AMDGPU_UCODE_ID_RLC_RESTORE_LIST_GPM_MEM:
		*type = GFX_FW_TYPE_RLC_RESTORE_LIST_GPM_MEM;
		break;
	case AMDGPU_UCODE_ID_RLC_RESTORE_LIST_SRM_MEM:
		*type = GFX_FW_TYPE_RLC_RESTORE_LIST_SRM_MEM;
		break;
	case AMDGPU_UCODE_ID_SMC:
		*type = GFX_FW_TYPE_SMU;
		break;
	case AMDGPU_UCODE_ID_UVD:
		*type = GFX_FW_TYPE_UVD;
		break;
	case AMDGPU_UCODE_ID_VCE:
		*type = GFX_FW_TYPE_VCE;
		break;
	case AMDGPU_UCODE_ID_VCN:
		*type = GFX_FW_TYPE_VCN;
		break;
	case AMDGPU_UCODE_ID_MAXIMUM:
	default:
		return -EINVAL;
	}

	return 0;
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
          int _len_ucode0 = 1;
          struct amdgpu_firmware_info * ucode = (struct amdgpu_firmware_info *) malloc(_len_ucode0*sizeof(struct amdgpu_firmware_info));
          for(int _i0 = 0; _i0 < _len_ucode0; _i0++) {
            ucode[_i0].ucode_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_type0 = 1;
          enum psp_gfx_fw_type * type = (enum psp_gfx_fw_type *) malloc(_len_type0*sizeof(enum psp_gfx_fw_type));
          for(int _i0 = 0; _i0 < _len_type0; _i0++) {
            type[_i0] = 0;
          }
          int benchRet = psp_v10_0_get_fw_type(ucode,type);
          printf("%d\n", benchRet); 
          free(ucode);
          free(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
