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
struct nes_hw_cqp_wqe {scalar_t__* wqe_words; } ;
struct nes_device {int dummy; } ;

/* Variables and functions */
 size_t NES_CQP_STAG_WQE_LEN_LOW_IDX ; 
 size_t NES_CQP_STAG_WQE_PA_HIGH_IDX ; 
 size_t NES_CQP_STAG_WQE_PA_LOW_IDX ; 
 size_t NES_CQP_STAG_WQE_PBL_BLK_COUNT_IDX ; 
 size_t NES_CQP_STAG_WQE_PBL_LEN_IDX ; 
 size_t NES_CQP_WQE_COMP_CTX_HIGH_IDX ; 
 size_t NES_CQP_WQE_COMP_CTX_LOW_IDX ; 
 size_t NES_CQP_WQE_COMP_SCRATCH_HIGH_IDX ; 
 size_t NES_CQP_WQE_COMP_SCRATCH_LOW_IDX ; 

__attribute__((used)) static inline void
nes_fill_init_cqp_wqe(struct nes_hw_cqp_wqe *cqp_wqe, struct nes_device *nesdev)
{
	cqp_wqe->wqe_words[NES_CQP_WQE_COMP_CTX_LOW_IDX]       = 0;
	cqp_wqe->wqe_words[NES_CQP_WQE_COMP_CTX_HIGH_IDX]      = 0;
	cqp_wqe->wqe_words[NES_CQP_WQE_COMP_SCRATCH_LOW_IDX]   = 0;
	cqp_wqe->wqe_words[NES_CQP_WQE_COMP_SCRATCH_HIGH_IDX]  = 0;
	cqp_wqe->wqe_words[NES_CQP_STAG_WQE_PBL_BLK_COUNT_IDX] = 0;
	cqp_wqe->wqe_words[NES_CQP_STAG_WQE_PBL_LEN_IDX]       = 0;
	cqp_wqe->wqe_words[NES_CQP_STAG_WQE_LEN_LOW_IDX]       = 0;
	cqp_wqe->wqe_words[NES_CQP_STAG_WQE_PA_LOW_IDX]        = 0;
	cqp_wqe->wqe_words[NES_CQP_STAG_WQE_PA_HIGH_IDX]       = 0;
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
          int _len_cqp_wqe0 = 1;
          struct nes_hw_cqp_wqe * cqp_wqe = (struct nes_hw_cqp_wqe *) malloc(_len_cqp_wqe0*sizeof(struct nes_hw_cqp_wqe));
          for(int _i0 = 0; _i0 < _len_cqp_wqe0; _i0++) {
              int _len_cqp_wqe__i0__wqe_words0 = 1;
          cqp_wqe[_i0].wqe_words = (long *) malloc(_len_cqp_wqe__i0__wqe_words0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cqp_wqe__i0__wqe_words0; _j0++) {
            cqp_wqe[_i0].wqe_words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_nesdev0 = 1;
          struct nes_device * nesdev = (struct nes_device *) malloc(_len_nesdev0*sizeof(struct nes_device));
          for(int _i0 = 0; _i0 < _len_nesdev0; _i0++) {
            nesdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nes_fill_init_cqp_wqe(cqp_wqe,nesdev);
          for(int _aux = 0; _aux < _len_cqp_wqe0; _aux++) {
          free(cqp_wqe[_aux].wqe_words);
          }
          free(cqp_wqe);
          free(nesdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
