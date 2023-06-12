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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u32 ;
struct nes_cm_core {int mtu; int free_tx_pkt_max; } ;

/* Variables and functions */
 int EINVAL ; 
#define  NES_CM_SET_FREE_PKT_Q_SIZE 129 
#define  NES_CM_SET_PKT_SIZE 128 

__attribute__((used)) static int mini_cm_set(struct nes_cm_core *cm_core, u32 type, u32 value)
{
	int ret = 0;

	switch (type) {
	case NES_CM_SET_PKT_SIZE:
		cm_core->mtu = value;
		break;
	case NES_CM_SET_FREE_PKT_Q_SIZE:
		cm_core->free_tx_pkt_max = value;
		break;
	default:
		/* unknown set option */
		ret = -EINVAL;
	}

	return ret;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 100;
        
          int value = 100;
        
          int _len_cm_core0 = 1;
          struct nes_cm_core * cm_core = (struct nes_cm_core *) malloc(_len_cm_core0*sizeof(struct nes_cm_core));
          for(int _i0 = 0; _i0 < _len_cm_core0; _i0++) {
              cm_core[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          cm_core[_i0].free_tx_pkt_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mini_cm_set(cm_core,type,value);
          printf("%d\n", benchRet); 
          free(cm_core);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 255;
        
          int value = 255;
        
          int _len_cm_core0 = 65025;
          struct nes_cm_core * cm_core = (struct nes_cm_core *) malloc(_len_cm_core0*sizeof(struct nes_cm_core));
          for(int _i0 = 0; _i0 < _len_cm_core0; _i0++) {
              cm_core[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          cm_core[_i0].free_tx_pkt_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mini_cm_set(cm_core,type,value);
          printf("%d\n", benchRet); 
          free(cm_core);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 10;
        
          int value = 10;
        
          int _len_cm_core0 = 100;
          struct nes_cm_core * cm_core = (struct nes_cm_core *) malloc(_len_cm_core0*sizeof(struct nes_cm_core));
          for(int _i0 = 0; _i0 < _len_cm_core0; _i0++) {
              cm_core[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          cm_core[_i0].free_tx_pkt_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mini_cm_set(cm_core,type,value);
          printf("%d\n", benchRet); 
          free(cm_core);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cm_core0 = 1;
          struct nes_cm_core * cm_core = (struct nes_cm_core *) malloc(_len_cm_core0*sizeof(struct nes_cm_core));
          for(int _i0 = 0; _i0 < _len_cm_core0; _i0++) {
              cm_core[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          cm_core[_i0].free_tx_pkt_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mini_cm_set(cm_core,type,value);
          printf("%d\n", benchRet); 
          free(cm_core);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
