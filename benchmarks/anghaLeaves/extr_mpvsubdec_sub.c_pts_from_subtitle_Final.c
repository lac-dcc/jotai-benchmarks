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
struct mp_subtitle_opts {double sub_delay; } ;
struct dec_sub {double sub_speed; struct mp_subtitle_opts* opts; } ;

/* Variables and functions */
 double MP_NOPTS_VALUE ; 

__attribute__((used)) static double pts_from_subtitle(struct dec_sub *sub, double pts)
{
    struct mp_subtitle_opts *opts = sub->opts;

    if (pts != MP_NOPTS_VALUE)
        pts = pts * sub->sub_speed + opts->sub_delay;

    return pts;
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
          double pts = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sub0 = 1;
          struct dec_sub * sub = (struct dec_sub *) malloc(_len_sub0*sizeof(struct dec_sub));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0].sub_speed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_sub__i0__opts0 = 1;
          sub[_i0].opts = (struct mp_subtitle_opts *) malloc(_len_sub__i0__opts0*sizeof(struct mp_subtitle_opts));
          for(int _j0 = 0; _j0 < _len_sub__i0__opts0; _j0++) {
            sub[_i0].opts->sub_delay = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = pts_from_subtitle(sub,pts);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_sub0; _aux++) {
          free(sub[_aux].opts);
          }
          free(sub);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
