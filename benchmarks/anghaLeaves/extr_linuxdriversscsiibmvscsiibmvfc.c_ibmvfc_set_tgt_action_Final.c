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
struct ibmvfc_target {int action; int /*<<< orphan*/  add_rport; } ;
typedef  enum ibmvfc_target_action { ____Placeholder_ibmvfc_target_action } ibmvfc_target_action ;

/* Variables and functions */
#define  IBMVFC_TGT_ACTION_DELETED_RPORT 129 
#define  IBMVFC_TGT_ACTION_DEL_RPORT 128 

__attribute__((used)) static void ibmvfc_set_tgt_action(struct ibmvfc_target *tgt,
				  enum ibmvfc_target_action action)
{
	switch (tgt->action) {
	case IBMVFC_TGT_ACTION_DEL_RPORT:
		if (action == IBMVFC_TGT_ACTION_DELETED_RPORT)
			tgt->action = action;
	case IBMVFC_TGT_ACTION_DELETED_RPORT:
		break;
	default:
		if (action == IBMVFC_TGT_ACTION_DEL_RPORT)
			tgt->add_rport = 0;
		tgt->action = action;
		break;
	}
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
          enum ibmvfc_target_action action = 0;
          int _len_tgt0 = 1;
          struct ibmvfc_target * tgt = (struct ibmvfc_target *) malloc(_len_tgt0*sizeof(struct ibmvfc_target));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
        tgt[_i0].add_rport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ibmvfc_set_tgt_action(tgt,action);
          free(tgt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
