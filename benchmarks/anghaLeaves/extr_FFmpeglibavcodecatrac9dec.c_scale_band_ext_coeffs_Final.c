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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {float* coeffs; } ;
typedef  TYPE_1__ ATRAC9ChannelData ;

/* Variables and functions */
 int* at9_q_unit_to_coeff_idx ; 

__attribute__((used)) static inline void scale_band_ext_coeffs(ATRAC9ChannelData *c, float sf[6],
                                         const int s_unit, const int e_unit)
{
    for (int i = s_unit; i < e_unit; i++) {
        const int start = at9_q_unit_to_coeff_idx[i + 0];
        const int end   = at9_q_unit_to_coeff_idx[i + 1];
        for (int j = start; j < end; j++)
            c->coeffs[j] *= sf[i - s_unit];
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
          const int s_unit = 100;
          const int e_unit = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__coeffs0 = 1;
          c[_i0].coeffs = (float *) malloc(_len_c__i0__coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_c__i0__coeffs0; _j0++) {
            c[_i0].coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_sf0 = 6;
          float * sf = (float *) malloc(_len_sf0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_sf0; _i0++) {
            sf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          scale_band_ext_coeffs(c,sf,s_unit,e_unit);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].coeffs);
          }
          free(c);
          free(sf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
