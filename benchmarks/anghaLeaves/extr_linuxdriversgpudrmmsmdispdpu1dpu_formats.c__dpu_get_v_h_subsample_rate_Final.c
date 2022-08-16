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
typedef  int uint32_t ;
typedef  enum dpu_chroma_samp_type { ____Placeholder_dpu_chroma_samp_type } dpu_chroma_samp_type ;

/* Variables and functions */
#define  DPU_CHROMA_420 130 
#define  DPU_CHROMA_H1V2 129 
#define  DPU_CHROMA_H2V1 128 

__attribute__((used)) static void _dpu_get_v_h_subsample_rate(
	enum dpu_chroma_samp_type chroma_sample,
	uint32_t *v_sample,
	uint32_t *h_sample)
{
	if (!v_sample || !h_sample)
		return;

	switch (chroma_sample) {
	case DPU_CHROMA_H2V1:
		*v_sample = 1;
		*h_sample = 2;
		break;
	case DPU_CHROMA_H1V2:
		*v_sample = 2;
		*h_sample = 1;
		break;
	case DPU_CHROMA_420:
		*v_sample = 2;
		*h_sample = 2;
		break;
	default:
		*v_sample = 1;
		*h_sample = 1;
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
          enum dpu_chroma_samp_type chroma_sample = 0;
          int _len_v_sample0 = 1;
          int * v_sample = (int *) malloc(_len_v_sample0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v_sample0; _i0++) {
            v_sample[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h_sample0 = 1;
          int * h_sample = (int *) malloc(_len_h_sample0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h_sample0; _i0++) {
            h_sample[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _dpu_get_v_h_subsample_rate(chroma_sample,v_sample,h_sample);
          free(v_sample);
          free(h_sample);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
