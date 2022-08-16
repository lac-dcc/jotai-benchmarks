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
typedef  int /*<<< orphan*/  SBRDSPContext ;

/* Variables and functions */

void ff_sbrdsp_init_mips(SBRDSPContext *s)
{
#if HAVE_INLINE_ASM
    s->qmf_pre_shuffle = sbr_qmf_pre_shuffle_mips;
    s->qmf_post_shuffle = sbr_qmf_post_shuffle_mips;
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
    s->sum64x5 = sbr_sum64x5_mips;
    s->sum_square = sbr_sum_square_mips;
    s->qmf_deint_bfly = sbr_qmf_deint_bfly_mips;
    s->autocorrelate = sbr_autocorrelate_mips;
    s->hf_gen = sbr_hf_gen_mips;
    s->hf_g_filt = sbr_hf_g_filt_mips;

    s->hf_apply_noise[0] = sbr_hf_apply_noise_0_mips;
    s->hf_apply_noise[1] = sbr_hf_apply_noise_1_mips;
    s->hf_apply_noise[2] = sbr_hf_apply_noise_2_mips;
    s->hf_apply_noise[3] = sbr_hf_apply_noise_3_mips;
#endif /* !HAVE_MIPS32R6 && !HAVE_MIPS64R6 */
#endif /* HAVE_MIPSFPU */
#endif /* HAVE_INLINE_ASM */
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
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_sbrdsp_init_mips(s);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_sbrdsp_init_mips(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
