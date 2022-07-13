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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct rbd_obj_request {TYPE_1__* img_request; struct ceph_osd_request* osd_req; } ;
struct ceph_osd_request {int /*<<< orphan*/  r_snapid; int /*<<< orphan*/  r_flags; } ;
struct TYPE_2__ {int /*<<< orphan*/  snap_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  CEPH_OSD_FLAG_READ ; 

__attribute__((used)) static void rbd_osd_req_format_read(struct rbd_obj_request *obj_request)
{
	struct ceph_osd_request *osd_req = obj_request->osd_req;

	osd_req->r_flags = CEPH_OSD_FLAG_READ;
	osd_req->r_snapid = obj_request->img_request->snap_id;
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
          int _len_obj_request0 = 1;
          struct rbd_obj_request * obj_request = (struct rbd_obj_request *) malloc(_len_obj_request0*sizeof(struct rbd_obj_request));
          for(int _i0 = 0; _i0 < _len_obj_request0; _i0++) {
              int _len_obj_request__i0__img_request0 = 1;
          obj_request[_i0].img_request = (struct TYPE_2__ *) malloc(_len_obj_request__i0__img_request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__img_request0; _j0++) {
            obj_request[_i0].img_request->snap_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj_request__i0__osd_req0 = 1;
          obj_request[_i0].osd_req = (struct ceph_osd_request *) malloc(_len_obj_request__i0__osd_req0*sizeof(struct ceph_osd_request));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__osd_req0; _j0++) {
            obj_request[_i0].osd_req->r_snapid = ((-2 * (next_i()%2)) + 1) * next_i();
        obj_request[_i0].osd_req->r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rbd_osd_req_format_read(obj_request);
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].img_request);
          }
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].osd_req);
          }
          free(obj_request);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_obj_request0 = 65025;
          struct rbd_obj_request * obj_request = (struct rbd_obj_request *) malloc(_len_obj_request0*sizeof(struct rbd_obj_request));
          for(int _i0 = 0; _i0 < _len_obj_request0; _i0++) {
              int _len_obj_request__i0__img_request0 = 1;
          obj_request[_i0].img_request = (struct TYPE_2__ *) malloc(_len_obj_request__i0__img_request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__img_request0; _j0++) {
            obj_request[_i0].img_request->snap_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj_request__i0__osd_req0 = 1;
          obj_request[_i0].osd_req = (struct ceph_osd_request *) malloc(_len_obj_request__i0__osd_req0*sizeof(struct ceph_osd_request));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__osd_req0; _j0++) {
            obj_request[_i0].osd_req->r_snapid = ((-2 * (next_i()%2)) + 1) * next_i();
        obj_request[_i0].osd_req->r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rbd_osd_req_format_read(obj_request);
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].img_request);
          }
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].osd_req);
          }
          free(obj_request);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_obj_request0 = 100;
          struct rbd_obj_request * obj_request = (struct rbd_obj_request *) malloc(_len_obj_request0*sizeof(struct rbd_obj_request));
          for(int _i0 = 0; _i0 < _len_obj_request0; _i0++) {
              int _len_obj_request__i0__img_request0 = 1;
          obj_request[_i0].img_request = (struct TYPE_2__ *) malloc(_len_obj_request__i0__img_request0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__img_request0; _j0++) {
            obj_request[_i0].img_request->snap_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj_request__i0__osd_req0 = 1;
          obj_request[_i0].osd_req = (struct ceph_osd_request *) malloc(_len_obj_request__i0__osd_req0*sizeof(struct ceph_osd_request));
          for(int _j0 = 0; _j0 < _len_obj_request__i0__osd_req0; _j0++) {
            obj_request[_i0].osd_req->r_snapid = ((-2 * (next_i()%2)) + 1) * next_i();
        obj_request[_i0].osd_req->r_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rbd_osd_req_format_read(obj_request);
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].img_request);
          }
          for(int _aux = 0; _aux < _len_obj_request0; _aux++) {
          free(obj_request[_aux].osd_req);
          }
          free(obj_request);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
