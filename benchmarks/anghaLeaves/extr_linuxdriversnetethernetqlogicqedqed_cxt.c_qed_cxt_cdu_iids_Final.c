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
typedef  size_t u32 ;
struct qed_cxt_mngr {TYPE_1__* conn_cfg; } ;
struct qed_cdu_iids {int /*<<< orphan*/  per_vf_cids; int /*<<< orphan*/  pf_cids; } ;
struct TYPE_2__ {scalar_t__ cids_per_vf; scalar_t__ cid_count; } ;

/* Variables and functions */
 size_t MAX_CONN_TYPES ; 

__attribute__((used)) static void qed_cxt_cdu_iids(struct qed_cxt_mngr *p_mngr,
			     struct qed_cdu_iids *iids)
{
	u32 type;

	for (type = 0; type < MAX_CONN_TYPES; type++) {
		iids->pf_cids += p_mngr->conn_cfg[type].cid_count;
		iids->per_vf_cids += p_mngr->conn_cfg[type].cids_per_vf;
	}
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
          int _len_p_mngr0 = 1;
          struct qed_cxt_mngr * p_mngr = (struct qed_cxt_mngr *) malloc(_len_p_mngr0*sizeof(struct qed_cxt_mngr));
          for(int _i0 = 0; _i0 < _len_p_mngr0; _i0++) {
              int _len_p_mngr__i0__conn_cfg0 = 1;
          p_mngr[_i0].conn_cfg = (struct TYPE_2__ *) malloc(_len_p_mngr__i0__conn_cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_mngr__i0__conn_cfg0; _j0++) {
            p_mngr[_i0].conn_cfg->cids_per_vf = ((-2 * (next_i()%2)) + 1) * next_i();
        p_mngr[_i0].conn_cfg->cid_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iids0 = 1;
          struct qed_cdu_iids * iids = (struct qed_cdu_iids *) malloc(_len_iids0*sizeof(struct qed_cdu_iids));
          for(int _i0 = 0; _i0 < _len_iids0; _i0++) {
            iids[_i0].per_vf_cids = ((-2 * (next_i()%2)) + 1) * next_i();
        iids[_i0].pf_cids = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_cxt_cdu_iids(p_mngr,iids);
          for(int _aux = 0; _aux < _len_p_mngr0; _aux++) {
          free(p_mngr[_aux].conn_cfg);
          }
          free(p_mngr);
          free(iids);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
