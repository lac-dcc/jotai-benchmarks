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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct dpu_encoder_phys {int /*<<< orphan*/  intf_idx; struct dpu_encoder_irq* irq; } ;
struct dpu_encoder_irq {scalar_t__ irq_idx; int /*<<< orphan*/  hw_idx; } ;

/* Variables and functions */
 size_t INTR_IDX_UNDERRUN ; 
 size_t INTR_IDX_VSYNC ; 

__attribute__((used)) static void _dpu_encoder_phys_vid_setup_irq_hw_idx(
		struct dpu_encoder_phys *phys_enc)
{
	struct dpu_encoder_irq *irq;

	/*
	 * Initialize irq->hw_idx only when irq is not registered.
	 * Prevent invalidating irq->irq_idx as modeset may be
	 * called many times during dfps.
	 */

	irq = &phys_enc->irq[INTR_IDX_VSYNC];
	if (irq->irq_idx < 0)
		irq->hw_idx = phys_enc->intf_idx;

	irq = &phys_enc->irq[INTR_IDX_UNDERRUN];
	if (irq->irq_idx < 0)
		irq->hw_idx = phys_enc->intf_idx;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_phys_enc0 = 65025;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
              phys_enc[_i0].intf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phys_enc__i0__irq0 = 1;
          phys_enc[_i0].irq = (struct dpu_encoder_irq *) malloc(_len_phys_enc__i0__irq0*sizeof(struct dpu_encoder_irq));
          for(int _j0 = 0; _j0 < _len_phys_enc__i0__irq0; _j0++) {
              phys_enc[_i0].irq->irq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          phys_enc[_i0].irq->hw_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          _dpu_encoder_phys_vid_setup_irq_hw_idx(phys_enc);
          for(int _aux = 0; _aux < _len_phys_enc0; _aux++) {
          free(phys_enc[_aux].irq);
          }
          free(phys_enc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_phys_enc0 = 100;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
              phys_enc[_i0].intf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phys_enc__i0__irq0 = 1;
          phys_enc[_i0].irq = (struct dpu_encoder_irq *) malloc(_len_phys_enc__i0__irq0*sizeof(struct dpu_encoder_irq));
          for(int _j0 = 0; _j0 < _len_phys_enc__i0__irq0; _j0++) {
              phys_enc[_i0].irq->irq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          phys_enc[_i0].irq->hw_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          _dpu_encoder_phys_vid_setup_irq_hw_idx(phys_enc);
          for(int _aux = 0; _aux < _len_phys_enc0; _aux++) {
          free(phys_enc[_aux].irq);
          }
          free(phys_enc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_phys_enc0 = 1;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
              phys_enc[_i0].intf_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phys_enc__i0__irq0 = 1;
          phys_enc[_i0].irq = (struct dpu_encoder_irq *) malloc(_len_phys_enc__i0__irq0*sizeof(struct dpu_encoder_irq));
          for(int _j0 = 0; _j0 < _len_phys_enc__i0__irq0; _j0++) {
              phys_enc[_i0].irq->irq_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          phys_enc[_i0].irq->hw_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          _dpu_encoder_phys_vid_setup_irq_hw_idx(phys_enc);
          for(int _aux = 0; _aux < _len_phys_enc0; _aux++) {
          free(phys_enc[_aux].irq);
          }
          free(phys_enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
