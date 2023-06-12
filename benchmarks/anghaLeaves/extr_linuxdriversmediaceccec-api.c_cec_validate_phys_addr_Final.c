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
typedef  int u16 ;

/* Variables and functions */
 int CEC_PHYS_ADDR_INVALID ; 
 int EINVAL ; 

__attribute__((used)) static int cec_validate_phys_addr(u16 phys_addr)
{
	int i;

	if (phys_addr == CEC_PHYS_ADDR_INVALID)
		return 0;
	for (i = 0; i < 16; i += 4)
		if (phys_addr & (0xf << i))
			break;
	if (i == 16)
		return 0;
	for (i += 4; i < 16; i += 4)
		if ((phys_addr & (0xf << i)) == 0)
			return -EINVAL;
	return 0;
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
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 55
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 33
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          int phys_addr = 100;
        
          int benchRet = cec_validate_phys_addr(phys_addr);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 55
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 33
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          int phys_addr = 255;
        
          int benchRet = cec_validate_phys_addr(phys_addr);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int phys_addr = 10;
        
          int benchRet = cec_validate_phys_addr(phys_addr);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          int phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = cec_validate_phys_addr(phys_addr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
