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
struct dlm_message {int m_flags; int /*<<< orphan*/  m_sbflags; } ;
struct dlm_lkb {int lkb_flags; int /*<<< orphan*/  lkb_sbflags; } ;

/* Variables and functions */
 int DLM_IFL_STUB_MS ; 

__attribute__((used)) static void receive_flags_reply(struct dlm_lkb *lkb, struct dlm_message *ms)
{
	if (ms->m_flags == DLM_IFL_STUB_MS)
		return;

	lkb->lkb_sbflags = ms->m_sbflags;
	lkb->lkb_flags = (lkb->lkb_flags & 0xFFFF0000) |
		         (ms->m_flags & 0x0000FFFF);
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
          int _len_lkb0 = 1;
          struct dlm_lkb * lkb = (struct dlm_lkb *) malloc(_len_lkb0*sizeof(struct dlm_lkb));
          for(int _i0 = 0; _i0 < _len_lkb0; _i0++) {
            lkb[_i0].lkb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        lkb[_i0].lkb_sbflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ms0 = 1;
          struct dlm_message * ms = (struct dlm_message *) malloc(_len_ms0*sizeof(struct dlm_message));
          for(int _i0 = 0; _i0 < _len_ms0; _i0++) {
            ms[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ms[_i0].m_sbflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          receive_flags_reply(lkb,ms);
          free(lkb);
          free(ms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
