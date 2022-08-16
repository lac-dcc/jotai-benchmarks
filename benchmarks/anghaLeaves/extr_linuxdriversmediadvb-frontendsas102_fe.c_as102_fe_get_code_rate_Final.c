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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;

/* Variables and functions */
 int /*<<< orphan*/  CODE_RATE_1_2 ; 
 int /*<<< orphan*/  CODE_RATE_2_3 ; 
 int /*<<< orphan*/  CODE_RATE_3_4 ; 
 int /*<<< orphan*/  CODE_RATE_5_6 ; 
 int /*<<< orphan*/  CODE_RATE_7_8 ; 
 int /*<<< orphan*/  CODE_RATE_UNKNOWN ; 
#define  FEC_1_2 132 
#define  FEC_2_3 131 
#define  FEC_3_4 130 
#define  FEC_5_6 129 
#define  FEC_7_8 128 

__attribute__((used)) static uint8_t as102_fe_get_code_rate(enum fe_code_rate arg)
{
	uint8_t c;

	switch (arg) {
	case FEC_1_2:
		c = CODE_RATE_1_2;
		break;
	case FEC_2_3:
		c = CODE_RATE_2_3;
		break;
	case FEC_3_4:
		c = CODE_RATE_3_4;
		break;
	case FEC_5_6:
		c = CODE_RATE_5_6;
		break;
	case FEC_7_8:
		c = CODE_RATE_7_8;
		break;
	default:
		c = CODE_RATE_UNKNOWN;
		break;
	}

	return c;
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
          enum fe_code_rate arg = 0;
          int benchRet = as102_fe_get_code_rate(arg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
