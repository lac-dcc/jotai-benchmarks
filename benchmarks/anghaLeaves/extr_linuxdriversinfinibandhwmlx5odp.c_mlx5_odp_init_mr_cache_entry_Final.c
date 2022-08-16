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
struct mlx5_mtt {int dummy; } ;
struct mlx5_klm {int dummy; } ;
struct mlx5_cache_ent {int order; int xlt; int /*<<< orphan*/  limit; int /*<<< orphan*/  access_mode; int /*<<< orphan*/  page; TYPE_2__* dev; } ;
struct TYPE_3__ {int general_caps; } ;
struct TYPE_4__ {TYPE_1__ odp_caps; } ;

/* Variables and functions */
 int IB_ODP_SUPPORT_IMPLICIT ; 
 int MLX5_IB_UMR_OCTOWORD ; 
#define  MLX5_IMR_KSM_CACHE_ENTRY 129 
#define  MLX5_IMR_MTT_CACHE_ENTRY 128 
 int MLX5_IMR_MTT_ENTRIES ; 
 int /*<<< orphan*/  MLX5_KSM_PAGE_SHIFT ; 
 int /*<<< orphan*/  MLX5_MKC_ACCESS_MODE_KSM ; 
 int /*<<< orphan*/  MLX5_MKC_ACCESS_MODE_MTT ; 
 int /*<<< orphan*/  PAGE_SHIFT ; 
 int mlx5_imr_ksm_entries ; 

void mlx5_odp_init_mr_cache_entry(struct mlx5_cache_ent *ent)
{
	if (!(ent->dev->odp_caps.general_caps & IB_ODP_SUPPORT_IMPLICIT))
		return;

	switch (ent->order - 2) {
	case MLX5_IMR_MTT_CACHE_ENTRY:
		ent->page = PAGE_SHIFT;
		ent->xlt = MLX5_IMR_MTT_ENTRIES *
			   sizeof(struct mlx5_mtt) /
			   MLX5_IB_UMR_OCTOWORD;
		ent->access_mode = MLX5_MKC_ACCESS_MODE_MTT;
		ent->limit = 0;
		break;

	case MLX5_IMR_KSM_CACHE_ENTRY:
		ent->page = MLX5_KSM_PAGE_SHIFT;
		ent->xlt = mlx5_imr_ksm_entries *
			   sizeof(struct mlx5_klm) /
			   MLX5_IB_UMR_OCTOWORD;
		ent->access_mode = MLX5_MKC_ACCESS_MODE_KSM;
		ent->limit = 0;
		break;
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
          int _len_ent0 = 1;
          struct mlx5_cache_ent * ent = (struct mlx5_cache_ent *) malloc(_len_ent0*sizeof(struct mlx5_cache_ent));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].xlt = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].access_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ent[_i0].page = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ent__i0__dev0 = 1;
          ent[_i0].dev = (struct TYPE_4__ *) malloc(_len_ent__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ent__i0__dev0; _j0++) {
            ent[_i0].dev->odp_caps.general_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlx5_odp_init_mr_cache_entry(ent);
          for(int _aux = 0; _aux < _len_ent0; _aux++) {
          free(ent[_aux].dev);
          }
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
