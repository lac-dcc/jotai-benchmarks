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
struct TYPE_2__ {scalar_t__ skip_policy_order; } ;
struct necp_kernel_ip_output_policy {scalar_t__ result; scalar_t__ session_order; scalar_t__ order; TYPE_1__ result_parameter; } ;

/* Variables and functions */
 int FALSE ; 
 scalar_t__ NECP_KERNEL_POLICY_RESULT_SKIP ; 
 int TRUE ; 

__attribute__((used)) static inline bool
necp_kernel_ip_output_policy_results_overlap(struct necp_kernel_ip_output_policy *upper_policy, struct necp_kernel_ip_output_policy *lower_policy)
{
	if (upper_policy->result == NECP_KERNEL_POLICY_RESULT_SKIP) {
		if (upper_policy->session_order != lower_policy->session_order) {
			// A skip cannot override a policy of a different session
			return (FALSE);
		} else {
			if (upper_policy->result_parameter.skip_policy_order == 0 ||
				lower_policy->order >= upper_policy->result_parameter.skip_policy_order) {
				// This policy is beyond the skip
				return (FALSE);
			} else {
				// This policy is inside the skip
				return (TRUE);
			}
		}
	}

	// All other IP Output policy results (drop, tunnel, hard pass) currently overlap
	return (TRUE);
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
          int _len_upper_policy0 = 1;
          struct necp_kernel_ip_output_policy * upper_policy = (struct necp_kernel_ip_output_policy *) malloc(_len_upper_policy0*sizeof(struct necp_kernel_ip_output_policy));
          for(int _i0 = 0; _i0 < _len_upper_policy0; _i0++) {
            upper_policy[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
        upper_policy[_i0].session_order = ((-2 * (next_i()%2)) + 1) * next_i();
        upper_policy[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        upper_policy[_i0].result_parameter.skip_policy_order = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lower_policy0 = 1;
          struct necp_kernel_ip_output_policy * lower_policy = (struct necp_kernel_ip_output_policy *) malloc(_len_lower_policy0*sizeof(struct necp_kernel_ip_output_policy));
          for(int _i0 = 0; _i0 < _len_lower_policy0; _i0++) {
            lower_policy[_i0].result = ((-2 * (next_i()%2)) + 1) * next_i();
        lower_policy[_i0].session_order = ((-2 * (next_i()%2)) + 1) * next_i();
        lower_policy[_i0].order = ((-2 * (next_i()%2)) + 1) * next_i();
        lower_policy[_i0].result_parameter.skip_policy_order = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_kernel_ip_output_policy_results_overlap(upper_policy,lower_policy);
          printf("%d\n", benchRet); 
          free(upper_policy);
          free(lower_policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
