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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_8__ {int /*<<< orphan*/  base; } ;
struct TYPE_7__ {int /*<<< orphan*/  base; } ;
struct TYPE_6__ {int /*<<< orphan*/  base; } ;
struct dpu_sspp_sub_blks {TYPE_4__ csc_blk; TYPE_3__ scaler_blk; TYPE_2__ src_blk; } ;
struct dpu_hw_pipe {TYPE_1__* cap; } ;
struct TYPE_5__ {struct dpu_sspp_sub_blks* sblk; } ;

/* Variables and functions */
#define  DPU_SSPP_CSC 133 
#define  DPU_SSPP_CSC_10BIT 132 
#define  DPU_SSPP_SCALER_QSEED2 131 
#define  DPU_SSPP_SCALER_QSEED3 130 
#define  DPU_SSPP_SCALER_RGB 129 
#define  DPU_SSPP_SRC 128 
 int EINVAL ; 

__attribute__((used)) static inline int _sspp_subblk_offset(struct dpu_hw_pipe *ctx,
		int s_id,
		u32 *idx)
{
	int rc = 0;
	const struct dpu_sspp_sub_blks *sblk = ctx->cap->sblk;

	if (!ctx)
		return -EINVAL;

	switch (s_id) {
	case DPU_SSPP_SRC:
		*idx = sblk->src_blk.base;
		break;
	case DPU_SSPP_SCALER_QSEED2:
	case DPU_SSPP_SCALER_QSEED3:
	case DPU_SSPP_SCALER_RGB:
		*idx = sblk->scaler_blk.base;
		break;
	case DPU_SSPP_CSC:
	case DPU_SSPP_CSC_10BIT:
		*idx = sblk->csc_blk.base;
		break;
	default:
		rc = -EINVAL;
	}

	return rc;
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
          int s_id = 100;
          int _len_ctx0 = 1;
          struct dpu_hw_pipe * ctx = (struct dpu_hw_pipe *) malloc(_len_ctx0*sizeof(struct dpu_hw_pipe));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__cap0 = 1;
          ctx[_i0].cap = (struct TYPE_5__ *) malloc(_len_ctx__i0__cap0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap0; _j0++) {
              int _len_ctx__i0__cap_sblk0 = 1;
          ctx[_i0].cap->sblk = (struct dpu_sspp_sub_blks *) malloc(_len_ctx__i0__cap_sblk0*sizeof(struct dpu_sspp_sub_blks));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cap_sblk0; _j0++) {
            ctx[_i0].cap->sblk->csc_blk.base = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].cap->sblk->scaler_blk.base = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].cap->sblk->src_blk.base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_idx0 = 1;
          int * idx = (int *) malloc(_len_idx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idx0; _i0++) {
            idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _sspp_subblk_offset(ctx,s_id,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cap);
          }
          free(ctx);
          free(idx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
