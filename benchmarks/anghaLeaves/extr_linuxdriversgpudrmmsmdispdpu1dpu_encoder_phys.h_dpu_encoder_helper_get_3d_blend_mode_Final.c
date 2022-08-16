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
struct dpu_encoder_phys {scalar_t__ enable_state; scalar_t__ split_role; scalar_t__ topology_name; } ;
typedef  enum dpu_3d_blend_mode { ____Placeholder_dpu_3d_blend_mode } dpu_3d_blend_mode ;

/* Variables and functions */
 int BLEND_3D_H_ROW_INT ; 
 int BLEND_3D_NONE ; 
 scalar_t__ DPU_ENC_DISABLING ; 
 scalar_t__ DPU_RM_TOPOLOGY_DUALPIPE_3DMERGE ; 
 scalar_t__ ENC_ROLE_SOLO ; 

__attribute__((used)) static inline enum dpu_3d_blend_mode dpu_encoder_helper_get_3d_blend_mode(
		struct dpu_encoder_phys *phys_enc)
{
	if (!phys_enc || phys_enc->enable_state == DPU_ENC_DISABLING)
		return BLEND_3D_NONE;

	if (phys_enc->split_role == ENC_ROLE_SOLO &&
	    phys_enc->topology_name == DPU_RM_TOPOLOGY_DUALPIPE_3DMERGE)
		return BLEND_3D_H_ROW_INT;

	return BLEND_3D_NONE;
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
          int _len_phys_enc0 = 1;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
            phys_enc[_i0].enable_state = ((-2 * (next_i()%2)) + 1) * next_i();
        phys_enc[_i0].split_role = ((-2 * (next_i()%2)) + 1) * next_i();
        phys_enc[_i0].topology_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum dpu_3d_blend_mode benchRet = dpu_encoder_helper_get_3d_blend_mode(phys_enc);
          free(phys_enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
