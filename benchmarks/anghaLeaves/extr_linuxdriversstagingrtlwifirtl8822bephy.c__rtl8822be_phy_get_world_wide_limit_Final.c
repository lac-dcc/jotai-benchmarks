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
       1            big-arr-10x\n\
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
typedef  size_t u8 ;

/* Variables and functions */
 size_t MAX_REGULATION_NUM ; 

__attribute__((used)) static char _rtl8822be_phy_get_world_wide_limit(char *limit_table)
{
	char min = limit_table[0];
	u8 i = 0;

	for (i = 0; i < MAX_REGULATION_NUM; ++i) {
		if (limit_table[i] < min)
			min = limit_table[i];
	}
	return min;
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
          int _len_limit_table0 = 1;
          char * limit_table = (char *) malloc(_len_limit_table0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_limit_table0; _i0++) {
            limit_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = _rtl8822be_phy_get_world_wide_limit(limit_table);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(limit_table);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_limit_table0 = 100;
          char * limit_table = (char *) malloc(_len_limit_table0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_limit_table0; _i0++) {
            limit_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = _rtl8822be_phy_get_world_wide_limit(limit_table);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(limit_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
