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

/* Variables and functions */
 unsigned short BAD_REGADDR ; 
#define  ICP_DR_ABS 143 
#define  ICP_DR_RD_REL 142 
#define  ICP_DR_REL 141 
#define  ICP_DR_WR_REL 140 
#define  ICP_GPA_ABS 139 
#define  ICP_GPA_REL 138 
#define  ICP_GPB_ABS 137 
#define  ICP_GPB_REL 136 
#define  ICP_LMEM0 135 
#define  ICP_LMEM1 134 
#define  ICP_NEIGH_REL 133 
#define  ICP_NO_DEST 132 
#define  ICP_SR_ABS 131 
#define  ICP_SR_RD_REL 130 
#define  ICP_SR_REL 129 
#define  ICP_SR_WR_REL 128 

__attribute__((used)) static unsigned short qat_hal_get_reg_addr(unsigned int type,
					   unsigned short reg_num)
{
	unsigned short reg_addr;

	switch (type) {
	case ICP_GPA_ABS:
	case ICP_GPB_ABS:
		reg_addr = 0x80 | (reg_num & 0x7f);
		break;
	case ICP_GPA_REL:
	case ICP_GPB_REL:
		reg_addr = reg_num & 0x1f;
		break;
	case ICP_SR_RD_REL:
	case ICP_SR_WR_REL:
	case ICP_SR_REL:
		reg_addr = 0x180 | (reg_num & 0x1f);
		break;
	case ICP_SR_ABS:
		reg_addr = 0x140 | ((reg_num & 0x3) << 1);
		break;
	case ICP_DR_RD_REL:
	case ICP_DR_WR_REL:
	case ICP_DR_REL:
		reg_addr = 0x1c0 | (reg_num & 0x1f);
		break;
	case ICP_DR_ABS:
		reg_addr = 0x100 | ((reg_num & 0x3) << 1);
		break;
	case ICP_NEIGH_REL:
		reg_addr = 0x280 | (reg_num & 0x1f);
		break;
	case ICP_LMEM0:
		reg_addr = 0x200;
		break;
	case ICP_LMEM1:
		reg_addr = 0x220;
		break;
	case ICP_NO_DEST:
		reg_addr = 0x300 | (reg_num & 0xff);
		break;
	default:
		reg_addr = BAD_REGADDR;
		break;
	}
	return reg_addr;
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
          unsigned int type = 100;
          unsigned short reg_num = 100;
          unsigned short benchRet = qat_hal_get_reg_addr(type,reg_num);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          unsigned short reg_num = 255;
          unsigned short benchRet = qat_hal_get_reg_addr(type,reg_num);
          printf("%hu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          unsigned short reg_num = 10;
          unsigned short benchRet = qat_hal_get_reg_addr(type,reg_num);
          printf("%hu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
