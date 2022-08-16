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
struct necp_kernel_socket_policy {scalar_t__ result; } ;

/* Variables and functions */
 scalar_t__ NECP_KERNEL_POLICY_RESULT_NO_TRIGGER_SCOPED ; 
 scalar_t__ NECP_KERNEL_POLICY_RESULT_TRIGGER ; 

__attribute__((used)) static inline bool
necp_kernel_socket_result_is_trigger_service_type(struct necp_kernel_socket_policy *kernel_policy)
{
	return (kernel_policy->result >= NECP_KERNEL_POLICY_RESULT_TRIGGER && kernel_policy->result <= NECP_KERNEL_POLICY_RESULT_NO_TRIGGER_SCOPED);
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
          int _len_kernel_policy0 = 1;
          struct necp_kernel_socket_policy * kernel_policy = (struct necp_kernel_socket_policy *) malloc(_len_kernel_policy0*sizeof(struct necp_kernel_socket_policy));
          for(int _i0 = 0; _i0 < _len_kernel_policy0; _i0++) {
            kernel_policy[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_kernel_socket_result_is_trigger_service_type(kernel_policy);
          printf("%d\n", benchRet); 
          free(kernel_policy);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_kernel_policy0 = 100;
          struct necp_kernel_socket_policy * kernel_policy = (struct necp_kernel_socket_policy *) malloc(_len_kernel_policy0*sizeof(struct necp_kernel_socket_policy));
          for(int _i0 = 0; _i0 < _len_kernel_policy0; _i0++) {
            kernel_policy[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_kernel_socket_result_is_trigger_service_type(kernel_policy);
          printf("%d\n", benchRet); 
          free(kernel_policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
