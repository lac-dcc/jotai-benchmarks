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
struct qed_tunn_update_type {int b_update_mode; int /*<<< orphan*/  b_mode_enabled; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static void qed_pf_validate_tunn_mode(struct qed_tunn_update_type *tun, int *rc)
{
	if (tun->b_update_mode && !tun->b_mode_enabled) {
		tun->b_update_mode = false;
		*rc = -EINVAL;
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
          int _len_tun0 = 1;
          struct qed_tunn_update_type * tun = (struct qed_tunn_update_type *) malloc(_len_tun0*sizeof(struct qed_tunn_update_type));
          for(int _i0 = 0; _i0 < _len_tun0; _i0++) {
            tun[_i0].b_update_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        tun[_i0].b_mode_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc0 = 1;
          int * rc = (int *) malloc(_len_rc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qed_pf_validate_tunn_mode(tun,rc);
          free(tun);
          free(rc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
