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
       0            big-arr\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int icr; int tbe; int frtt; int rif; int rdf; int nrm; int trm; int cdf; int adtf; scalar_t__ mcr; int /*<<< orphan*/  pcr; int /*<<< orphan*/  class_type; } ;
typedef  TYPE_1__ srv_cls_param_t ;
struct TYPE_6__ {int /*<<< orphan*/  LineRate; } ;
typedef  TYPE_2__ IADEV ;

/* Variables and functions */
 int /*<<< orphan*/  ATM_ABR ; 

__attribute__((used)) static void init_abr_vc (IADEV *dev, srv_cls_param_t *srv_p) {
  srv_p->class_type = ATM_ABR;
  srv_p->pcr        = dev->LineRate;
  srv_p->mcr        = 0;
  srv_p->icr        = 0x055cb7;
  srv_p->tbe        = 0xffffff;
  srv_p->frtt       = 0x3a;
  srv_p->rif        = 0xf;
  srv_p->rdf        = 0xb;
  srv_p->nrm        = 0x4;
  srv_p->trm        = 0x7;
  srv_p->cdf        = 0x3;
  srv_p->adtf       = 50;
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

    // big-arr
    case 0:
    {
          int _len_dev0 = 1;
          struct TYPE_6__ * dev = (struct TYPE_6__ *) malloc(_len_dev0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->LineRate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srv_p0 = 1;
          struct TYPE_5__ * srv_p = (struct TYPE_5__ *) malloc(_len_srv_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_srv_p0; _i0++) {
            srv_p->icr = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->tbe = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->frtt = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->rif = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->rdf = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->nrm = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->trm = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->cdf = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->adtf = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->mcr = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->pcr = ((-2 * (next_i()%2)) + 1) * next_i();
        srv_p->class_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_abr_vc(dev,srv_p);
          free(dev);
          free(srv_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
