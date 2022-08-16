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
struct TYPE_2__ {scalar_t__ dev_loss_tmo; } ;
struct nvme_fc_rport {TYPE_1__ remoteport; } ;
struct nvme_fc_port_info {scalar_t__ dev_loss_tmo; } ;

/* Variables and functions */
 scalar_t__ NVME_FC_DEFAULT_DEV_LOSS_TMO ; 

__attribute__((used)) static inline void
__nvme_fc_set_dev_loss_tmo(struct nvme_fc_rport *rport,
			struct nvme_fc_port_info *pinfo)
{
	if (pinfo->dev_loss_tmo)
		rport->remoteport.dev_loss_tmo = pinfo->dev_loss_tmo;
	else
		rport->remoteport.dev_loss_tmo = NVME_FC_DEFAULT_DEV_LOSS_TMO;
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
          int _len_rport0 = 1;
          struct nvme_fc_rport * rport = (struct nvme_fc_rport *) malloc(_len_rport0*sizeof(struct nvme_fc_rport));
          for(int _i0 = 0; _i0 < _len_rport0; _i0++) {
            rport[_i0].remoteport.dev_loss_tmo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pinfo0 = 1;
          struct nvme_fc_port_info * pinfo = (struct nvme_fc_port_info *) malloc(_len_pinfo0*sizeof(struct nvme_fc_port_info));
          for(int _i0 = 0; _i0 < _len_pinfo0; _i0++) {
            pinfo[_i0].dev_loss_tmo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __nvme_fc_set_dev_loss_tmo(rport,pinfo);
          free(rport);
          free(pinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
