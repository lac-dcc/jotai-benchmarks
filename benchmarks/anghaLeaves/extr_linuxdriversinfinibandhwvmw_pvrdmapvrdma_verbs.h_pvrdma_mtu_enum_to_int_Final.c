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
typedef  enum pvrdma_mtu { ____Placeholder_pvrdma_mtu } pvrdma_mtu ;

/* Variables and functions */
#define  PVRDMA_MTU_1024 132 
#define  PVRDMA_MTU_2048 131 
#define  PVRDMA_MTU_256 130 
#define  PVRDMA_MTU_4096 129 
#define  PVRDMA_MTU_512 128 

__attribute__((used)) static inline int pvrdma_mtu_enum_to_int(enum pvrdma_mtu mtu)
{
	switch (mtu) {
	case PVRDMA_MTU_256:	return  256;
	case PVRDMA_MTU_512:	return  512;
	case PVRDMA_MTU_1024:	return 1024;
	case PVRDMA_MTU_2048:	return 2048;
	case PVRDMA_MTU_4096:	return 4096;
	default:		return   -1;
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
          enum pvrdma_mtu mtu = 0;
          int benchRet = pvrdma_mtu_enum_to_int(mtu);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
