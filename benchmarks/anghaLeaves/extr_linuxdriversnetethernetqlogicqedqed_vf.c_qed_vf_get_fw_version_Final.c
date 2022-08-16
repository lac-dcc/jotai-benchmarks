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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u16 ;
struct qed_hwfn {TYPE_2__* vf_iov_info; } ;
struct pf_vf_pfdev_info {int /*<<< orphan*/  fw_eng; int /*<<< orphan*/  fw_rev; int /*<<< orphan*/  fw_minor; int /*<<< orphan*/  fw_major; } ;
struct TYPE_3__ {struct pf_vf_pfdev_info pfdev_info; } ;
struct TYPE_4__ {TYPE_1__ acquire_resp; } ;

/* Variables and functions */

void qed_vf_get_fw_version(struct qed_hwfn *p_hwfn,
			   u16 *fw_major, u16 *fw_minor,
			   u16 *fw_rev, u16 *fw_eng)
{
	struct pf_vf_pfdev_info *info;

	info = &p_hwfn->vf_iov_info->acquire_resp.pfdev_info;

	*fw_major = info->fw_major;
	*fw_minor = info->fw_minor;
	*fw_rev = info->fw_rev;
	*fw_eng = info->fw_eng;
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__vf_iov_info0 = 1;
          p_hwfn[_i0].vf_iov_info = (struct TYPE_4__ *) malloc(_len_p_hwfn__i0__vf_iov_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__vf_iov_info0; _j0++) {
            p_hwfn[_i0].vf_iov_info->acquire_resp.pfdev_info.fw_eng = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].vf_iov_info->acquire_resp.pfdev_info.fw_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].vf_iov_info->acquire_resp.pfdev_info.fw_minor = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].vf_iov_info->acquire_resp.pfdev_info.fw_major = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fw_major0 = 1;
          int * fw_major = (int *) malloc(_len_fw_major0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_major0; _i0++) {
            fw_major[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_minor0 = 1;
          int * fw_minor = (int *) malloc(_len_fw_minor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_minor0; _i0++) {
            fw_minor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_rev0 = 1;
          int * fw_rev = (int *) malloc(_len_fw_rev0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_rev0; _i0++) {
            fw_rev[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fw_eng0 = 1;
          int * fw_eng = (int *) malloc(_len_fw_eng0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fw_eng0; _i0++) {
            fw_eng[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_vf_get_fw_version(p_hwfn,fw_major,fw_minor,fw_rev,fw_eng);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].vf_iov_info);
          }
          free(p_hwfn);
          free(fw_major);
          free(fw_minor);
          free(fw_rev);
          free(fw_eng);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
