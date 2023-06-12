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
typedef  int uint32_t ;
typedef  enum mdp5_intf_type { ____Placeholder_mdp5_intf_type } mdp5_intf_type ;

/* Variables and functions */
 int MDP5_DISP_INTF_SEL_INTF2__MASK ; 
 int MDP5_DISP_INTF_SEL_INTF2__SHIFT ; 

__attribute__((used)) static inline uint32_t MDP5_DISP_INTF_SEL_INTF2(enum mdp5_intf_type val)
{
	return ((val) << MDP5_DISP_INTF_SEL_INTF2__SHIFT) & MDP5_DISP_INTF_SEL_INTF2__MASK;
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
          enum mdp5_intf_type val = 100;
        
          int benchRet = MDP5_DISP_INTF_SEL_INTF2(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mdp5_intf_type val = 255;
        
          int benchRet = MDP5_DISP_INTF_SEL_INTF2(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mdp5_intf_type val = 10;
        
          int benchRet = MDP5_DISP_INTF_SEL_INTF2(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          enum mdp5_intf_type val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = MDP5_DISP_INTF_SEL_INTF2(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
