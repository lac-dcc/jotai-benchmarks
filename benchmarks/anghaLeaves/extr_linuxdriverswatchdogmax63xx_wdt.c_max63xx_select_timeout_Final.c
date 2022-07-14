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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct max63xx_timeout {int twd; scalar_t__ tdelay; } ;

/* Variables and functions */
 scalar_t__ nodelay ; 

__attribute__((used)) static struct max63xx_timeout *
max63xx_select_timeout(struct max63xx_timeout *table, int value)
{
	while (table->twd) {
		if (value <= table->twd) {
			if (nodelay && table->tdelay == 0)
				return table;

			if (!nodelay)
				return table;
		}

		table++;
	}

	return NULL;
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
          int value = 100;
          int _len_table0 = 1;
          struct max63xx_timeout * table = (struct max63xx_timeout *) malloc(_len_table0*sizeof(struct max63xx_timeout));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].twd = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].tdelay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct max63xx_timeout * benchRet = max63xx_select_timeout(table,value);
          printf("%d\n", (*benchRet).twd);
          printf("%ld\n", (*benchRet).tdelay);
          free(table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          int _len_table0 = 65025;
          struct max63xx_timeout * table = (struct max63xx_timeout *) malloc(_len_table0*sizeof(struct max63xx_timeout));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].twd = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].tdelay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct max63xx_timeout * benchRet = max63xx_select_timeout(table,value);
          printf("%d\n", (*benchRet).twd);
          printf("%ld\n", (*benchRet).tdelay);
          free(table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          int _len_table0 = 100;
          struct max63xx_timeout * table = (struct max63xx_timeout *) malloc(_len_table0*sizeof(struct max63xx_timeout));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].twd = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].tdelay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct max63xx_timeout * benchRet = max63xx_select_timeout(table,value);
          printf("%d\n", (*benchRet).twd);
          printf("%ld\n", (*benchRet).tdelay);
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}