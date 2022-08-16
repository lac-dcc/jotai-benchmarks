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
struct vdec_vp9_vsi {scalar_t__ sf_frm_cnt; scalar_t__ sf_frm_idx; } ;
struct vdec_vp9_inst {struct vdec_vp9_vsi* vsi; } ;

/* Variables and functions */

__attribute__((used)) static bool vp9_is_last_sub_frm(struct vdec_vp9_inst *inst)
{
	struct vdec_vp9_vsi *vsi = inst->vsi;

	if (vsi->sf_frm_cnt <= 0 || vsi->sf_frm_idx == vsi->sf_frm_cnt)
		return true;

	return false;
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
          int _len_inst0 = 1;
          struct vdec_vp9_inst * inst = (struct vdec_vp9_inst *) malloc(_len_inst0*sizeof(struct vdec_vp9_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
              int _len_inst__i0__vsi0 = 1;
          inst[_i0].vsi = (struct vdec_vp9_vsi *) malloc(_len_inst__i0__vsi0*sizeof(struct vdec_vp9_vsi));
          for(int _j0 = 0; _j0 < _len_inst__i0__vsi0; _j0++) {
            inst[_i0].vsi->sf_frm_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].vsi->sf_frm_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vp9_is_last_sub_frm(inst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].vsi);
          }
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
