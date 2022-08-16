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
typedef  scalar_t__ u32 ;
struct mlxsw_sp_qdisc {scalar_t__ handle; TYPE_1__* ops; } ;
typedef  enum mlxsw_sp_qdisc_type { ____Placeholder_mlxsw_sp_qdisc_type } mlxsw_sp_qdisc_type ;
struct TYPE_2__ {int type; } ;

/* Variables and functions */

__attribute__((used)) static bool
mlxsw_sp_qdisc_compare(struct mlxsw_sp_qdisc *mlxsw_sp_qdisc, u32 handle,
		       enum mlxsw_sp_qdisc_type type)
{
	return mlxsw_sp_qdisc && mlxsw_sp_qdisc->ops &&
	       mlxsw_sp_qdisc->ops->type == type &&
	       mlxsw_sp_qdisc->handle == handle;
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
          long handle = 100;
          enum mlxsw_sp_qdisc_type type = 0;
          int _len_mlxsw_sp_qdisc0 = 1;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].handle = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp_qdisc__i0__ops0 = 1;
          mlxsw_sp_qdisc[_i0].ops = (struct TYPE_2__ *) malloc(_len_mlxsw_sp_qdisc__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_qdisc__i0__ops0; _j0++) {
            mlxsw_sp_qdisc[_i0].ops->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlxsw_sp_qdisc_compare(mlxsw_sp_qdisc,handle,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_sp_qdisc0; _aux++) {
          free(mlxsw_sp_qdisc[_aux].ops);
          }
          free(mlxsw_sp_qdisc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
