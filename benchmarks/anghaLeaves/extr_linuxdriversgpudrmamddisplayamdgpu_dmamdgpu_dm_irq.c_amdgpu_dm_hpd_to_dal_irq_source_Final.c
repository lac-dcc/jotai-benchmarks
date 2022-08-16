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
typedef  enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;

/* Variables and functions */
#define  AMDGPU_HPD_1 133 
#define  AMDGPU_HPD_2 132 
#define  AMDGPU_HPD_3 131 
#define  AMDGPU_HPD_4 130 
#define  AMDGPU_HPD_5 129 
#define  AMDGPU_HPD_6 128 
 int DC_IRQ_SOURCE_HPD1 ; 
 int DC_IRQ_SOURCE_HPD2 ; 
 int DC_IRQ_SOURCE_HPD3 ; 
 int DC_IRQ_SOURCE_HPD4 ; 
 int DC_IRQ_SOURCE_HPD5 ; 
 int DC_IRQ_SOURCE_HPD6 ; 
 int DC_IRQ_SOURCE_INVALID ; 

__attribute__((used)) static enum dc_irq_source amdgpu_dm_hpd_to_dal_irq_source(unsigned type)
{
	switch (type) {
	case AMDGPU_HPD_1:
		return DC_IRQ_SOURCE_HPD1;
	case AMDGPU_HPD_2:
		return DC_IRQ_SOURCE_HPD2;
	case AMDGPU_HPD_3:
		return DC_IRQ_SOURCE_HPD3;
	case AMDGPU_HPD_4:
		return DC_IRQ_SOURCE_HPD4;
	case AMDGPU_HPD_5:
		return DC_IRQ_SOURCE_HPD5;
	case AMDGPU_HPD_6:
		return DC_IRQ_SOURCE_HPD6;
	default:
		return DC_IRQ_SOURCE_INVALID;
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
          unsigned int type = 100;
          enum dc_irq_source benchRet = amdgpu_dm_hpd_to_dal_irq_source(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int type = 255;
          enum dc_irq_source benchRet = amdgpu_dm_hpd_to_dal_irq_source(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int type = 10;
          enum dc_irq_source benchRet = amdgpu_dm_hpd_to_dal_irq_source(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
