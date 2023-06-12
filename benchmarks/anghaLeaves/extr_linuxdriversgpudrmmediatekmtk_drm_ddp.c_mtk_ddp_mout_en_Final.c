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
typedef  enum mtk_ddp_comp_id { ____Placeholder_mtk_ddp_comp_id } mtk_ddp_comp_id ;

/* Variables and functions */
 int DDP_COMPONENT_COLOR0 ; 
 int DDP_COMPONENT_COLOR1 ; 
 int DDP_COMPONENT_DPI0 ; 
 int DDP_COMPONENT_DPI1 ; 
 int DDP_COMPONENT_DSI0 ; 
 int DDP_COMPONENT_DSI1 ; 
 int DDP_COMPONENT_DSI2 ; 
 int DDP_COMPONENT_DSI3 ; 
 int DDP_COMPONENT_GAMMA ; 
 int DDP_COMPONENT_OD0 ; 
 int DDP_COMPONENT_OD1 ; 
 int DDP_COMPONENT_OVL0 ; 
 int DDP_COMPONENT_OVL1 ; 
 int DDP_COMPONENT_RDMA0 ; 
 int DDP_COMPONENT_RDMA1 ; 
 int DDP_COMPONENT_RDMA2 ; 
 int DDP_COMPONENT_UFOE ; 
 unsigned int DISP_REG_CONFIG_DISP_GAMMA_MOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_OD_MOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_OVL0_MOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_OVL1_MOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_OVL_MOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN ; 
 unsigned int DISP_REG_CONFIG_DISP_RDMA2_SOUT ; 
 unsigned int DISP_REG_CONFIG_DISP_UFOE_MOUT_EN ; 
 unsigned int GAMMA_MOUT_EN_RDMA1 ; 
 unsigned int OD1_MOUT_EN_RDMA1 ; 
 unsigned int OD_MOUT_EN_RDMA0 ; 
 unsigned int OVL0_MOUT_EN_COLOR0 ; 
 unsigned int OVL1_MOUT_EN_COLOR1 ; 
 unsigned int OVL_MOUT_EN_RDMA ; 
 unsigned int RDMA0_SOUT_DPI0 ; 
 unsigned int RDMA0_SOUT_DPI1 ; 
 unsigned int RDMA0_SOUT_DSI1 ; 
 unsigned int RDMA0_SOUT_DSI2 ; 
 unsigned int RDMA0_SOUT_DSI3 ; 
 unsigned int RDMA1_SOUT_DPI0 ; 
 unsigned int RDMA1_SOUT_DPI1 ; 
 unsigned int RDMA1_SOUT_DSI1 ; 
 unsigned int RDMA1_SOUT_DSI2 ; 
 unsigned int RDMA1_SOUT_DSI3 ; 
 unsigned int RDMA2_SOUT_DPI0 ; 
 unsigned int RDMA2_SOUT_DPI1 ; 
 unsigned int RDMA2_SOUT_DSI1 ; 
 unsigned int RDMA2_SOUT_DSI2 ; 
 unsigned int RDMA2_SOUT_DSI3 ; 
 unsigned int UFOE_MOUT_EN_DSI0 ; 

__attribute__((used)) static unsigned int mtk_ddp_mout_en(enum mtk_ddp_comp_id cur,
				    enum mtk_ddp_comp_id next,
				    unsigned int *addr)
{
	unsigned int value;

	if (cur == DDP_COMPONENT_OVL0 && next == DDP_COMPONENT_COLOR0) {
		*addr = DISP_REG_CONFIG_DISP_OVL0_MOUT_EN;
		value = OVL0_MOUT_EN_COLOR0;
	} else if (cur == DDP_COMPONENT_OVL0 && next == DDP_COMPONENT_RDMA0) {
		*addr = DISP_REG_CONFIG_DISP_OVL_MOUT_EN;
		value = OVL_MOUT_EN_RDMA;
	} else if (cur == DDP_COMPONENT_OD0 && next == DDP_COMPONENT_RDMA0) {
		*addr = DISP_REG_CONFIG_DISP_OD_MOUT_EN;
		value = OD_MOUT_EN_RDMA0;
	} else if (cur == DDP_COMPONENT_UFOE && next == DDP_COMPONENT_DSI0) {
		*addr = DISP_REG_CONFIG_DISP_UFOE_MOUT_EN;
		value = UFOE_MOUT_EN_DSI0;
	} else if (cur == DDP_COMPONENT_OVL1 && next == DDP_COMPONENT_COLOR1) {
		*addr = DISP_REG_CONFIG_DISP_OVL1_MOUT_EN;
		value = OVL1_MOUT_EN_COLOR1;
	} else if (cur == DDP_COMPONENT_GAMMA && next == DDP_COMPONENT_RDMA1) {
		*addr = DISP_REG_CONFIG_DISP_GAMMA_MOUT_EN;
		value = GAMMA_MOUT_EN_RDMA1;
	} else if (cur == DDP_COMPONENT_OD1 && next == DDP_COMPONENT_RDMA1) {
		*addr = DISP_REG_CONFIG_DISP_OD_MOUT_EN;
		value = OD1_MOUT_EN_RDMA1;
	} else if (cur == DDP_COMPONENT_RDMA0 && next == DDP_COMPONENT_DPI0) {
		*addr = DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN;
		value = RDMA0_SOUT_DPI0;
	} else if (cur == DDP_COMPONENT_RDMA0 && next == DDP_COMPONENT_DPI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN;
		value = RDMA0_SOUT_DPI1;
	} else if (cur == DDP_COMPONENT_RDMA0 && next == DDP_COMPONENT_DSI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN;
		value = RDMA0_SOUT_DSI1;
	} else if (cur == DDP_COMPONENT_RDMA0 && next == DDP_COMPONENT_DSI2) {
		*addr = DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN;
		value = RDMA0_SOUT_DSI2;
	} else if (cur == DDP_COMPONENT_RDMA0 && next == DDP_COMPONENT_DSI3) {
		*addr = DISP_REG_CONFIG_DISP_RDMA0_SOUT_EN;
		value = RDMA0_SOUT_DSI3;
	} else if (cur == DDP_COMPONENT_RDMA1 && next == DDP_COMPONENT_DSI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN;
		value = RDMA1_SOUT_DSI1;
	} else if (cur == DDP_COMPONENT_RDMA1 && next == DDP_COMPONENT_DSI2) {
		*addr = DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN;
		value = RDMA1_SOUT_DSI2;
	} else if (cur == DDP_COMPONENT_RDMA1 && next == DDP_COMPONENT_DSI3) {
		*addr = DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN;
		value = RDMA1_SOUT_DSI3;
	} else if (cur == DDP_COMPONENT_RDMA1 && next == DDP_COMPONENT_DPI0) {
		*addr = DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN;
		value = RDMA1_SOUT_DPI0;
	} else if (cur == DDP_COMPONENT_RDMA1 && next == DDP_COMPONENT_DPI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA1_SOUT_EN;
		value = RDMA1_SOUT_DPI1;
	} else if (cur == DDP_COMPONENT_RDMA2 && next == DDP_COMPONENT_DPI0) {
		*addr = DISP_REG_CONFIG_DISP_RDMA2_SOUT;
		value = RDMA2_SOUT_DPI0;
	} else if (cur == DDP_COMPONENT_RDMA2 && next == DDP_COMPONENT_DPI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA2_SOUT;
		value = RDMA2_SOUT_DPI1;
	} else if (cur == DDP_COMPONENT_RDMA2 && next == DDP_COMPONENT_DSI1) {
		*addr = DISP_REG_CONFIG_DISP_RDMA2_SOUT;
		value = RDMA2_SOUT_DSI1;
	} else if (cur == DDP_COMPONENT_RDMA2 && next == DDP_COMPONENT_DSI2) {
		*addr = DISP_REG_CONFIG_DISP_RDMA2_SOUT;
		value = RDMA2_SOUT_DSI2;
	} else if (cur == DDP_COMPONENT_RDMA2 && next == DDP_COMPONENT_DSI3) {
		*addr = DISP_REG_CONFIG_DISP_RDMA2_SOUT;
		value = RDMA2_SOUT_DSI3;
	} else {
		value = 0;
	}

	return value;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          enum mtk_ddp_comp_id cur = 0;
        
          enum mtk_ddp_comp_id next = 0;
        
          int _len_addr0 = 65025;
          unsigned int * addr = (unsigned int *) malloc(_len_addr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = mtk_ddp_mout_en(cur,next,addr);
          printf("%u\n", benchRet); 
          free(addr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          enum mtk_ddp_comp_id cur = 0;
        
          enum mtk_ddp_comp_id next = 0;
        
          int _len_addr0 = 100;
          unsigned int * addr = (unsigned int *) malloc(_len_addr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = mtk_ddp_mout_en(cur,next,addr);
          printf("%u\n", benchRet); 
          free(addr);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          enum mtk_ddp_comp_id cur = 0;
        
          enum mtk_ddp_comp_id next = 0;
        
          int _len_addr0 = 1;
          unsigned int * addr = (unsigned int *) malloc(_len_addr0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = mtk_ddp_mout_en(cur,next,addr);
          printf("%u\n", benchRet); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
