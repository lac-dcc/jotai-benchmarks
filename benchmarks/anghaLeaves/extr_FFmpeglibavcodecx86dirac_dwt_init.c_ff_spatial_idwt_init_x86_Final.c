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
typedef  enum dwt_type { ____Placeholder_dwt_type } dwt_type ;
typedef  int /*<<< orphan*/  DWTContext ;

/* Variables and functions */

void ff_spatial_idwt_init_x86(DWTContext *d, enum dwt_type type)
{
#if HAVE_X86ASM
  int mm_flags = av_get_cpu_flags();

#if !ARCH_X86_64
    if (!(mm_flags & AV_CPU_FLAG_MMX))
        return;

    switch (type) {
    case DWT_DIRAC_DD9_7:
        d->vertical_compose_l0 = (void*)vertical_compose53iL0_mmx;
        d->vertical_compose_h0 = (void*)vertical_compose_dd97iH0_mmx;
        break;
    case DWT_DIRAC_LEGALL5_3:
        d->vertical_compose_l0 = (void*)vertical_compose53iL0_mmx;
        d->vertical_compose_h0 = (void*)vertical_compose_dirac53iH0_mmx;
        break;
    case DWT_DIRAC_DD13_7:
        d->vertical_compose_l0 = (void*)vertical_compose_dd137iL0_mmx;
        d->vertical_compose_h0 = (void*)vertical_compose_dd97iH0_mmx;
        break;
    case DWT_DIRAC_HAAR0:
        d->vertical_compose   = (void*)vertical_compose_haar_mmx;
        d->horizontal_compose = horizontal_compose_haar0i_mmx;
        break;
    case DWT_DIRAC_HAAR1:
        d->vertical_compose   = (void*)vertical_compose_haar_mmx;
        d->horizontal_compose = horizontal_compose_haar1i_mmx;
        break;
    }
#endif

    if (!(mm_flags & AV_CPU_FLAG_SSE2))
        return;

    switch (type) {
    case DWT_DIRAC_DD9_7:
        d->vertical_compose_l0 = (void*)vertical_compose53iL0_sse2;
        d->vertical_compose_h0 = (void*)vertical_compose_dd97iH0_sse2;
        break;
    case DWT_DIRAC_LEGALL5_3:
        d->vertical_compose_l0 = (void*)vertical_compose53iL0_sse2;
        d->vertical_compose_h0 = (void*)vertical_compose_dirac53iH0_sse2;
        break;
    case DWT_DIRAC_DD13_7:
        d->vertical_compose_l0 = (void*)vertical_compose_dd137iL0_sse2;
        d->vertical_compose_h0 = (void*)vertical_compose_dd97iH0_sse2;
        break;
    case DWT_DIRAC_HAAR0:
        d->vertical_compose   = (void*)vertical_compose_haar_sse2;
        d->horizontal_compose = horizontal_compose_haar0i_sse2;
        break;
    case DWT_DIRAC_HAAR1:
        d->vertical_compose   = (void*)vertical_compose_haar_sse2;
        d->horizontal_compose = horizontal_compose_haar1i_sse2;
        break;
    }

    if (!(mm_flags & AV_CPU_FLAG_SSSE3))
        return;

    switch (type) {
    case DWT_DIRAC_DD9_7:
        d->horizontal_compose = horizontal_compose_dd97i_ssse3;
        break;
    }
#endif // HAVE_X86ASM
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
          enum dwt_type type = 0;
          int _len_d0 = 1;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_spatial_idwt_init_x86(d,type);
          free(d);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum dwt_type type = 0;
          int _len_d0 = 100;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_spatial_idwt_init_x86(d,type);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
