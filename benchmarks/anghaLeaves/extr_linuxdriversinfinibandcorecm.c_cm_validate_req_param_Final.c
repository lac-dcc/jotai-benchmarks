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
struct ib_cm_req_param {scalar_t__ qp_type; scalar_t__ private_data_len; TYPE_2__* primary_path; TYPE_1__* alternate_path; scalar_t__ private_data; scalar_t__ peer_to_peer; } ;
struct TYPE_4__ {scalar_t__ pkey; scalar_t__ mtu; } ;
struct TYPE_3__ {scalar_t__ pkey; scalar_t__ mtu; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ IB_CM_REQ_PRIVATE_DATA_SIZE ; 
 scalar_t__ IB_QPT_RC ; 
 scalar_t__ IB_QPT_UC ; 
 scalar_t__ IB_QPT_XRC_INI ; 

__attribute__((used)) static int cm_validate_req_param(struct ib_cm_req_param *param)
{
	/* peer-to-peer not supported */
	if (param->peer_to_peer)
		return -EINVAL;

	if (!param->primary_path)
		return -EINVAL;

	if (param->qp_type != IB_QPT_RC && param->qp_type != IB_QPT_UC &&
	    param->qp_type != IB_QPT_XRC_INI)
		return -EINVAL;

	if (param->private_data &&
	    param->private_data_len > IB_CM_REQ_PRIVATE_DATA_SIZE)
		return -EINVAL;

	if (param->alternate_path &&
	    (param->alternate_path->pkey != param->primary_path->pkey ||
	     param->alternate_path->mtu != param->primary_path->mtu))
		return -EINVAL;

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
          int _len_param0 = 1;
          struct ib_cm_req_param * param = (struct ib_cm_req_param *) malloc(_len_param0*sizeof(struct ib_cm_req_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].private_data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_param__i0__primary_path0 = 1;
          param[_i0].primary_path = (struct TYPE_4__ *) malloc(_len_param__i0__primary_path0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_param__i0__primary_path0; _j0++) {
            param[_i0].primary_path->pkey = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].primary_path->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param__i0__alternate_path0 = 1;
          param[_i0].alternate_path = (struct TYPE_3__ *) malloc(_len_param__i0__alternate_path0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_param__i0__alternate_path0; _j0++) {
            param[_i0].alternate_path->pkey = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].alternate_path->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        param[_i0].private_data = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].peer_to_peer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cm_validate_req_param(param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].primary_path);
          }
          for(int _aux = 0; _aux < _len_param0; _aux++) {
          free(param[_aux].alternate_path);
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
