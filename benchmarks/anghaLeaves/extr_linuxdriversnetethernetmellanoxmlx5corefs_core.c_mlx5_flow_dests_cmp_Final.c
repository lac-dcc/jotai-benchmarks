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
struct TYPE_2__ {scalar_t__ num; } ;
struct mlx5_flow_destination {scalar_t__ type; scalar_t__ ft; scalar_t__ tir_num; scalar_t__ ft_num; TYPE_1__ vport; } ;

/* Variables and functions */
 scalar_t__ MLX5_FLOW_DESTINATION_TYPE_FLOW_TABLE ; 
 scalar_t__ MLX5_FLOW_DESTINATION_TYPE_FLOW_TABLE_NUM ; 
 scalar_t__ MLX5_FLOW_DESTINATION_TYPE_TIR ; 
 scalar_t__ MLX5_FLOW_DESTINATION_TYPE_VPORT ; 

__attribute__((used)) static bool mlx5_flow_dests_cmp(struct mlx5_flow_destination *d1,
				struct mlx5_flow_destination *d2)
{
	if (d1->type == d2->type) {
		if ((d1->type == MLX5_FLOW_DESTINATION_TYPE_VPORT &&
		     d1->vport.num == d2->vport.num) ||
		    (d1->type == MLX5_FLOW_DESTINATION_TYPE_FLOW_TABLE &&
		     d1->ft == d2->ft) ||
		    (d1->type == MLX5_FLOW_DESTINATION_TYPE_TIR &&
		     d1->tir_num == d2->tir_num) ||
		    (d1->type == MLX5_FLOW_DESTINATION_TYPE_FLOW_TABLE_NUM &&
		     d1->ft_num == d2->ft_num))
			return true;
	}

	return false;
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
          int _len_d10 = 1;
          struct mlx5_flow_destination * d1 = (struct mlx5_flow_destination *) malloc(_len_d10*sizeof(struct mlx5_flow_destination));
          for(int _i0 = 0; _i0 < _len_d10; _i0++) {
            d1[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        d1[_i0].ft = ((-2 * (next_i()%2)) + 1) * next_i();
        d1[_i0].tir_num = ((-2 * (next_i()%2)) + 1) * next_i();
        d1[_i0].ft_num = ((-2 * (next_i()%2)) + 1) * next_i();
        d1[_i0].vport.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d20 = 1;
          struct mlx5_flow_destination * d2 = (struct mlx5_flow_destination *) malloc(_len_d20*sizeof(struct mlx5_flow_destination));
          for(int _i0 = 0; _i0 < _len_d20; _i0++) {
            d2[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        d2[_i0].ft = ((-2 * (next_i()%2)) + 1) * next_i();
        d2[_i0].tir_num = ((-2 * (next_i()%2)) + 1) * next_i();
        d2[_i0].ft_num = ((-2 * (next_i()%2)) + 1) * next_i();
        d2[_i0].vport.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_flow_dests_cmp(d1,d2);
          printf("%d\n", benchRet); 
          free(d1);
          free(d2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
