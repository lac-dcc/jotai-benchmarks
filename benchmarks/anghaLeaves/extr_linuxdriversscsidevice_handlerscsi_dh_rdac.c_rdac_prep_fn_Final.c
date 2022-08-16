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
struct scsi_device {struct rdac_dh_data* handler_data; } ;
struct request {int /*<<< orphan*/  rq_flags; } ;
struct rdac_dh_data {scalar_t__ state; } ;

/* Variables and functions */
 int BLKPREP_KILL ; 
 int BLKPREP_OK ; 
 scalar_t__ RDAC_STATE_ACTIVE ; 
 int /*<<< orphan*/  RQF_QUIET ; 

__attribute__((used)) static int rdac_prep_fn(struct scsi_device *sdev, struct request *req)
{
	struct rdac_dh_data *h = sdev->handler_data;
	int ret = BLKPREP_OK;

	if (h->state != RDAC_STATE_ACTIVE) {
		ret = BLKPREP_KILL;
		req->rq_flags |= RQF_QUIET;
	}
	return ret;

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
          int _len_sdev0 = 1;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
              int _len_sdev__i0__handler_data0 = 1;
          sdev[_i0].handler_data = (struct rdac_dh_data *) malloc(_len_sdev__i0__handler_data0*sizeof(struct rdac_dh_data));
          for(int _j0 = 0; _j0 < _len_sdev__i0__handler_data0; _j0++) {
            sdev[_i0].handler_data->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_req0 = 1;
          struct request * req = (struct request *) malloc(_len_req0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].rq_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rdac_prep_fn(sdev,req);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdev0; _aux++) {
          free(sdev[_aux].handler_data);
          }
          free(sdev);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
