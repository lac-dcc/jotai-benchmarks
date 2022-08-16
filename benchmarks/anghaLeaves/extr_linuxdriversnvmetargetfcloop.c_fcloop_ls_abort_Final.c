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
struct nvmefc_ls_req {int dummy; } ;
struct nvme_fc_remote_port {int dummy; } ;
struct nvme_fc_local_port {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
fcloop_ls_abort(struct nvme_fc_local_port *localport,
			struct nvme_fc_remote_port *remoteport,
				struct nvmefc_ls_req *lsreq)
{
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
          int _len_localport0 = 1;
          struct nvme_fc_local_port * localport = (struct nvme_fc_local_port *) malloc(_len_localport0*sizeof(struct nvme_fc_local_port));
          for(int _i0 = 0; _i0 < _len_localport0; _i0++) {
            localport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_remoteport0 = 1;
          struct nvme_fc_remote_port * remoteport = (struct nvme_fc_remote_port *) malloc(_len_remoteport0*sizeof(struct nvme_fc_remote_port));
          for(int _i0 = 0; _i0 < _len_remoteport0; _i0++) {
            remoteport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lsreq0 = 1;
          struct nvmefc_ls_req * lsreq = (struct nvmefc_ls_req *) malloc(_len_lsreq0*sizeof(struct nvmefc_ls_req));
          for(int _i0 = 0; _i0 < _len_lsreq0; _i0++) {
            lsreq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fcloop_ls_abort(localport,remoteport,lsreq);
          free(localport);
          free(remoteport);
          free(lsreq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
