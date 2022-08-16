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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long pc; unsigned long range; } ;
struct TYPE_4__ {unsigned long pc; unsigned long range; } ;
struct unwind_table {TYPE_1__ init; TYPE_2__ core; struct unwind_table* link; } ;

/* Variables and functions */
 struct unwind_table root_table ; 

__attribute__((used)) static struct unwind_table *find_table(unsigned long pc)
{
	struct unwind_table *table;

	for (table = &root_table; table; table = table->link)
		if ((pc >= table->core.pc
		     && pc < table->core.pc + table->core.range)
		    || (pc >= table->init.pc
			&& pc < table->init.pc + table->init.range))
			break;

	return table;
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
          unsigned long pc = 100;
          struct unwind_table * benchRet = find_table(pc);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long pc = 255;
          struct unwind_table * benchRet = find_table(pc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long pc = 10;
          struct unwind_table * benchRet = find_table(pc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
