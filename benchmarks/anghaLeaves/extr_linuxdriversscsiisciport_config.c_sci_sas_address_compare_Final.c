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
struct sci_sas_address {scalar_t__ high; scalar_t__ low; } ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static s32 sci_sas_address_compare(
	struct sci_sas_address address_one,
	struct sci_sas_address address_two)
{
	if (address_one.high > address_two.high) {
		return 1;
	} else if (address_one.high < address_two.high) {
		return -1;
	} else if (address_one.low > address_two.low) {
		return 1;
	} else if (address_one.low < address_two.low) {
		return -1;
	}

	/* The two SAS Address must be identical */
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
          struct sci_sas_address address_one;
        address_one.high = ((-2 * (next_i()%2)) + 1) * next_i();
        address_one.low = ((-2 * (next_i()%2)) + 1) * next_i();
          struct sci_sas_address address_two;
        address_two.high = ((-2 * (next_i()%2)) + 1) * next_i();
        address_two.low = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = sci_sas_address_compare(address_one,address_two);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
