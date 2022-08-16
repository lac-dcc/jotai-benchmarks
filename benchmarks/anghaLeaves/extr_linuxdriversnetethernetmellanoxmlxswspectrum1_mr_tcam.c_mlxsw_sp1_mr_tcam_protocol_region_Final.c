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
       1            linked\n\
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
struct mlxsw_sp1_mr_tcam_region {int dummy; } ;
struct mlxsw_sp1_mr_tcam {struct mlxsw_sp1_mr_tcam_region* tcam_regions; } ;
typedef  enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;

/* Variables and functions */

__attribute__((used)) static struct mlxsw_sp1_mr_tcam_region *
mlxsw_sp1_mr_tcam_protocol_region(struct mlxsw_sp1_mr_tcam *mr_tcam,
				  enum mlxsw_sp_l3proto proto)
{
	return &mr_tcam->tcam_regions[proto];
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
          enum mlxsw_sp_l3proto proto = 0;
          int _len_mr_tcam0 = 1;
          struct mlxsw_sp1_mr_tcam * mr_tcam = (struct mlxsw_sp1_mr_tcam *) malloc(_len_mr_tcam0*sizeof(struct mlxsw_sp1_mr_tcam));
          for(int _i0 = 0; _i0 < _len_mr_tcam0; _i0++) {
              int _len_mr_tcam__i0__tcam_regions0 = 1;
          mr_tcam[_i0].tcam_regions = (struct mlxsw_sp1_mr_tcam_region *) malloc(_len_mr_tcam__i0__tcam_regions0*sizeof(struct mlxsw_sp1_mr_tcam_region));
          for(int _j0 = 0; _j0 < _len_mr_tcam__i0__tcam_regions0; _j0++) {
            mr_tcam[_i0].tcam_regions->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlxsw_sp1_mr_tcam_region * benchRet = mlxsw_sp1_mr_tcam_protocol_region(mr_tcam,proto);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mr_tcam0; _aux++) {
          free(mr_tcam[_aux].tcam_regions);
          }
          free(mr_tcam);
        
        break;
    }
    // linked
    case 1:
    {
          enum mlxsw_sp_l3proto proto = 0;
          int _len_mr_tcam0 = 1;
          struct mlxsw_sp1_mr_tcam * mr_tcam = (struct mlxsw_sp1_mr_tcam *) malloc(_len_mr_tcam0*sizeof(struct mlxsw_sp1_mr_tcam));
          for(int _i0 = 0; _i0 < _len_mr_tcam0; _i0++) {
              int _len_mr_tcam__i0__tcam_regions0 = 1;
          mr_tcam[_i0].tcam_regions = (struct mlxsw_sp1_mr_tcam_region *) malloc(_len_mr_tcam__i0__tcam_regions0*sizeof(struct mlxsw_sp1_mr_tcam_region));
          for(int _j0 = 0; _j0 < _len_mr_tcam__i0__tcam_regions0; _j0++) {
            mr_tcam[_i0].tcam_regions->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlxsw_sp1_mr_tcam_region * benchRet = mlxsw_sp1_mr_tcam_protocol_region(mr_tcam,proto);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_mr_tcam0; _aux++) {
          free(mr_tcam[_aux].tcam_regions);
          }
          free(mr_tcam);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
