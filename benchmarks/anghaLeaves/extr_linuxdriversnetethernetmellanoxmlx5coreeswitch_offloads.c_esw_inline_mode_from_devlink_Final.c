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
       1            big-arr-10x\n\
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
typedef  int u8 ;

/* Variables and functions */
#define  DEVLINK_ESWITCH_INLINE_MODE_LINK 131 
#define  DEVLINK_ESWITCH_INLINE_MODE_NETWORK 130 
#define  DEVLINK_ESWITCH_INLINE_MODE_NONE 129 
#define  DEVLINK_ESWITCH_INLINE_MODE_TRANSPORT 128 
 int EINVAL ; 
 int MLX5_INLINE_MODE_IP ; 
 int MLX5_INLINE_MODE_L2 ; 
 int MLX5_INLINE_MODE_NONE ; 
 int MLX5_INLINE_MODE_TCP_UDP ; 

__attribute__((used)) static int esw_inline_mode_from_devlink(u8 mode, u8 *mlx5_mode)
{
	switch (mode) {
	case DEVLINK_ESWITCH_INLINE_MODE_NONE:
		*mlx5_mode = MLX5_INLINE_MODE_NONE;
		break;
	case DEVLINK_ESWITCH_INLINE_MODE_LINK:
		*mlx5_mode = MLX5_INLINE_MODE_L2;
		break;
	case DEVLINK_ESWITCH_INLINE_MODE_NETWORK:
		*mlx5_mode = MLX5_INLINE_MODE_IP;
		break;
	case DEVLINK_ESWITCH_INLINE_MODE_TRANSPORT:
		*mlx5_mode = MLX5_INLINE_MODE_TCP_UDP;
		break;
	default:
		return -EINVAL;
	}

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
          int mode = 100;
          int _len_mlx5_mode0 = 1;
          int * mlx5_mode = (int *) malloc(_len_mlx5_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mlx5_mode0; _i0++) {
            mlx5_mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esw_inline_mode_from_devlink(mode,mlx5_mode);
          printf("%d\n", benchRet); 
          free(mlx5_mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int mode = 10;
          int _len_mlx5_mode0 = 100;
          int * mlx5_mode = (int *) malloc(_len_mlx5_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mlx5_mode0; _i0++) {
            mlx5_mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esw_inline_mode_from_devlink(mode,mlx5_mode);
          printf("%d\n", benchRet); 
          free(mlx5_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
