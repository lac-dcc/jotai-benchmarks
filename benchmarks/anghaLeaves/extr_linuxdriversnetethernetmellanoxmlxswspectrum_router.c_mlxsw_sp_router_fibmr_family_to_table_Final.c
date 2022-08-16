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
struct mlxsw_sp_vr {struct mlxsw_sp_mr_table** mr_table; } ;
struct mlxsw_sp_mr_table {int dummy; } ;

/* Variables and functions */
 size_t MLXSW_SP_L3_PROTO_IPV4 ; 
 size_t MLXSW_SP_L3_PROTO_IPV6 ; 
 int RTNL_FAMILY_IPMR ; 

__attribute__((used)) static struct mlxsw_sp_mr_table *
mlxsw_sp_router_fibmr_family_to_table(struct mlxsw_sp_vr *vr, int family)
{
	if (family == RTNL_FAMILY_IPMR)
		return vr->mr_table[MLXSW_SP_L3_PROTO_IPV4];
	else
		return vr->mr_table[MLXSW_SP_L3_PROTO_IPV6];
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
          int family = 100;
          int _len_vr0 = 1;
          struct mlxsw_sp_vr * vr = (struct mlxsw_sp_vr *) malloc(_len_vr0*sizeof(struct mlxsw_sp_vr));
          for(int _i0 = 0; _i0 < _len_vr0; _i0++) {
              int _len_vr__i0__mr_table0 = 1;
          vr[_i0].mr_table = (struct mlxsw_sp_mr_table **) malloc(_len_vr__i0__mr_table0*sizeof(struct mlxsw_sp_mr_table *));
          for(int _j0 = 0; _j0 < _len_vr__i0__mr_table0; _j0++) {
            int _len_vr__i0__mr_table1 = 1;
            vr[_i0].mr_table[_j0] = (struct mlxsw_sp_mr_table *) malloc(_len_vr__i0__mr_table1*sizeof(struct mlxsw_sp_mr_table));
            for(int _j1 = 0; _j1 < _len_vr__i0__mr_table1; _j1++) {
              vr[_i0].mr_table[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct mlxsw_sp_mr_table * benchRet = mlxsw_sp_router_fibmr_family_to_table(vr,family);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vr0; _aux++) {
          free(*(vr[_aux].mr_table));
        free(vr[_aux].mr_table);
          }
          free(vr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
