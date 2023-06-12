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
       0            empty\n\
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
typedef  enum mdp5_pack_3d { ____Placeholder_mdp5_pack_3d } mdp5_pack_3d ;

/* Variables and functions */
 int MDP5_CTL_OP_PACK_3D__MASK ; 
 int MDP5_CTL_OP_PACK_3D__SHIFT ; 

__attribute__((used)) static inline uint32_t MDP5_CTL_OP_PACK_3D(enum mdp5_pack_3d val)
{
	return ((val) << MDP5_CTL_OP_PACK_3D__SHIFT) & MDP5_CTL_OP_PACK_3D__MASK;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          enum mdp5_pack_3d val = 0;
        
          int benchRet = MDP5_CTL_OP_PACK_3D(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
