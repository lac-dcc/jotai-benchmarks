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
struct TYPE_2__ {int /*<<< orphan*/  sgi; int /*<<< orphan*/  ch_offset; int /*<<< orphan*/  bwmode; int /*<<< orphan*/  ht_option; } ;
struct sta_info {TYPE_1__ htpriv; int /*<<< orphan*/  raid; int /*<<< orphan*/  qos_option; } ;
struct pkt_attrib {void* retry_ctrl; void* ampdu_en; int /*<<< orphan*/  sgi; int /*<<< orphan*/  ch_offset; int /*<<< orphan*/  bwmode; int /*<<< orphan*/  raid; int /*<<< orphan*/  ht_en; int /*<<< orphan*/  qos_en; scalar_t__ triggered; scalar_t__ eosp; scalar_t__ mdata; } ;

/* Variables and functions */
 void* _FALSE ; 

__attribute__((used)) static void update_attrib_phy_info(struct pkt_attrib *pattrib, struct sta_info *psta)
{
	/*if(psta->rtsen)	
		pattrib->vcs_mode = RTS_CTS;	
	else if(psta->cts2self)	
		pattrib->vcs_mode = CTS_TO_SELF;	
	else
		pattrib->vcs_mode = NONE_VCS;*/
	
	pattrib->mdata = 0;
	pattrib->eosp = 0;
	pattrib->triggered=0;
	
	//qos_en, ht_en, init rate, ,bw, ch_offset, sgi
	pattrib->qos_en = psta->qos_option;
	pattrib->ht_en = psta->htpriv.ht_option;
	pattrib->raid = psta->raid;
	pattrib->bwmode = psta->htpriv.bwmode;
	pattrib->ch_offset = psta->htpriv.ch_offset;
	pattrib->sgi= psta->htpriv.sgi;
	pattrib->ampdu_en = _FALSE;

	//if(pattrib->ht_en && psta->htpriv.ampdu_enable)
	//{
	//	if(psta->htpriv.agg_enable_bitmap & BIT(pattrib->priority))
	//		pattrib->ampdu_en = _TRUE;
	//}	


	pattrib->retry_ctrl = _FALSE;

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
          int _len_pattrib0 = 1;
          struct pkt_attrib * pattrib = (struct pkt_attrib *) malloc(_len_pattrib0*sizeof(struct pkt_attrib));
          for(int _i0 = 0; _i0 < _len_pattrib0; _i0++) {
            pattrib[_i0].sgi = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].bwmode = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].raid = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].ht_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].qos_en = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].triggered = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].eosp = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].mdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_psta0 = 1;
          struct sta_info * psta = (struct sta_info *) malloc(_len_psta0*sizeof(struct sta_info));
          for(int _i0 = 0; _i0 < _len_psta0; _i0++) {
            psta[_i0].htpriv.sgi = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].htpriv.ch_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].htpriv.bwmode = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].htpriv.ht_option = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].raid = ((-2 * (next_i()%2)) + 1) * next_i();
        psta[_i0].qos_option = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_attrib_phy_info(pattrib,psta);
          free(pattrib);
          free(psta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
