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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
typedef  enum fs_flow_table_type { ____Placeholder_fs_flow_table_type } fs_flow_table_type ;
typedef  enum fs_flow_table_op_mod { ____Placeholder_fs_flow_table_op_mod } fs_flow_table_op_mod ;

/* Variables and functions */

__attribute__((used)) static int mlx5_cmd_stub_create_flow_table(struct mlx5_core_dev *dev,
					   u16 vport,
					   enum fs_flow_table_op_mod op_mod,
					   enum fs_flow_table_type type,
					   unsigned int level,
					   unsigned int log_size,
					   struct mlx5_flow_table *next_ft,
					   unsigned int *table_id, u32 flags)
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
          int vport = 100;
          enum fs_flow_table_op_mod op_mod = 0;
          enum fs_flow_table_type type = 0;
          unsigned int level = 100;
          unsigned int log_size = 100;
          int flags = 100;
          int _len_dev0 = 1;
          struct mlx5_core_dev * dev = (struct mlx5_core_dev *) malloc(_len_dev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_next_ft0 = 1;
          struct mlx5_flow_table * next_ft = (struct mlx5_flow_table *) malloc(_len_next_ft0*sizeof(struct mlx5_flow_table));
          for(int _i0 = 0; _i0 < _len_next_ft0; _i0++) {
            next_ft[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table_id0 = 1;
          unsigned int * table_id = (unsigned int *) malloc(_len_table_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_table_id0; _i0++) {
            table_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_cmd_stub_create_flow_table(dev,vport,op_mod,type,level,log_size,next_ft,table_id,flags);
          printf("%d\n", benchRet); 
          free(dev);
          free(next_ft);
          free(table_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
