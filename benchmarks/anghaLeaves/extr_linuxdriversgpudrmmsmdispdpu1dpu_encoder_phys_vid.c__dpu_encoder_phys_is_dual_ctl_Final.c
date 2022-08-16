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
       1            big-arr-10x\n\
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
struct dpu_encoder_phys {scalar_t__ topology_name; } ;

/* Variables and functions */
 scalar_t__ DPU_RM_TOPOLOGY_DUALPIPE ; 

__attribute__((used)) static bool _dpu_encoder_phys_is_dual_ctl(struct dpu_encoder_phys *phys_enc)
{
	if (!phys_enc)
		return false;

	if (phys_enc->topology_name == DPU_RM_TOPOLOGY_DUALPIPE)
		return true;

	return false;
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
          int _len_phys_enc0 = 1;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
            phys_enc[_i0].topology_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _dpu_encoder_phys_is_dual_ctl(phys_enc);
          printf("%d\n", benchRet); 
          free(phys_enc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_phys_enc0 = 100;
          struct dpu_encoder_phys * phys_enc = (struct dpu_encoder_phys *) malloc(_len_phys_enc0*sizeof(struct dpu_encoder_phys));
          for(int _i0 = 0; _i0 < _len_phys_enc0; _i0++) {
            phys_enc[_i0].topology_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _dpu_encoder_phys_is_dual_ctl(phys_enc);
          printf("%d\n", benchRet); 
          free(phys_enc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
