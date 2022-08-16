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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int quant; int vop_flags; int motion_flags; int /*<<< orphan*/  vol_flags; TYPE_1__* zone; } ;
typedef  TYPE_2__ xvid_plg_data_t ;
struct xvid_context {int dummy; } ;
struct TYPE_4__ {scalar_t__ mode; } ;

/* Variables and functions */
 int XVID_ME_ADVANCEDDIAMOND16 ; 
 int XVID_ME_BFRAME_EARLYSTOP ; 
 int XVID_ME_CHROMA_BVOP ; 
 int XVID_ME_CHROMA_PVOP ; 
 int XVID_ME_EXTSEARCH16 ; 
 int XVID_ME_FASTREFINE16 ; 
 int XVID_ME_FAST_MODEINTERPOLATE ; 
 int XVID_ME_SKIP_DELTASEARCH ; 
 int /*<<< orphan*/  XVID_VOL_GMC ; 
 int XVID_VOP_FAST_MODEDECISION_RD ; 
 int XVID_VOP_HQACPRED ; 
 int XVID_VOP_INTER4V ; 
 int XVID_VOP_MODEDECISION_RD ; 
 int XVID_VOP_TRELLISQUANT ; 
 scalar_t__ XVID_ZONE_QUANT ; 

__attribute__((used)) static int xvid_ff_2pass_before(struct xvid_context *ref,
                                xvid_plg_data_t *param)
{
    int motion_remove;
    int motion_replacements;
    int vop_remove;

    /* Nothing to do here, result is changed too much */
    if (param->zone && param->zone->mode == XVID_ZONE_QUANT)
        return 0;

    /* We can implement a 'turbo' first pass mode here */
    param->quant = 2;

    /* Init values */
    motion_remove       = ~XVID_ME_CHROMA_PVOP &
                          ~XVID_ME_CHROMA_BVOP &
                          ~XVID_ME_EXTSEARCH16 &
                          ~XVID_ME_ADVANCEDDIAMOND16;
    motion_replacements = XVID_ME_FAST_MODEINTERPOLATE |
                          XVID_ME_SKIP_DELTASEARCH     |
                          XVID_ME_FASTREFINE16         |
                          XVID_ME_BFRAME_EARLYSTOP;
    vop_remove          = ~XVID_VOP_MODEDECISION_RD      &
                          ~XVID_VOP_FAST_MODEDECISION_RD &
                          ~XVID_VOP_TRELLISQUANT         &
                          ~XVID_VOP_INTER4V              &
                          ~XVID_VOP_HQACPRED;

    param->vol_flags    &= ~XVID_VOL_GMC;
    param->vop_flags    &= vop_remove;
    param->motion_flags &= motion_remove;
    param->motion_flags |= motion_replacements;

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
          int _len_ref0 = 1;
          struct xvid_context * ref = (struct xvid_context *) malloc(_len_ref0*sizeof(struct xvid_context));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 1;
          struct TYPE_5__ * param = (struct TYPE_5__ *) malloc(_len_param0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].quant = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].vop_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].motion_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].vol_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__zone0 = 1;
          param[_i0].zone = (struct TYPE_4__ *) malloc(_len_param__i0__zone0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_param__i0__zone0; _j0++) {
            param[_i0].zone->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xvid_ff_2pass_before(ref,param);
          printf("%d\n", benchRet); 
          free(ref);
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].zone);
          }
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
