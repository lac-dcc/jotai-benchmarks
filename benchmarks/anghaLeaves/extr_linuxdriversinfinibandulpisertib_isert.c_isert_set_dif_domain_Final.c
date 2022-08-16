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
struct se_cmd {scalar_t__ prot_type; int /*<<< orphan*/  reftag_seed; TYPE_2__* se_dev; } ;
struct TYPE_7__ {int apptag_check_mask; int app_escape; int ref_escape; int ref_remap; int /*<<< orphan*/  ref_tag; int /*<<< orphan*/  pi_interval; int /*<<< orphan*/  bg_type; } ;
struct TYPE_8__ {TYPE_3__ dif; } ;
struct ib_sig_domain {TYPE_4__ sig; int /*<<< orphan*/  sig_type; } ;
struct ib_sig_attrs {int dummy; } ;
struct TYPE_5__ {int /*<<< orphan*/  block_size; } ;
struct TYPE_6__ {TYPE_1__ dev_attrib; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_SIG_TYPE_T10_DIF ; 
 int /*<<< orphan*/  IB_T10DIF_CRC ; 
 scalar_t__ TARGET_DIF_TYPE1_PROT ; 
 scalar_t__ TARGET_DIF_TYPE2_PROT ; 

__attribute__((used)) static inline void
isert_set_dif_domain(struct se_cmd *se_cmd, struct ib_sig_attrs *sig_attrs,
		     struct ib_sig_domain *domain)
{
	domain->sig_type = IB_SIG_TYPE_T10_DIF;
	domain->sig.dif.bg_type = IB_T10DIF_CRC;
	domain->sig.dif.pi_interval = se_cmd->se_dev->dev_attrib.block_size;
	domain->sig.dif.ref_tag = se_cmd->reftag_seed;
	/*
	 * At the moment we hard code those, but if in the future
	 * the target core would like to use it, we will take it
	 * from se_cmd.
	 */
	domain->sig.dif.apptag_check_mask = 0xffff;
	domain->sig.dif.app_escape = true;
	domain->sig.dif.ref_escape = true;
	if (se_cmd->prot_type == TARGET_DIF_TYPE1_PROT ||
	    se_cmd->prot_type == TARGET_DIF_TYPE2_PROT)
		domain->sig.dif.ref_remap = true;
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
          int _len_se_cmd0 = 1;
          struct se_cmd * se_cmd = (struct se_cmd *) malloc(_len_se_cmd0*sizeof(struct se_cmd));
          for(int _i0 = 0; _i0 < _len_se_cmd0; _i0++) {
            se_cmd[_i0].prot_type = ((-2 * (next_i()%2)) + 1) * next_i();
        se_cmd[_i0].reftag_seed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_se_cmd__i0__se_dev0 = 1;
          se_cmd[_i0].se_dev = (struct TYPE_6__ *) malloc(_len_se_cmd__i0__se_dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_se_cmd__i0__se_dev0; _j0++) {
            se_cmd[_i0].se_dev->dev_attrib.block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sig_attrs0 = 1;
          struct ib_sig_attrs * sig_attrs = (struct ib_sig_attrs *) malloc(_len_sig_attrs0*sizeof(struct ib_sig_attrs));
          for(int _i0 = 0; _i0 < _len_sig_attrs0; _i0++) {
            sig_attrs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_domain0 = 1;
          struct ib_sig_domain * domain = (struct ib_sig_domain *) malloc(_len_domain0*sizeof(struct ib_sig_domain));
          for(int _i0 = 0; _i0 < _len_domain0; _i0++) {
            domain[_i0].sig.dif.apptag_check_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.app_escape = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.ref_escape = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.ref_remap = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.ref_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.pi_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig.dif.bg_type = ((-2 * (next_i()%2)) + 1) * next_i();
        domain[_i0].sig_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          isert_set_dif_domain(se_cmd,sig_attrs,domain);
          for(int _aux = 0; _aux < _len_se_cmd0; _aux++) {
          free(se_cmd[_aux].se_dev);
          }
          free(se_cmd);
          free(sig_attrs);
          free(domain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
