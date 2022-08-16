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
struct iwl_trans {TYPE_1__* cfg; } ;
struct iwl_rx_transfer_desc {int dummy; } ;
typedef  int /*<<< orphan*/  __le64 ;
typedef  int /*<<< orphan*/  __le32 ;
struct TYPE_2__ {scalar_t__ mq_rx_supported; } ;

/* Variables and functions */

__attribute__((used)) static int iwl_pcie_free_bd_size(struct iwl_trans *trans, bool use_rx_td)
{
	struct iwl_rx_transfer_desc *rx_td;

	if (use_rx_td)
		return sizeof(*rx_td);
	else
		return trans->cfg->mq_rx_supported ? sizeof(__le64) :
			sizeof(__le32);
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
          int use_rx_td = 100;
          int _len_trans0 = 1;
          struct iwl_trans * trans = (struct iwl_trans *) malloc(_len_trans0*sizeof(struct iwl_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__cfg0 = 1;
          trans[_i0].cfg = (struct TYPE_2__ *) malloc(_len_trans__i0__cfg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_trans__i0__cfg0; _j0++) {
            trans[_i0].cfg->mq_rx_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_pcie_free_bd_size(trans,use_rx_td);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].cfg);
          }
          free(trans);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
