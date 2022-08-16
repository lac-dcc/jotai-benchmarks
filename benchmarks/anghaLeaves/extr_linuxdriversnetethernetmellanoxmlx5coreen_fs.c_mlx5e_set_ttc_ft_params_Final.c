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
struct mlx5_flow_table_attr {int /*<<< orphan*/  prio; int /*<<< orphan*/  level; int /*<<< orphan*/  max_fte; } ;
struct ttc_params {struct mlx5_flow_table_attr ft_attr; } ;

/* Variables and functions */
 int /*<<< orphan*/  MLX5E_NIC_PRIO ; 
 int /*<<< orphan*/  MLX5E_TTC_FT_LEVEL ; 
 int /*<<< orphan*/  MLX5E_TTC_TABLE_SIZE ; 

void mlx5e_set_ttc_ft_params(struct ttc_params *ttc_params)

{
	struct mlx5_flow_table_attr *ft_attr = &ttc_params->ft_attr;

	ft_attr->max_fte = MLX5E_TTC_TABLE_SIZE;
	ft_attr->level = MLX5E_TTC_FT_LEVEL;
	ft_attr->prio = MLX5E_NIC_PRIO;
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
          int _len_ttc_params0 = 1;
          struct ttc_params * ttc_params = (struct ttc_params *) malloc(_len_ttc_params0*sizeof(struct ttc_params));
          for(int _i0 = 0; _i0 < _len_ttc_params0; _i0++) {
            ttc_params[_i0].ft_attr.prio = ((-2 * (next_i()%2)) + 1) * next_i();
        ttc_params[_i0].ft_attr.level = ((-2 * (next_i()%2)) + 1) * next_i();
        ttc_params[_i0].ft_attr.max_fte = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlx5e_set_ttc_ft_params(ttc_params);
          free(ttc_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
