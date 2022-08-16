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
struct TYPE_4__ {void* delay_comp; void* ioc_recover; int /*<<< orphan*/  path_tov; int /*<<< orphan*/  num_sboot_luns; int /*<<< orphan*/  num_sboot_tgts; int /*<<< orphan*/  num_sgpgs; int /*<<< orphan*/  num_rspq_elems; int /*<<< orphan*/  num_reqq_elems; } ;
struct TYPE_3__ {scalar_t__ num_fwtio_reqs; int /*<<< orphan*/  num_cqs; int /*<<< orphan*/  num_uf_bufs; int /*<<< orphan*/  num_fcxp_reqs; int /*<<< orphan*/  num_tskim_reqs; int /*<<< orphan*/  num_ioim_reqs; int /*<<< orphan*/  num_rports; int /*<<< orphan*/  num_lports; int /*<<< orphan*/  num_fabrics; } ;
struct bfa_iocfc_cfg_s {TYPE_2__ drvcfg; TYPE_1__ fwcfg; } ;

/* Variables and functions */
 void* BFA_FALSE ; 
 int /*<<< orphan*/  BFA_FCPIM_PATHTOV_DEF ; 
 int /*<<< orphan*/  DEF_CFG_NUM_CQS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_FABRICS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_FCXP_REQS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_IOIM_REQS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_LPORTS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_REQQ_ELEMS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_RPORTS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_RSPQ_ELEMS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_SBOOT_LUNS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_SBOOT_TGTS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_SGPGS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_TSKIM_REQS ; 
 int /*<<< orphan*/  DEF_CFG_NUM_UF_BUFS ; 

void
bfa_cfg_get_default(struct bfa_iocfc_cfg_s *cfg)
{
	cfg->fwcfg.num_fabrics = DEF_CFG_NUM_FABRICS;
	cfg->fwcfg.num_lports = DEF_CFG_NUM_LPORTS;
	cfg->fwcfg.num_rports = DEF_CFG_NUM_RPORTS;
	cfg->fwcfg.num_ioim_reqs = DEF_CFG_NUM_IOIM_REQS;
	cfg->fwcfg.num_tskim_reqs = DEF_CFG_NUM_TSKIM_REQS;
	cfg->fwcfg.num_fcxp_reqs = DEF_CFG_NUM_FCXP_REQS;
	cfg->fwcfg.num_uf_bufs = DEF_CFG_NUM_UF_BUFS;
	cfg->fwcfg.num_cqs = DEF_CFG_NUM_CQS;
	cfg->fwcfg.num_fwtio_reqs = 0;

	cfg->drvcfg.num_reqq_elems = DEF_CFG_NUM_REQQ_ELEMS;
	cfg->drvcfg.num_rspq_elems = DEF_CFG_NUM_RSPQ_ELEMS;
	cfg->drvcfg.num_sgpgs = DEF_CFG_NUM_SGPGS;
	cfg->drvcfg.num_sboot_tgts = DEF_CFG_NUM_SBOOT_TGTS;
	cfg->drvcfg.num_sboot_luns = DEF_CFG_NUM_SBOOT_LUNS;
	cfg->drvcfg.path_tov = BFA_FCPIM_PATHTOV_DEF;
	cfg->drvcfg.ioc_recover = BFA_FALSE;
	cfg->drvcfg.delay_comp = BFA_FALSE;

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
          int _len_cfg0 = 1;
          struct bfa_iocfc_cfg_s * cfg = (struct bfa_iocfc_cfg_s *) malloc(_len_cfg0*sizeof(struct bfa_iocfc_cfg_s));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].drvcfg.path_tov = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].drvcfg.num_sboot_luns = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].drvcfg.num_sboot_tgts = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].drvcfg.num_sgpgs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].drvcfg.num_rspq_elems = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].drvcfg.num_reqq_elems = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_fwtio_reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_cqs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_uf_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_fcxp_reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_tskim_reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_ioim_reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_rports = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_lports = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].fwcfg.num_fabrics = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_cfg_get_default(cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
