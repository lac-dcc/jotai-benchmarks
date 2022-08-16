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
typedef  scalar_t__ u8 ;
struct qlcnic_bc_trans {scalar_t__ curr_rsp_frag; scalar_t__ curr_req_frag; void* trans_state; TYPE_1__* req_hdr; TYPE_2__* rsp_hdr; } ;
struct TYPE_4__ {scalar_t__ num_frags; } ;
struct TYPE_3__ {scalar_t__ num_frags; } ;

/* Variables and functions */
 scalar_t__ QLC_BC_RESPONSE ; 
 void* QLC_END ; 
 void* QLC_INIT ; 
 void* QLC_WAIT_FOR_RESP ; 

__attribute__((used)) static void qlcnic_sriov_handle_multi_frags(struct qlcnic_bc_trans *trans,
					    u8 type)
{
	if (type == QLC_BC_RESPONSE) {
		trans->curr_rsp_frag++;
		if (trans->curr_rsp_frag < trans->rsp_hdr->num_frags)
			trans->trans_state = QLC_INIT;
		else
			trans->trans_state = QLC_END;
	} else {
		trans->curr_req_frag++;
		if (trans->curr_req_frag < trans->req_hdr->num_frags)
			trans->trans_state = QLC_INIT;
		else
			trans->trans_state = QLC_WAIT_FOR_RESP;
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
          long type = 100;
          int _len_trans0 = 1;
          struct qlcnic_bc_trans * trans = (struct qlcnic_bc_trans *) malloc(_len_trans0*sizeof(struct qlcnic_bc_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
            trans[_i0].curr_rsp_frag = ((-2 * (next_i()%2)) + 1) * next_i();
        trans[_i0].curr_req_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_trans__i0__req_hdr0 = 1;
          trans[_i0].req_hdr = (struct TYPE_3__ *) malloc(_len_trans__i0__req_hdr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_trans__i0__req_hdr0; _j0++) {
            trans[_i0].req_hdr->num_frags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_trans__i0__rsp_hdr0 = 1;
          trans[_i0].rsp_hdr = (struct TYPE_4__ *) malloc(_len_trans__i0__rsp_hdr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_trans__i0__rsp_hdr0; _j0++) {
            trans[_i0].rsp_hdr->num_frags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qlcnic_sriov_handle_multi_frags(trans,type);
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].req_hdr);
          }
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].rsp_hdr);
          }
          free(trans);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
