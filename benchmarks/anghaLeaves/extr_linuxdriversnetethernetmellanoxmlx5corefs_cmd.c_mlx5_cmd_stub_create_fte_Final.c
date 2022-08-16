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
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_group {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_fte {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int mlx5_cmd_stub_create_fte(struct mlx5_core_dev *dev,
				    struct mlx5_flow_table *ft,
				    struct mlx5_flow_group *group,
				    struct fs_fte *fte)
{
	return 0;
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
          int _len_dev0 = 1;
          struct mlx5_core_dev * dev = (struct mlx5_core_dev *) malloc(_len_dev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ft0 = 1;
          struct mlx5_flow_table * ft = (struct mlx5_flow_table *) malloc(_len_ft0*sizeof(struct mlx5_flow_table));
          for(int _i0 = 0; _i0 < _len_ft0; _i0++) {
            ft[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_group0 = 1;
          struct mlx5_flow_group * group = (struct mlx5_flow_group *) malloc(_len_group0*sizeof(struct mlx5_flow_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
            group[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fte0 = 1;
          struct fs_fte * fte = (struct fs_fte *) malloc(_len_fte0*sizeof(struct fs_fte));
          for(int _i0 = 0; _i0 < _len_fte0; _i0++) {
            fte[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_cmd_stub_create_fte(dev,ft,group,fte);
          printf("%d\n", benchRet); 
          free(dev);
          free(ft);
          free(group);
          free(fte);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
