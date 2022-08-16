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
typedef  int u16 ;
struct goodix_chip_data {int dummy; } ;

/* Variables and functions */
 struct goodix_chip_data const gt1x_chip_data ; 
 struct goodix_chip_data const gt911_chip_data ; 
 struct goodix_chip_data const gt967_chip_data ; 
 struct goodix_chip_data const gt9x_chip_data ; 

__attribute__((used)) static const struct goodix_chip_data *goodix_get_chip_data(u16 id)
{
	switch (id) {
	case 1151:
		return &gt1x_chip_data;

	case 911:
	case 9271:
	case 9110:
	case 927:
	case 928:
		return &gt911_chip_data;

	case 912:
	case 967:
		return &gt967_chip_data;

	default:
		return &gt9x_chip_data;
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
          int id = 100;
          const struct goodix_chip_data * benchRet = goodix_get_chip_data(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          const struct goodix_chip_data * benchRet = goodix_get_chip_data(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          const struct goodix_chip_data * benchRet = goodix_get_chip_data(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
