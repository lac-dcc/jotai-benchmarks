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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct skl_up_down_mixer_cfg {int dummy; } ;
struct skl_sst {int dummy; } ;
struct skl_src_module_cfg {int dummy; } ;
struct TYPE_2__ {int caps_size; } ;
struct skl_module_cfg {int m_type; TYPE_1__ formats_config; } ;
struct skl_cpr_cfg {int dummy; } ;
struct skl_base_outfmt_cfg {int dummy; } ;
struct skl_base_cfg {int dummy; } ;

/* Variables and functions */
#define  SKL_MODULE_TYPE_ALGO 134 
#define  SKL_MODULE_TYPE_BASE_OUTFMT 133 
#define  SKL_MODULE_TYPE_COPIER 132 
#define  SKL_MODULE_TYPE_KPB 131 
#define  SKL_MODULE_TYPE_MIC_SELECT 130 
#define  SKL_MODULE_TYPE_SRCINT 129 
#define  SKL_MODULE_TYPE_UPDWMIX 128 

__attribute__((used)) static u16 skl_get_module_param_size(struct skl_sst *ctx,
			struct skl_module_cfg *mconfig)
{
	u16 param_size;

	switch (mconfig->m_type) {
	case SKL_MODULE_TYPE_COPIER:
		param_size = sizeof(struct skl_cpr_cfg);
		param_size += mconfig->formats_config.caps_size;
		return param_size;

	case SKL_MODULE_TYPE_SRCINT:
		return sizeof(struct skl_src_module_cfg);

	case SKL_MODULE_TYPE_UPDWMIX:
		return sizeof(struct skl_up_down_mixer_cfg);

	case SKL_MODULE_TYPE_ALGO:
		param_size = sizeof(struct skl_base_cfg);
		param_size += mconfig->formats_config.caps_size;
		return param_size;

	case SKL_MODULE_TYPE_BASE_OUTFMT:
	case SKL_MODULE_TYPE_MIC_SELECT:
	case SKL_MODULE_TYPE_KPB:
		return sizeof(struct skl_base_outfmt_cfg);

	default:
		/*
		 * return only base cfg when no specific module type is
		 * specified
		 */
		return sizeof(struct skl_base_cfg);
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
          int _len_ctx0 = 1;
          struct skl_sst * ctx = (struct skl_sst *) malloc(_len_ctx0*sizeof(struct skl_sst));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mconfig0 = 1;
          struct skl_module_cfg * mconfig = (struct skl_module_cfg *) malloc(_len_mconfig0*sizeof(struct skl_module_cfg));
          for(int _i0 = 0; _i0 < _len_mconfig0; _i0++) {
            mconfig[_i0].m_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mconfig[_i0].formats_config.caps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skl_get_module_param_size(ctx,mconfig);
          printf("%d\n", benchRet); 
          free(ctx);
          free(mconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
