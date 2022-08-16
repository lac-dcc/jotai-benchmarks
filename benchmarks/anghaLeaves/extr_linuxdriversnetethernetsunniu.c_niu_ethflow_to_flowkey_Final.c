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
 int FLOW_KEY_IPDA ; 
 int FLOW_KEY_IPSA ; 
 int FLOW_KEY_L2DA ; 
 int FLOW_KEY_L4_0_SHIFT ; 
 int FLOW_KEY_L4_1_SHIFT ; 
 int FLOW_KEY_L4_BYTE12 ; 
 int FLOW_KEY_PROTO ; 
 int FLOW_KEY_VLAN ; 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L2DA ; 
 int RXH_L3_PROTO ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
 int RXH_VLAN ; 

__attribute__((used)) static int niu_ethflow_to_flowkey(u64 ethflow, u64 *flow_key)
{
	u64 key = 0;

	if (ethflow & RXH_L2DA)
		key |= FLOW_KEY_L2DA;
	if (ethflow & RXH_VLAN)
		key |= FLOW_KEY_VLAN;
	if (ethflow & RXH_IP_SRC)
		key |= FLOW_KEY_IPSA;
	if (ethflow & RXH_IP_DST)
		key |= FLOW_KEY_IPDA;
	if (ethflow & RXH_L3_PROTO)
		key |= FLOW_KEY_PROTO;
	if (ethflow & RXH_L4_B_0_1)
		key |= (FLOW_KEY_L4_BYTE12 << FLOW_KEY_L4_0_SHIFT);
	if (ethflow & RXH_L4_B_2_3)
		key |= (FLOW_KEY_L4_BYTE12 << FLOW_KEY_L4_1_SHIFT);

	*flow_key = key;

	return 1;

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
          int ethflow = 100;
          int _len_flow_key0 = 1;
          int * flow_key = (int *) malloc(_len_flow_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_key0; _i0++) {
            flow_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_ethflow_to_flowkey(ethflow,flow_key);
          printf("%d\n", benchRet); 
          free(flow_key);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ethflow = 10;
          int _len_flow_key0 = 100;
          int * flow_key = (int *) malloc(_len_flow_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_key0; _i0++) {
            flow_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_ethflow_to_flowkey(ethflow,flow_key);
          printf("%d\n", benchRet); 
          free(flow_key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
