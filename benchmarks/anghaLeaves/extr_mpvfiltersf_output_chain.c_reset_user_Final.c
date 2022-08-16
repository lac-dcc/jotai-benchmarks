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
struct mp_user_filter {int error_eof_sent; int /*<<< orphan*/  last_out_pts; int /*<<< orphan*/  last_in_pts; } ;
struct mp_filter {struct mp_user_filter* priv; } ;

/* Variables and functions */
 int /*<<< orphan*/  MP_NOPTS_VALUE ; 

__attribute__((used)) static void reset_user(struct mp_filter *f)
{
    struct mp_user_filter *u = f->priv;

    u->error_eof_sent = false;
    u->last_in_pts = u->last_out_pts = MP_NOPTS_VALUE;
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
          int _len_f0 = 1;
          struct mp_filter * f = (struct mp_filter *) malloc(_len_f0*sizeof(struct mp_filter));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              int _len_f__i0__priv0 = 1;
          f[_i0].priv = (struct mp_user_filter *) malloc(_len_f__i0__priv0*sizeof(struct mp_user_filter));
          for(int _j0 = 0; _j0 < _len_f__i0__priv0; _j0++) {
            f[_i0].priv->error_eof_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].priv->last_out_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].priv->last_in_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_user(f);
          for(int _aux = 0; _aux < _len_f0; _aux++) {
          free(f[_aux].priv);
          }
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
