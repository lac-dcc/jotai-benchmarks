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
       0            empty\n\
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
typedef  enum port_state_policy { ____Placeholder_port_state_policy } port_state_policy ;

/* Variables and functions */
 int /*<<< orphan*/  IFLA_VF_LINK_STATE_AUTO ; 
 int /*<<< orphan*/  IFLA_VF_LINK_STATE_DISABLE ; 
 int /*<<< orphan*/  IFLA_VF_LINK_STATE_ENABLE ; 
#define  MLX5_POLICY_DOWN 130 
#define  MLX5_POLICY_FOLLOW 129 
#define  MLX5_POLICY_UP 128 
 int /*<<< orphan*/  __IFLA_VF_LINK_STATE_MAX ; 

__attribute__((used)) static inline u32 mlx_to_net_policy(enum port_state_policy mlx_policy)
{
	switch (mlx_policy) {
	case MLX5_POLICY_DOWN:
		return IFLA_VF_LINK_STATE_DISABLE;
	case MLX5_POLICY_UP:
		return IFLA_VF_LINK_STATE_ENABLE;
	case MLX5_POLICY_FOLLOW:
		return IFLA_VF_LINK_STATE_AUTO;
	default:
		return __IFLA_VF_LINK_STATE_MAX;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          enum port_state_policy mlx_policy = 0;
        
          int benchRet = mlx_to_net_policy(mlx_policy);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
