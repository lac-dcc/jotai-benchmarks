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
typedef  scalar_t__ u8 ;
typedef  int u32 ;

/* Variables and functions */
 int EINVAL ; 
 int MLX5_IB_DEFAULT_UIDX ; 
 int MLX5_USER_ASSIGNED_UIDX_MASK ; 

__attribute__((used)) static inline int verify_assign_uidx(u8 cqe_version, u32 cmd_uidx,
				     u32 *user_index)
{
	if (cqe_version) {
		if ((cmd_uidx == MLX5_IB_DEFAULT_UIDX) ||
		    (cmd_uidx & ~MLX5_USER_ASSIGNED_UIDX_MASK))
			return -EINVAL;
		*user_index = cmd_uidx;
	} else {
		*user_index = MLX5_IB_DEFAULT_UIDX;
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
          long cqe_version = 100;
          int cmd_uidx = 100;
          int _len_user_index0 = 1;
          int * user_index = (int *) malloc(_len_user_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_user_index0; _i0++) {
            user_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_assign_uidx(cqe_version,cmd_uidx,user_index);
          printf("%d\n", benchRet); 
          free(user_index);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long cqe_version = 10;
          int cmd_uidx = 10;
          int _len_user_index0 = 100;
          int * user_index = (int *) malloc(_len_user_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_user_index0; _i0++) {
            user_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = verify_assign_uidx(cqe_version,cmd_uidx,user_index);
          printf("%d\n", benchRet); 
          free(user_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
