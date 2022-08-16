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
typedef  int /*<<< orphan*/  u64 ;
struct mlxsw_res {int* valid; int /*<<< orphan*/ * values; } ;
typedef  enum mlxsw_res_id { ____Placeholder_mlxsw_res_id } mlxsw_res_id ;

/* Variables and functions */

__attribute__((used)) static inline void mlxsw_res_set(struct mlxsw_res *res,
				 enum mlxsw_res_id res_id, u64 value)
{
	res->valid[res_id] = true;
	res->values[res_id] = value;
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
          enum mlxsw_res_id res_id = 0;
          int value = 100;
          int _len_res0 = 1;
          struct mlxsw_res * res = (struct mlxsw_res *) malloc(_len_res0*sizeof(struct mlxsw_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              int _len_res__i0__valid0 = 1;
          res[_i0].valid = (int *) malloc(_len_res__i0__valid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__valid0; _j0++) {
            res[_i0].valid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res__i0__values0 = 1;
          res[_i0].values = (int *) malloc(_len_res__i0__values0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_res__i0__values0; _j0++) {
            res[_i0].values[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlxsw_res_set(res,res_id,value);
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].valid);
          }
          for(int _aux = 0; _aux < _len_res0; _aux++) {
          free(res[_aux].values);
          }
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
