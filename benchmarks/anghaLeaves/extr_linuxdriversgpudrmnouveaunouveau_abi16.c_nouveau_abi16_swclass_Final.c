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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
typedef  int s32 ;

/* Variables and functions */
 int NVIF_CLASS_SW_GF100 ; 
 int NVIF_CLASS_SW_NV04 ; 
 int NVIF_CLASS_SW_NV10 ; 
 int NVIF_CLASS_SW_NV50 ; 
#define  NV_DEVICE_INFO_V0_CELSIUS 138 
#define  NV_DEVICE_INFO_V0_CURIE 137 
#define  NV_DEVICE_INFO_V0_FERMI 136 
#define  NV_DEVICE_INFO_V0_KELVIN 135 
#define  NV_DEVICE_INFO_V0_KEPLER 134 
#define  NV_DEVICE_INFO_V0_MAXWELL 133 
#define  NV_DEVICE_INFO_V0_PASCAL 132 
#define  NV_DEVICE_INFO_V0_RANKINE 131 
#define  NV_DEVICE_INFO_V0_TESLA 130 
#define  NV_DEVICE_INFO_V0_TNT 129 
#define  NV_DEVICE_INFO_V0_VOLTA 128 

s32
nouveau_abi16_swclass(struct nouveau_drm *drm)
{
	switch (drm->client.device.info.family) {
	case NV_DEVICE_INFO_V0_TNT:
		return NVIF_CLASS_SW_NV04;
	case NV_DEVICE_INFO_V0_CELSIUS:
	case NV_DEVICE_INFO_V0_KELVIN:
	case NV_DEVICE_INFO_V0_RANKINE:
	case NV_DEVICE_INFO_V0_CURIE:
		return NVIF_CLASS_SW_NV10;
	case NV_DEVICE_INFO_V0_TESLA:
		return NVIF_CLASS_SW_NV50;
	case NV_DEVICE_INFO_V0_FERMI:
	case NV_DEVICE_INFO_V0_KEPLER:
	case NV_DEVICE_INFO_V0_MAXWELL:
	case NV_DEVICE_INFO_V0_PASCAL:
	case NV_DEVICE_INFO_V0_VOLTA:
		return NVIF_CLASS_SW_GF100;
	}

	return 0x0000;
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
          int _len_drm0 = 1;
          struct nouveau_drm * drm = (struct nouveau_drm *) malloc(_len_drm0*sizeof(struct nouveau_drm));
          for(int _i0 = 0; _i0 < _len_drm0; _i0++) {
            drm[_i0].client.device.info.family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nouveau_abi16_swclass(drm);
          printf("%d\n", benchRet); 
          free(drm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_drm0 = 100;
          struct nouveau_drm * drm = (struct nouveau_drm *) malloc(_len_drm0*sizeof(struct nouveau_drm));
          for(int _i0 = 0; _i0 < _len_drm0; _i0++) {
            drm[_i0].client.device.info.family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nouveau_abi16_swclass(drm);
          printf("%d\n", benchRet); 
          free(drm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
