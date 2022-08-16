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
typedef  int /*<<< orphan*/  u8 ;

/* Variables and functions */
#define  AH_V4_FLOW 137 
#define  AH_V6_FLOW 136 
#define  ESP_V4_FLOW 135 
#define  ESP_V6_FLOW 134 
 int /*<<< orphan*/  IPPROTO_AH ; 
 int /*<<< orphan*/  IPPROTO_ESP ; 
 int /*<<< orphan*/  IPPROTO_SCTP ; 
 int /*<<< orphan*/  IPPROTO_TCP ; 
 int /*<<< orphan*/  IPPROTO_UDP ; 
#define  SCTP_V4_FLOW 133 
#define  SCTP_V6_FLOW 132 
#define  TCP_V4_FLOW 131 
#define  TCP_V6_FLOW 130 
#define  UDP_V4_FLOW 129 
#define  UDP_V6_FLOW 128 

__attribute__((used)) static void niu_ethflow_to_l3proto(int flow_type, u8 *pid)
{
	switch (flow_type) {
	case TCP_V4_FLOW:
	case TCP_V6_FLOW:
		*pid = IPPROTO_TCP;
		break;
	case UDP_V4_FLOW:
	case UDP_V6_FLOW:
		*pid = IPPROTO_UDP;
		break;
	case SCTP_V4_FLOW:
	case SCTP_V6_FLOW:
		*pid = IPPROTO_SCTP;
		break;
	case AH_V4_FLOW:
	case AH_V6_FLOW:
		*pid = IPPROTO_AH;
		break;
	case ESP_V4_FLOW:
	case ESP_V6_FLOW:
		*pid = IPPROTO_ESP;
		break;
	default:
		*pid = 0;
		break;
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
          int flow_type = 100;
          int _len_pid0 = 1;
          int * pid = (int *) malloc(_len_pid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_ethflow_to_l3proto(flow_type,pid);
          free(pid);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flow_type = 10;
          int _len_pid0 = 100;
          int * pid = (int *) malloc(_len_pid0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pid0; _i0++) {
            pid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_ethflow_to_l3proto(flow_type,pid);
          free(pid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
