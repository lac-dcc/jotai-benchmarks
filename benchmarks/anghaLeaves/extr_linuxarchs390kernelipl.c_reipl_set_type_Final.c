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
typedef  enum ipl_type { ____Placeholder_ipl_type } ipl_type ;

/* Variables and functions */
 int EINVAL ; 
#define  IPL_TYPE_CCW 130 
#define  IPL_TYPE_FCP 129 
#define  IPL_TYPE_NSS 128 
 int /*<<< orphan*/  reipl_block_actual ; 
 int /*<<< orphan*/  reipl_block_ccw ; 
 int /*<<< orphan*/  reipl_block_fcp ; 
 int /*<<< orphan*/  reipl_block_nss ; 
 int reipl_capabilities ; 
 int reipl_type ; 

__attribute__((used)) static int reipl_set_type(enum ipl_type type)
{
	if (!(reipl_capabilities & type))
		return -EINVAL;

	switch(type) {
	case IPL_TYPE_CCW:
		reipl_block_actual = reipl_block_ccw;
		break;
	case IPL_TYPE_FCP:
		reipl_block_actual = reipl_block_fcp;
		break;
	case IPL_TYPE_NSS:
		reipl_block_actual = reipl_block_nss;
		break;
	default:
		break;
	}
	reipl_type = type;
	return 0;
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
          enum ipl_type type = 0;
          int benchRet = reipl_set_type(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
