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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct bnx2x_raw_obj {scalar_t__ obj_type; } ;
struct bnx2x_mcast_obj {struct bnx2x_raw_obj raw; } ;

/* Variables and functions */
 scalar_t__ BNX2X_OBJ_TYPE_RX ; 
 scalar_t__ BNX2X_OBJ_TYPE_RX_TX ; 
 scalar_t__ BNX2X_OBJ_TYPE_TX ; 
 int /*<<< orphan*/  ETH_MULTICAST_RULES_CMD_RX_CMD ; 
 int /*<<< orphan*/  ETH_MULTICAST_RULES_CMD_TX_CMD ; 

__attribute__((used)) static inline u8 bnx2x_mcast_get_rx_tx_flag(struct bnx2x_mcast_obj *o)
{
	struct bnx2x_raw_obj *raw = &o->raw;
	u8 rx_tx_flag = 0;

	if ((raw->obj_type == BNX2X_OBJ_TYPE_TX) ||
	    (raw->obj_type == BNX2X_OBJ_TYPE_RX_TX))
		rx_tx_flag |= ETH_MULTICAST_RULES_CMD_TX_CMD;

	if ((raw->obj_type == BNX2X_OBJ_TYPE_RX) ||
	    (raw->obj_type == BNX2X_OBJ_TYPE_RX_TX))
		rx_tx_flag |= ETH_MULTICAST_RULES_CMD_RX_CMD;

	return rx_tx_flag;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_o0 = 65025;
          struct bnx2x_mcast_obj * o = (struct bnx2x_mcast_obj *) malloc(_len_o0*sizeof(struct bnx2x_mcast_obj));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              o[_i0].raw.obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = bnx2x_mcast_get_rx_tx_flag(o);
          printf("%d\n", benchRet); 
          free(o);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_o0 = 100;
          struct bnx2x_mcast_obj * o = (struct bnx2x_mcast_obj *) malloc(_len_o0*sizeof(struct bnx2x_mcast_obj));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              o[_i0].raw.obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = bnx2x_mcast_get_rx_tx_flag(o);
          printf("%d\n", benchRet); 
          free(o);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int _len_o0 = 1;
          struct bnx2x_mcast_obj * o = (struct bnx2x_mcast_obj *) malloc(_len_o0*sizeof(struct bnx2x_mcast_obj));
          for(int _i0 = 0; _i0 < _len_o0; _i0++) {
              o[_i0].raw.obj_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = bnx2x_mcast_get_rx_tx_flag(o);
          printf("%d\n", benchRet); 
          free(o);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
