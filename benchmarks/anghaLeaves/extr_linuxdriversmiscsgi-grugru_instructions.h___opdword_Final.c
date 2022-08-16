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
 scalar_t__ CBS_ACTIVE ; 
 unsigned char GRU_CB_EXOPC_SHFT ; 
 unsigned char GRU_CB_IAA0_SHFT ; 
 unsigned char GRU_CB_IAA1_SHFT ; 
 int GRU_CB_ICMD_SHFT ; 
 unsigned char GRU_CB_IMA_SHFT ; 
 unsigned char GRU_CB_OPC_SHFT ; 
 unsigned char GRU_CB_XTYPE_SHFT ; 
 unsigned long GRU_IDEF2_SHFT ; 
 unsigned long GRU_ISTATUS_SHFT ; 

__attribute__((used)) static inline unsigned long
__opdword(unsigned char opcode, unsigned char exopc, unsigned char xtype,
       unsigned char iaa0, unsigned char iaa1,
       unsigned long idef2, unsigned char ima)
{
    return (1 << GRU_CB_ICMD_SHFT) |
	   ((unsigned long)CBS_ACTIVE << GRU_ISTATUS_SHFT) |
	   (idef2<< GRU_IDEF2_SHFT) |
	   (iaa0 << GRU_CB_IAA0_SHFT) |
	   (iaa1 << GRU_CB_IAA1_SHFT) |
	   (ima << GRU_CB_IMA_SHFT) |
	   (xtype << GRU_CB_XTYPE_SHFT) |
	   (opcode << GRU_CB_OPC_SHFT) |
	   (exopc << GRU_CB_EXOPC_SHFT);
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
          unsigned char opcode = 100;
          unsigned char exopc = 100;
          unsigned char xtype = 100;
          unsigned char iaa0 = 100;
          unsigned char iaa1 = 100;
          unsigned long idef2 = 100;
          unsigned char ima = 100;
          unsigned long benchRet = __opdword(opcode,exopc,xtype,iaa0,iaa1,idef2,ima);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char opcode = 255;
          unsigned char exopc = 255;
          unsigned char xtype = 255;
          unsigned char iaa0 = 255;
          unsigned char iaa1 = 255;
          unsigned long idef2 = 255;
          unsigned char ima = 255;
          unsigned long benchRet = __opdword(opcode,exopc,xtype,iaa0,iaa1,idef2,ima);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char opcode = 10;
          unsigned char exopc = 10;
          unsigned char xtype = 10;
          unsigned char iaa0 = 10;
          unsigned char iaa1 = 10;
          unsigned long idef2 = 10;
          unsigned char ima = 10;
          unsigned long benchRet = __opdword(opcode,exopc,xtype,iaa0,iaa1,idef2,ima);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
