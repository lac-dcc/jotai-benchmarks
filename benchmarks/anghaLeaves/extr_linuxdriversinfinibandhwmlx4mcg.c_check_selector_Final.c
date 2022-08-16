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
typedef  int u8 ;
typedef  int ib_sa_comp_mask ;

/* Variables and functions */
#define  IB_SA_EQ 130 
#define  IB_SA_GT 129 
#define  IB_SA_LT 128 

__attribute__((used)) static int check_selector(ib_sa_comp_mask comp_mask,
			  ib_sa_comp_mask selector_mask,
			  ib_sa_comp_mask value_mask,
			  u8 src_value, u8 dst_value)
{
	int err;
	u8 selector = dst_value >> 6;
	dst_value &= 0x3f;
	src_value &= 0x3f;

	if (!(comp_mask & selector_mask) || !(comp_mask & value_mask))
		return 0;

	switch (selector) {
	case IB_SA_GT:
		err = (src_value <= dst_value);
		break;
	case IB_SA_LT:
		err = (src_value >= dst_value);
		break;
	case IB_SA_EQ:
		err = (src_value != dst_value);
		break;
	default:
		err = 0;
		break;
	}

	return err;
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
          int comp_mask = 100;
          int selector_mask = 100;
          int value_mask = 100;
          int src_value = 100;
          int dst_value = 100;
          int benchRet = check_selector(comp_mask,selector_mask,value_mask,src_value,dst_value);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int comp_mask = 255;
          int selector_mask = 255;
          int value_mask = 255;
          int src_value = 255;
          int dst_value = 255;
          int benchRet = check_selector(comp_mask,selector_mask,value_mask,src_value,dst_value);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int comp_mask = 10;
          int selector_mask = 10;
          int value_mask = 10;
          int src_value = 10;
          int dst_value = 10;
          int benchRet = check_selector(comp_mask,selector_mask,value_mask,src_value,dst_value);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
