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
struct msm_display_topology {int num_lm; int num_intf; scalar_t__ num_enc; } ;
struct drm_display_mode {scalar_t__ vdisplay; } ;
struct dpu_kms {int dummy; } ;
struct dpu_encoder_virt {scalar_t__* phys_encs; } ;

/* Variables and functions */
 int MAX_PHYS_ENCODERS_PER_VIRTUAL ; 
 scalar_t__ MAX_VDISPLAY_SPLIT ; 

__attribute__((used)) static struct msm_display_topology dpu_encoder_get_topology(
			struct dpu_encoder_virt *dpu_enc,
			struct dpu_kms *dpu_kms,
			struct drm_display_mode *mode)
{
	struct msm_display_topology topology;
	int i, intf_count = 0;

	for (i = 0; i < MAX_PHYS_ENCODERS_PER_VIRTUAL; i++)
		if (dpu_enc->phys_encs[i])
			intf_count++;

	/* User split topology for width > 1080 */
	topology.num_lm = (mode->vdisplay > MAX_VDISPLAY_SPLIT) ? 2 : 1;
	topology.num_enc = 0;
	topology.num_intf = intf_count;

	return topology;
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
          int _len_dpu_enc0 = 1;
          struct dpu_encoder_virt * dpu_enc = (struct dpu_encoder_virt *) malloc(_len_dpu_enc0*sizeof(struct dpu_encoder_virt));
          for(int _i0 = 0; _i0 < _len_dpu_enc0; _i0++) {
              int _len_dpu_enc__i0__phys_encs0 = 1;
          dpu_enc[_i0].phys_encs = (long *) malloc(_len_dpu_enc__i0__phys_encs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dpu_enc__i0__phys_encs0; _j0++) {
            dpu_enc[_i0].phys_encs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dpu_kms0 = 1;
          struct dpu_kms * dpu_kms = (struct dpu_kms *) malloc(_len_dpu_kms0*sizeof(struct dpu_kms));
          for(int _i0 = 0; _i0 < _len_dpu_kms0; _i0++) {
            dpu_kms[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct msm_display_topology benchRet = dpu_encoder_get_topology(dpu_enc,dpu_kms,mode);
          printf("%d\n", benchRet.num_lm);
          printf("%d\n", benchRet.num_intf);
          printf("%ld\n", benchRet.num_enc);
          for(int _aux = 0; _aux < _len_dpu_enc0; _aux++) {
          free(dpu_enc[_aux].phys_encs);
          }
          free(dpu_enc);
          free(dpu_kms);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
