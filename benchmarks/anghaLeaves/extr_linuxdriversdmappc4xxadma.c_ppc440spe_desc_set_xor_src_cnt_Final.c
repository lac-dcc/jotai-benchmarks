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
struct xor_cb {int cbc; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;

/* Variables and functions */
 int XOR_CDCR_OAC_MSK ; 

__attribute__((used)) static inline void ppc440spe_desc_set_xor_src_cnt(
			struct ppc440spe_adma_desc_slot *desc,
			int src_cnt)
{
	struct xor_cb *hw_desc = desc->hw_desc;

	hw_desc->cbc &= ~XOR_CDCR_OAC_MSK;
	hw_desc->cbc |= src_cnt;
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
          int src_cnt = 100;
          int _len_desc0 = 1;
          struct ppc440spe_adma_desc_slot * desc = (struct ppc440spe_adma_desc_slot *) malloc(_len_desc0*sizeof(struct ppc440spe_adma_desc_slot));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__hw_desc0 = 1;
          desc[_i0].hw_desc = (struct xor_cb *) malloc(_len_desc__i0__hw_desc0*sizeof(struct xor_cb));
          for(int _j0 = 0; _j0 < _len_desc__i0__hw_desc0; _j0++) {
            desc[_i0].hw_desc->cbc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ppc440spe_desc_set_xor_src_cnt(desc,src_cnt);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].hw_desc);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
