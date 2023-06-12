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
       0            empty\n\
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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_6__ {int grp; int pu; int chk; int sec; } ;
struct TYPE_5__ {int ch; int lun; int blk; int pg; int pl; int sec; } ;
struct TYPE_4__ {int line; int is_cached; } ;
struct ppa_addr {TYPE_3__ m; TYPE_2__ g; TYPE_1__ c; scalar_t__ ppa; } ;
struct nvm_addrf {int ch_mask; int ch_offset; int lun_mask; int lun_offset; int chk_mask; int chk_offset; int sec_mask; int sec_offset; } ;
struct pblk {struct nvm_addrf addrf; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ version; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct nvm_addrf_12 {int ch_mask; int ch_offset; int lun_mask; int lun_offset; int blk_mask; int blk_offset; int pg_mask; int pg_offset; int pln_mask; int pln_offset; int sec_mask; int sec_offset; } ;

/* Variables and functions */
 scalar_t__ ADDR_EMPTY ; 
 scalar_t__ NVM_OCSSD_SPEC_12 ; 

__attribute__((used)) static inline struct ppa_addr pblk_ppa32_to_ppa64(struct pblk *pblk, u32 ppa32)
{
	struct ppa_addr ppa64;

	ppa64.ppa = 0;

	if (ppa32 == -1) {
		ppa64.ppa = ADDR_EMPTY;
	} else if (ppa32 & (1U << 31)) {
		ppa64.c.line = ppa32 & ((~0U) >> 1);
		ppa64.c.is_cached = 1;
	} else {
		struct nvm_tgt_dev *dev = pblk->dev;
		struct nvm_geo *geo = &dev->geo;

		if (geo->version == NVM_OCSSD_SPEC_12) {
			struct nvm_addrf_12 *ppaf =
					(struct nvm_addrf_12 *)&pblk->addrf;

			ppa64.g.ch = (ppa32 & ppaf->ch_mask) >>
							ppaf->ch_offset;
			ppa64.g.lun = (ppa32 & ppaf->lun_mask) >>
							ppaf->lun_offset;
			ppa64.g.blk = (ppa32 & ppaf->blk_mask) >>
							ppaf->blk_offset;
			ppa64.g.pg = (ppa32 & ppaf->pg_mask) >>
							ppaf->pg_offset;
			ppa64.g.pl = (ppa32 & ppaf->pln_mask) >>
							ppaf->pln_offset;
			ppa64.g.sec = (ppa32 & ppaf->sec_mask) >>
							ppaf->sec_offset;
		} else {
			struct nvm_addrf *lbaf = &pblk->addrf;

			ppa64.m.grp = (ppa32 & lbaf->ch_mask) >>
							lbaf->ch_offset;
			ppa64.m.pu = (ppa32 & lbaf->lun_mask) >>
							lbaf->lun_offset;
			ppa64.m.chk = (ppa32 & lbaf->chk_mask) >>
							lbaf->chk_offset;
			ppa64.m.sec = (ppa32 & lbaf->sec_mask) >>
							lbaf->sec_offset;
		}
	}

	return ppa64;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int ppa32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pblk0 = 1;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              pblk[_i0].addrf.ch_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.lun_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.lun_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.chk_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.chk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.sec_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          pblk[_i0].addrf.sec_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pblk__i0__dev0 = 1;
          pblk[_i0].dev = (struct nvm_tgt_dev *) malloc(_len_pblk__i0__dev0*sizeof(struct nvm_tgt_dev));
          for(int _j0 = 0; _j0 < _len_pblk__i0__dev0; _j0++) {
              pblk[_i0].dev->geo.version = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          struct ppa_addr benchRet = pblk_ppa32_to_ppa64(pblk,ppa32);
          printf("%ld\n", benchRet.ppa);
          for(int _aux = 0; _aux < _len_pblk0; _aux++) {
          free(pblk[_aux].dev);
          }
          free(pblk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
