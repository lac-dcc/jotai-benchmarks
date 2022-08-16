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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct qed_hwfn {TYPE_3__* vf_iov_info; } ;
typedef  enum BAR_ID { ____Placeholder_BAR_ID } BAR_ID ;
struct TYPE_4__ {int bar_size; } ;
struct TYPE_5__ {TYPE_1__ pfdev_info; } ;
struct TYPE_6__ {TYPE_2__ acquire_resp; } ;

/* Variables and functions */
 int BAR_ID_0 ; 

u32 qed_vf_hw_bar_size(struct qed_hwfn *p_hwfn, enum BAR_ID bar_id)
{
	u32 bar_size;

	/* Regview size is fixed */
	if (bar_id == BAR_ID_0)
		return 1 << 17;

	/* Doorbell is received from PF */
	bar_size = p_hwfn->vf_iov_info->acquire_resp.pfdev_info.bar_size;
	if (bar_size)
		return 1 << bar_size;
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
          enum BAR_ID bar_id = 0;
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__vf_iov_info0 = 1;
          p_hwfn[_i0].vf_iov_info = (struct TYPE_6__ *) malloc(_len_p_hwfn__i0__vf_iov_info0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__vf_iov_info0; _j0++) {
            p_hwfn[_i0].vf_iov_info->acquire_resp.pfdev_info.bar_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qed_vf_hw_bar_size(p_hwfn,bar_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].vf_iov_info);
          }
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
