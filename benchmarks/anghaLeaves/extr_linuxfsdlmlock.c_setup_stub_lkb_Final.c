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
struct TYPE_2__ {int /*<<< orphan*/  h_nodeid; } ;
struct dlm_message {int /*<<< orphan*/  m_lkid; TYPE_1__ m_header; } ;
struct dlm_lkb {int /*<<< orphan*/  lkb_remid; int /*<<< orphan*/  lkb_nodeid; } ;
struct dlm_ls {struct dlm_lkb ls_stub_lkb; } ;

/* Variables and functions */

__attribute__((used)) static void setup_stub_lkb(struct dlm_ls *ls, struct dlm_message *ms)
{
	struct dlm_lkb *lkb = &ls->ls_stub_lkb;
	lkb->lkb_nodeid = ms->m_header.h_nodeid;
	lkb->lkb_remid = ms->m_lkid;
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
          int _len_ls0 = 1;
          struct dlm_ls * ls = (struct dlm_ls *) malloc(_len_ls0*sizeof(struct dlm_ls));
          for(int _i0 = 0; _i0 < _len_ls0; _i0++) {
            ls[_i0].ls_stub_lkb.lkb_remid = ((-2 * (next_i()%2)) + 1) * next_i();
        ls[_i0].ls_stub_lkb.lkb_nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms0 = 1;
          struct dlm_message * ms = (struct dlm_message *) malloc(_len_ms0*sizeof(struct dlm_message));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].m_lkid = ((-2 * (next_i()%2)) + 1) * next_i();
        ms[_i0].m_header.h_nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_stub_lkb(ls,ms);
          free(ls);
          free(ms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
