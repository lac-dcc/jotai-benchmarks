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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_3__ {int zero_weight; int total_weight; int zero_freq; int total_freq; int upd_val; int till_rescale; } ;
typedef  TYPE_1__ Model2 ;

/* Variables and functions */

__attribute__((used)) static void model2_reset(Model2 *m)
{
    m->zero_weight  = 1;
    m->total_weight = 2;
    m->zero_freq    = 0x1000;
    m->total_freq   = 0x2000;
    m->upd_val      = 4;
    m->till_rescale = 4;
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
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model2_reset(m);
          free(m);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_m0 = 65025;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model2_reset(m);
          free(m);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_m0 = 100;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].zero_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].zero_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].total_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].upd_val = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].till_rescale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          model2_reset(m);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
