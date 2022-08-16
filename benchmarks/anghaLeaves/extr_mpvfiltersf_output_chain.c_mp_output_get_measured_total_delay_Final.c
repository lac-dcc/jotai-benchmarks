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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mp_user_filter {scalar_t__ last_in_pts; scalar_t__ last_out_pts; } ;
struct mp_output_chain {TYPE_1__* f; } ;
struct chain {int num_all_filters; struct mp_user_filter** all_filters; } ;
struct TYPE_2__ {struct chain* priv; } ;

/* Variables and functions */
 scalar_t__ MP_NOPTS_VALUE ; 

double mp_output_get_measured_total_delay(struct mp_output_chain *c)
{
    struct chain *p = c->f->priv;

    double delay = 0;

    for (int n = 0; n < p->num_all_filters; n++) {
        struct mp_user_filter *u = p->all_filters[n];

        if (u->last_in_pts != MP_NOPTS_VALUE &&
            u->last_out_pts != MP_NOPTS_VALUE)
        {
            delay += u->last_in_pts - u->last_out_pts;
        }
    }

    return delay;
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
          int _len_c0 = 1;
          struct mp_output_chain * c = (struct mp_output_chain *) malloc(_len_c0*sizeof(struct mp_output_chain));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__f0 = 1;
          c[_i0].f = (struct TYPE_2__ *) malloc(_len_c__i0__f0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_c__i0__f0; _j0++) {
              int _len_c__i0__f_priv0 = 1;
          c[_i0].f->priv = (struct chain *) malloc(_len_c__i0__f_priv0*sizeof(struct chain));
          for(int _j0 = 0; _j0 < _len_c__i0__f_priv0; _j0++) {
            c[_i0].f->priv->num_all_filters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__f_priv_all_filters0 = 1;
          c[_i0].f->priv->all_filters = (struct mp_user_filter **) malloc(_len_c__i0__f_priv_all_filters0*sizeof(struct mp_user_filter *));
          for(int _j0 = 0; _j0 < _len_c__i0__f_priv_all_filters0; _j0++) {
            int _len_c__i0__f_priv_all_filters1 = 1;
            c[_i0].f->priv->all_filters[_j0] = (struct mp_user_filter *) malloc(_len_c__i0__f_priv_all_filters1*sizeof(struct mp_user_filter));
            for(int _j1 = 0; _j1 < _len_c__i0__f_priv_all_filters1; _j1++) {
              c[_i0].f->priv->all_filters[_j0]->last_in_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].f->priv->all_filters[_j0]->last_out_pts = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          double benchRet = mp_output_get_measured_total_delay(c);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].f);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
