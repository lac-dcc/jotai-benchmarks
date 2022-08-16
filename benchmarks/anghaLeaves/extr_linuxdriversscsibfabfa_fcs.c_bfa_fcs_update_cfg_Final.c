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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct bfa_lport_cfg_s {int /*<<< orphan*/  pwwn; int /*<<< orphan*/  nwwn; } ;
struct bfa_ioc_s {TYPE_1__* attr; } ;
struct TYPE_6__ {struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_4__* fcs; TYPE_2__ bport; } ;
struct bfa_fcs_s {struct bfa_fcs_fabric_s fabric; } ;
struct TYPE_8__ {TYPE_3__* bfa; } ;
struct TYPE_7__ {struct bfa_ioc_s ioc; } ;
struct TYPE_5__ {int /*<<< orphan*/  pwwn; int /*<<< orphan*/  nwwn; } ;

/* Variables and functions */

void
bfa_fcs_update_cfg(struct bfa_fcs_s *fcs)
{
	struct bfa_fcs_fabric_s *fabric = &fcs->fabric;
	struct bfa_lport_cfg_s *port_cfg = &fabric->bport.port_cfg;
	struct bfa_ioc_s *ioc = &fabric->fcs->bfa->ioc;

	port_cfg->nwwn = ioc->attr->nwwn;
	port_cfg->pwwn = ioc->attr->pwwn;
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
          int _len_fcs0 = 1;
          struct bfa_fcs_s * fcs = (struct bfa_fcs_s *) malloc(_len_fcs0*sizeof(struct bfa_fcs_s));
          for(int _i0 = 0; _i0 < _len_fcs0; _i0++) {
              int _len_fcs__i0__fabric_fcs0 = 1;
          fcs[_i0].fabric.fcs = (struct TYPE_8__ *) malloc(_len_fcs__i0__fabric_fcs0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_fcs__i0__fabric_fcs0; _j0++) {
              int _len_fcs__i0__fabric_fcs_bfa0 = 1;
          fcs[_i0].fabric.fcs->bfa = (struct TYPE_7__ *) malloc(_len_fcs__i0__fabric_fcs_bfa0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fcs__i0__fabric_fcs_bfa0; _j0++) {
              int _len_fcs__i0__fabric_fcs_bfa_ioc_attr0 = 1;
          fcs[_i0].fabric.fcs->bfa->ioc.attr = (struct TYPE_5__ *) malloc(_len_fcs__i0__fabric_fcs_bfa_ioc_attr0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fcs__i0__fabric_fcs_bfa_ioc_attr0; _j0++) {
            fcs[_i0].fabric.fcs->bfa->ioc.attr->pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fcs[_i0].fabric.fcs->bfa->ioc.attr->nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        fcs[_i0].fabric.bport.port_cfg.pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fcs[_i0].fabric.bport.port_cfg.nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcs_update_cfg(fcs);
          free(fcs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
