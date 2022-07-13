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

/* Variables and functions */
 int EINVAL ; 
 int ENOENT ; 
 int ENOMEM ; 
 int EPERM ; 
#define  NECP_ERROR_INTERNAL 135 
#define  NECP_ERROR_INVALID_PROCESS 134 
#define  NECP_ERROR_INVALID_TLV 133 
#define  NECP_ERROR_POLICY_CONDITIONS_INVALID 132 
#define  NECP_ERROR_POLICY_ID_NOT_FOUND 131 
#define  NECP_ERROR_POLICY_RESULT_INVALID 130 
#define  NECP_ERROR_ROUTE_RULES_INVALID 129 
#define  NECP_ERROR_UNKNOWN_PACKET_TYPE 128 

__attribute__((used)) static int
necp_get_posix_error_for_necp_error(int response_error)
{
	switch (response_error) {
		case NECP_ERROR_UNKNOWN_PACKET_TYPE:
		case NECP_ERROR_INVALID_TLV:
		case NECP_ERROR_POLICY_RESULT_INVALID:
		case NECP_ERROR_POLICY_CONDITIONS_INVALID:
		case NECP_ERROR_ROUTE_RULES_INVALID: {
			return (EINVAL);
		}
		case NECP_ERROR_POLICY_ID_NOT_FOUND: {
			return (ENOENT);
		}
		case NECP_ERROR_INVALID_PROCESS: {
			return (EPERM);
		}
		case NECP_ERROR_INTERNAL:
		default: {
			return (ENOMEM);
		}
	}
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
          int response_error = 100;
          int benchRet = necp_get_posix_error_for_necp_error(response_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int response_error = 255;
          int benchRet = necp_get_posix_error_for_necp_error(response_error);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int response_error = 10;
          int benchRet = necp_get_posix_error_for_necp_error(response_error);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
