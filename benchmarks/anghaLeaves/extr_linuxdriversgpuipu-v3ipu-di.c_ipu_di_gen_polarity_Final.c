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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
 int /*<<< orphan*/  DI_GEN_POLARITY_1 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_2 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_3 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_4 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_5 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_6 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_7 ; 
 int /*<<< orphan*/  DI_GEN_POLARITY_8 ; 

__attribute__((used)) static u32 ipu_di_gen_polarity(int pin)
{
	switch (pin) {
	case 1:
		return DI_GEN_POLARITY_1;
	case 2:
		return DI_GEN_POLARITY_2;
	case 3:
		return DI_GEN_POLARITY_3;
	case 4:
		return DI_GEN_POLARITY_4;
	case 5:
		return DI_GEN_POLARITY_5;
	case 6:
		return DI_GEN_POLARITY_6;
	case 7:
		return DI_GEN_POLARITY_7;
	case 8:
		return DI_GEN_POLARITY_8;
	}
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
          int pin = 100;
        
          int benchRet = ipu_di_gen_polarity(pin);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pin = 255;
        
          int benchRet = ipu_di_gen_polarity(pin);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pin = 10;
        
          int benchRet = ipu_di_gen_polarity(pin);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          int pin = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = ipu_di_gen_polarity(pin);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
