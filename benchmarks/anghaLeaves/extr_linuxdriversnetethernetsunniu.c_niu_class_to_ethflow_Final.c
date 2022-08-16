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
typedef  int u64 ;

/* Variables and functions */
 int AH_V4_FLOW ; 
 int AH_V6_FLOW ; 
#define  CLASS_CODE_AH_ESP_IPV4 139 
#define  CLASS_CODE_AH_ESP_IPV6 138 
#define  CLASS_CODE_SCTP_IPV4 137 
#define  CLASS_CODE_SCTP_IPV6 136 
#define  CLASS_CODE_TCP_IPV4 135 
#define  CLASS_CODE_TCP_IPV6 134 
#define  CLASS_CODE_UDP_IPV4 133 
#define  CLASS_CODE_UDP_IPV6 132 
#define  CLASS_CODE_USER_PROG1 131 
#define  CLASS_CODE_USER_PROG2 130 
#define  CLASS_CODE_USER_PROG3 129 
#define  CLASS_CODE_USER_PROG4 128 
 int EINVAL ; 
 int IP_USER_FLOW ; 
 int SCTP_V4_FLOW ; 
 int SCTP_V6_FLOW ; 
 int TCP_V4_FLOW ; 
 int TCP_V6_FLOW ; 
 int UDP_V4_FLOW ; 
 int UDP_V6_FLOW ; 

__attribute__((used)) static int niu_class_to_ethflow(u64 class, int *flow_type)
{
	switch (class) {
	case CLASS_CODE_TCP_IPV4:
		*flow_type = TCP_V4_FLOW;
		break;
	case CLASS_CODE_UDP_IPV4:
		*flow_type = UDP_V4_FLOW;
		break;
	case CLASS_CODE_AH_ESP_IPV4:
		*flow_type = AH_V4_FLOW;
		break;
	case CLASS_CODE_SCTP_IPV4:
		*flow_type = SCTP_V4_FLOW;
		break;
	case CLASS_CODE_TCP_IPV6:
		*flow_type = TCP_V6_FLOW;
		break;
	case CLASS_CODE_UDP_IPV6:
		*flow_type = UDP_V6_FLOW;
		break;
	case CLASS_CODE_AH_ESP_IPV6:
		*flow_type = AH_V6_FLOW;
		break;
	case CLASS_CODE_SCTP_IPV6:
		*flow_type = SCTP_V6_FLOW;
		break;
	case CLASS_CODE_USER_PROG1:
	case CLASS_CODE_USER_PROG2:
	case CLASS_CODE_USER_PROG3:
	case CLASS_CODE_USER_PROG4:
		*flow_type = IP_USER_FLOW;
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
          int class = 100;
          int _len_flow_type0 = 1;
          int * flow_type = (int *) malloc(_len_flow_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_type0; _i0++) {
            flow_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_class_to_ethflow(class,flow_type);
          printf("%d\n", benchRet); 
          free(flow_type);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int class = 10;
          int _len_flow_type0 = 100;
          int * flow_type = (int *) malloc(_len_flow_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_type0; _i0++) {
            flow_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_class_to_ethflow(class,flow_type);
          printf("%d\n", benchRet); 
          free(flow_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
