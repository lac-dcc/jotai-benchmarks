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
struct dgnc_board {TYPE_2__* print_driver; TYPE_1__* serial_driver; } ;
struct TYPE_4__ {unsigned int major; } ;
struct TYPE_3__ {unsigned int major; } ;

/* Variables and functions */
 int MAXBOARDS ; 
 struct dgnc_board** dgnc_board ; 

__attribute__((used)) static struct dgnc_board *find_board_by_major(unsigned int major)
{
	int i;

	for (i = 0; i < MAXBOARDS; i++) {
		struct dgnc_board *brd = dgnc_board[i];

		if (!brd)
			return NULL;

		if (major == brd->serial_driver->major ||
		    major == brd->print_driver->major)
			return brd;
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
          unsigned int major = 100;
          struct dgnc_board * benchRet = find_board_by_major(major);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int major = 255;
          struct dgnc_board * benchRet = find_board_by_major(major);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int major = 10;
          struct dgnc_board * benchRet = find_board_by_major(major);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
