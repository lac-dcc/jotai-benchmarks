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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  mtu; } ;
struct qede_reload_args {TYPE_2__ u; } ;
struct qede_dev {TYPE_1__* ndev; } ;
struct TYPE_3__ {int /*<<< orphan*/  mtu; } ;

/* Variables and functions */

__attribute__((used)) static void qede_update_mtu(struct qede_dev *edev,
			    struct qede_reload_args *args)
{
	edev->ndev->mtu = args->u.mtu;
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
          int _len_edev0 = 1;
          struct qede_dev * edev = (struct qede_dev *) malloc(_len_edev0*sizeof(struct qede_dev));
          for(int _i0 = 0; _i0 < _len_edev0; _i0++) {
              int _len_edev__i0__ndev0 = 1;
          edev[_i0].ndev = (struct TYPE_3__ *) malloc(_len_edev__i0__ndev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_edev__i0__ndev0; _j0++) {
            edev[_i0].ndev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_args0 = 1;
          struct qede_reload_args * args = (struct qede_reload_args *) malloc(_len_args0*sizeof(struct qede_reload_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0].u.mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qede_update_mtu(edev,args);
          for(int _aux = 0; _aux < _len_edev0; _aux++) {
          free(edev[_aux].ndev);
          }
          free(edev);
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
