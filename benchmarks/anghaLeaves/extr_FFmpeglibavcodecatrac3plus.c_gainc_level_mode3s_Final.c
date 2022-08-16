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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int num_points; int* lev_code; } ;
typedef  TYPE_1__ AtracGainInfo ;

/* Variables and functions */

__attribute__((used)) static inline void gainc_level_mode3s(AtracGainInfo *dst, AtracGainInfo *ref)
{
    int i;

    for (i = 0; i < dst->num_points; i++)
        dst->lev_code[i] = (i >= ref->num_points) ? 7 : ref->lev_code[i];
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
          int _len_dst0 = 1;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__lev_code0 = 1;
          dst[_i0].lev_code = (int *) malloc(_len_dst__i0__lev_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__lev_code0; _j0++) {
            dst[_i0].lev_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ref0 = 1;
          struct TYPE_4__ * ref = (struct TYPE_4__ *) malloc(_len_ref0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0].num_points = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ref__i0__lev_code0 = 1;
          ref[_i0].lev_code = (int *) malloc(_len_ref__i0__lev_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ref__i0__lev_code0; _j0++) {
            ref[_i0].lev_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gainc_level_mode3s(dst,ref);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].lev_code);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_ref0; _aux++) {
          free(ref[_aux].lev_code);
          }
          free(ref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
