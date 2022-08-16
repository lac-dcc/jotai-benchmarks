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
typedef  int u8 ;
struct ib_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
#define  MLX5_VL_HW_0 132 
#define  MLX5_VL_HW_0_1 131 
#define  MLX5_VL_HW_0_14 130 
#define  MLX5_VL_HW_0_3 129 
#define  MLX5_VL_HW_0_7 128 
 int __IB_MAX_VL_0 ; 
 int __IB_MAX_VL_0_1 ; 
 int __IB_MAX_VL_0_14 ; 
 int __IB_MAX_VL_0_3 ; 
 int __IB_MAX_VL_0_7 ; 

__attribute__((used)) static int translate_max_vl_num(struct ib_device *ibdev, u8 vl_hw_cap,
				u8 *max_vl_num)
{
	switch (vl_hw_cap) {
	case MLX5_VL_HW_0:
		*max_vl_num = __IB_MAX_VL_0;
		break;
	case MLX5_VL_HW_0_1:
		*max_vl_num = __IB_MAX_VL_0_1;
		break;
	case MLX5_VL_HW_0_3:
		*max_vl_num = __IB_MAX_VL_0_3;
		break;
	case MLX5_VL_HW_0_7:
		*max_vl_num = __IB_MAX_VL_0_7;
		break;
	case MLX5_VL_HW_0_14:
		*max_vl_num = __IB_MAX_VL_0_14;
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
          int vl_hw_cap = 100;
          int _len_ibdev0 = 1;
          struct ib_device * ibdev = (struct ib_device *) malloc(_len_ibdev0*sizeof(struct ib_device));
          for(int _i0 = 0; _i0 < _len_ibdev0; _i0++) {
            ibdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_vl_num0 = 1;
          int * max_vl_num = (int *) malloc(_len_max_vl_num0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_vl_num0; _i0++) {
            max_vl_num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = translate_max_vl_num(ibdev,vl_hw_cap,max_vl_num);
          printf("%d\n", benchRet); 
          free(ibdev);
          free(max_vl_num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
