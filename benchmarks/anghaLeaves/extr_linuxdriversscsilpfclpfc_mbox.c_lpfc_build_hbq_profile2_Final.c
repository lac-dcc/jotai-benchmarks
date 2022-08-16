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
struct lpfc_hbq_init {int /*<<< orphan*/  seqlenoff; int /*<<< orphan*/  maxlen; int /*<<< orphan*/  seqlenbcnt; } ;
struct TYPE_3__ {int /*<<< orphan*/  seqlenoff; int /*<<< orphan*/  maxlen; int /*<<< orphan*/  seqlenbcnt; } ;
struct TYPE_4__ {TYPE_1__ profile2; } ;
struct config_hbq_var {TYPE_2__ profiles; } ;

/* Variables and functions */

__attribute__((used)) static void
lpfc_build_hbq_profile2(struct config_hbq_var *hbqmb,
			struct lpfc_hbq_init  *hbq_desc)
{
	hbqmb->profiles.profile2.seqlenbcnt = hbq_desc->seqlenbcnt;
	hbqmb->profiles.profile2.maxlen     = hbq_desc->maxlen;
	hbqmb->profiles.profile2.seqlenoff  = hbq_desc->seqlenoff;
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
          int _len_hbqmb0 = 1;
          struct config_hbq_var * hbqmb = (struct config_hbq_var *) malloc(_len_hbqmb0*sizeof(struct config_hbq_var));
          for(int _i0 = 0; _i0 < _len_hbqmb0; _i0++) {
            hbqmb[_i0].profiles.profile2.seqlenoff = ((-2 * (next_i()%2)) + 1) * next_i();
        hbqmb[_i0].profiles.profile2.maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        hbqmb[_i0].profiles.profile2.seqlenbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hbq_desc0 = 1;
          struct lpfc_hbq_init * hbq_desc = (struct lpfc_hbq_init *) malloc(_len_hbq_desc0*sizeof(struct lpfc_hbq_init));
          for(int _i0 = 0; _i0 < _len_hbq_desc0; _i0++) {
            hbq_desc[_i0].seqlenoff = ((-2 * (next_i()%2)) + 1) * next_i();
        hbq_desc[_i0].maxlen = ((-2 * (next_i()%2)) + 1) * next_i();
        hbq_desc[_i0].seqlenbcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_build_hbq_profile2(hbqmb,hbq_desc);
          free(hbqmb);
          free(hbq_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
