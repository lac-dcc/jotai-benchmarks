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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
#define  BSPI_DONE 131 
#define  BSPI_ERR 130 
 int /*<<< orphan*/  BSPI_LR_INTERRUPTS_ALL ; 
 int /*<<< orphan*/  BSPI_LR_INTERRUPTS_ERROR ; 
 int /*<<< orphan*/  INTR_MSPI_DONE_MASK ; 
#define  MSPI_BSPI_DONE 129 
#define  MSPI_DONE 128 
 int /*<<< orphan*/  QSPI_INTERRUPTS_ALL ; 

__attribute__((used)) static inline u32 get_qspi_mask(int type)
{
	switch (type) {
	case MSPI_DONE:
		return INTR_MSPI_DONE_MASK;
	case BSPI_DONE:
		return BSPI_LR_INTERRUPTS_ALL;
	case MSPI_BSPI_DONE:
		return QSPI_INTERRUPTS_ALL;
	case BSPI_ERR:
		return BSPI_LR_INTERRUPTS_ERROR;
	}

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
          int type = 100;
          int benchRet = get_qspi_mask(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int benchRet = get_qspi_mask(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int benchRet = get_qspi_mask(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
