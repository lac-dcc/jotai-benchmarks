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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct tls_crypto_info {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;

/* Variables and functions */
 int ENOTSUPP ; 

__attribute__((used)) static inline int
mlx5_accel_tls_add_flow(struct mlx5_core_dev *mdev, void *flow,
			struct tls_crypto_info *crypto_info,
			u32 start_offload_tcp_sn, u32 *p_swid,
			bool direction_sx) { return -ENOTSUPP; }


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
          int start_offload_tcp_sn = 100;
          int direction_sx = 100;
          int _len_mdev0 = 1;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * flow;
          int _len_crypto_info0 = 1;
          struct tls_crypto_info * crypto_info = (struct tls_crypto_info *) malloc(_len_crypto_info0*sizeof(struct tls_crypto_info));
          for(int _i0 = 0; _i0 < _len_crypto_info0; _i0++) {
            crypto_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_swid0 = 1;
          int * p_swid = (int *) malloc(_len_p_swid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_swid0; _i0++) {
            p_swid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_accel_tls_add_flow(mdev,flow,crypto_info,start_offload_tcp_sn,p_swid,direction_sx);
          printf("%d\n", benchRet); 
          free(mdev);
          free(crypto_info);
          free(p_swid);
        
        break;
    }
    // big-arr
    case 1:
    {
          int start_offload_tcp_sn = 255;
          int direction_sx = 255;
          int _len_mdev0 = 65025;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * flow;
          int _len_crypto_info0 = 65025;
          struct tls_crypto_info * crypto_info = (struct tls_crypto_info *) malloc(_len_crypto_info0*sizeof(struct tls_crypto_info));
          for(int _i0 = 0; _i0 < _len_crypto_info0; _i0++) {
            crypto_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_swid0 = 65025;
          int * p_swid = (int *) malloc(_len_p_swid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_swid0; _i0++) {
            p_swid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_accel_tls_add_flow(mdev,flow,crypto_info,start_offload_tcp_sn,p_swid,direction_sx);
          printf("%d\n", benchRet); 
          free(mdev);
          free(crypto_info);
          free(p_swid);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start_offload_tcp_sn = 10;
          int direction_sx = 10;
          int _len_mdev0 = 100;
          struct mlx5_core_dev * mdev = (struct mlx5_core_dev *) malloc(_len_mdev0*sizeof(struct mlx5_core_dev));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * flow;
          int _len_crypto_info0 = 100;
          struct tls_crypto_info * crypto_info = (struct tls_crypto_info *) malloc(_len_crypto_info0*sizeof(struct tls_crypto_info));
          for(int _i0 = 0; _i0 < _len_crypto_info0; _i0++) {
            crypto_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_swid0 = 100;
          int * p_swid = (int *) malloc(_len_p_swid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_swid0; _i0++) {
            p_swid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5_accel_tls_add_flow(mdev,flow,crypto_info,start_offload_tcp_sn,p_swid,direction_sx);
          printf("%d\n", benchRet); 
          free(mdev);
          free(crypto_info);
          free(p_swid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}