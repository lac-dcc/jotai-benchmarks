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
typedef  struct TYPE_32__   TYPE_9__ ;
typedef  struct TYPE_31__   TYPE_8__ ;
typedef  struct TYPE_30__   TYPE_7__ ;
typedef  struct TYPE_29__   TYPE_6__ ;
typedef  struct TYPE_28__   TYPE_5__ ;
typedef  struct TYPE_27__   TYPE_4__ ;
typedef  struct TYPE_26__   TYPE_3__ ;
typedef  struct TYPE_25__   TYPE_2__ ;
typedef  struct TYPE_24__   TYPE_1__ ;
typedef  struct TYPE_23__   TYPE_16__ ;
typedef  struct TYPE_22__   TYPE_15__ ;
typedef  struct TYPE_21__   TYPE_14__ ;
typedef  struct TYPE_20__   TYPE_13__ ;
typedef  struct TYPE_19__   TYPE_12__ ;
typedef  struct TYPE_18__   TYPE_11__ ;
typedef  struct TYPE_17__   TYPE_10__ ;

/* Type definitions */
typedef  size_t uint32_t ;
struct amdgpu_device {size_t*** reg_offset; } ;
struct TYPE_32__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_31__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_30__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_29__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_28__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_27__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_26__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_25__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_24__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_23__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_22__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_21__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_20__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_19__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_18__ {int /*<<< orphan*/ * instance; } ;
struct TYPE_17__ {int /*<<< orphan*/ * instance; } ;

/* Variables and functions */
 TYPE_16__ ATHUB_BASE ; 
 size_t ATHUB_HWIP ; 
 TYPE_15__ DCE_BASE ; 
 size_t DCE_HWIP ; 
 TYPE_14__ DF_BASE ; 
 size_t DF_HWIP ; 
 TYPE_13__ GC_BASE ; 
 size_t GC_HWIP ; 
 TYPE_12__ HDP_BASE ; 
 size_t HDP_HWIP ; 
 size_t MAX_INSTANCE ; 
 TYPE_11__ MMHUB_BASE ; 
 size_t MMHUB_HWIP ; 
 TYPE_10__ MP0_BASE ; 
 size_t MP0_HWIP ; 
 TYPE_9__ MP1_BASE ; 
 size_t MP1_HWIP ; 
 size_t NBIF_HWIP ; 
 TYPE_8__ NBIO_BASE ; 
 size_t NBIO_HWIP ; 
 TYPE_7__ OSSSYS_BASE ; 
 size_t OSSSYS_HWIP ; 
 TYPE_6__ SDMA0_BASE ; 
 size_t SDMA0_HWIP ; 
 TYPE_5__ SDMA1_BASE ; 
 size_t SDMA1_HWIP ; 
 TYPE_4__ SMUIO_BASE ; 
 size_t SMUIO_HWIP ; 
 TYPE_3__ THM_BASE ; 
 size_t THM_HWIP ; 
 TYPE_2__ UVD_BASE ; 
 size_t UVD_HWIP ; 
 TYPE_1__ VCE_BASE ; 
 size_t VCE_HWIP ; 

int vega20_reg_base_init(struct amdgpu_device *adev)
{
	/* HW has more IP blocks,  only initialized the blocke beend by our driver  */
	uint32_t i;
	for (i = 0 ; i < MAX_INSTANCE ; ++i) {
		adev->reg_offset[GC_HWIP][i] = (uint32_t *)(&(GC_BASE.instance[i]));
		adev->reg_offset[HDP_HWIP][i] = (uint32_t *)(&(HDP_BASE.instance[i]));
		adev->reg_offset[MMHUB_HWIP][i] = (uint32_t *)(&(MMHUB_BASE.instance[i]));
		adev->reg_offset[ATHUB_HWIP][i] = (uint32_t *)(&(ATHUB_BASE.instance[i]));
		adev->reg_offset[NBIO_HWIP][i] = (uint32_t *)(&(NBIO_BASE.instance[i]));
		adev->reg_offset[MP0_HWIP][i] = (uint32_t *)(&(MP0_BASE.instance[i]));
		adev->reg_offset[MP1_HWIP][i] = (uint32_t *)(&(MP1_BASE.instance[i]));
		adev->reg_offset[UVD_HWIP][i] = (uint32_t *)(&(UVD_BASE.instance[i]));
		adev->reg_offset[VCE_HWIP][i] = (uint32_t *)(&(VCE_BASE.instance[i]));
		adev->reg_offset[DF_HWIP][i] = (uint32_t *)(&(DF_BASE.instance[i]));
		adev->reg_offset[DCE_HWIP][i] = (uint32_t *)(&(DCE_BASE.instance[i]));
		adev->reg_offset[OSSSYS_HWIP][i] = (uint32_t *)(&(OSSSYS_BASE.instance[i]));
		adev->reg_offset[SDMA0_HWIP][i] = (uint32_t *)(&(SDMA0_BASE.instance[i]));
		adev->reg_offset[SDMA1_HWIP][i] = (uint32_t *)(&(SDMA1_BASE.instance[i]));
		adev->reg_offset[SMUIO_HWIP][i] = (uint32_t *)(&(SMUIO_BASE.instance[i]));
		adev->reg_offset[NBIF_HWIP][i] = (uint32_t *)(&(NBIO_BASE.instance[i]));
		adev->reg_offset[THM_HWIP][i] = (uint32_t *)(&(THM_BASE.instance[i]));
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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
              int _len_adev__i0__reg_offset0 = 1;
          adev[_i0].reg_offset = (unsigned long ***) malloc(_len_adev__i0__reg_offset0*sizeof(unsigned long **));
          for(int _j0 = 0; _j0 < _len_adev__i0__reg_offset0; _j0++) {
            int _len_adev__i0__reg_offset1 = 1;
            adev[_i0].reg_offset[_j0] = (unsigned long **) malloc(_len_adev__i0__reg_offset1*sizeof(unsigned long *));
            for(int _j1 = 0; _j1 < _len_adev__i0__reg_offset1; _j1++) {
              int _len_adev__i0__reg_offset2 = 1;
              adev[_i0].reg_offset[_j0][_j1] = (unsigned long *) malloc(_len_adev__i0__reg_offset2*sizeof(unsigned long));
              for(int _j2 = 0; _j2 < _len_adev__i0__reg_offset2; _j2++) {
                adev[_i0].reg_offset[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int benchRet = vega20_reg_base_init(adev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adev0; _aux++) {
          }
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
