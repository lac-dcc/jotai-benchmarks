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
struct TYPE_2__ {scalar_t__ sdma_vm_addr; } ;
struct queue {TYPE_1__ properties; } ;
struct qcm_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void init_sdma_vm_v9(struct device_queue_manager *dqm, struct queue *q,
			    struct qcm_process_device *qpd)
{
	/* Not needed on SDMAv4 any more */
	q->properties.sdma_vm_addr = 0;
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
          int _len_dqm0 = 1;
          struct device_queue_manager * dqm = (struct device_queue_manager *) malloc(_len_dqm0*sizeof(struct device_queue_manager));
          for(int _i0 = 0; _i0 < _len_dqm0; _i0++) {
            dqm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          struct queue * q = (struct queue *) malloc(_len_q0*sizeof(struct queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].properties.sdma_vm_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qpd0 = 1;
          struct qcm_process_device * qpd = (struct qcm_process_device *) malloc(_len_qpd0*sizeof(struct qcm_process_device));
          for(int _i0 = 0; _i0 < _len_qpd0; _i0++) {
            qpd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sdma_vm_v9(dqm,q,qpd);
          free(dqm);
          free(q);
          free(qpd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
