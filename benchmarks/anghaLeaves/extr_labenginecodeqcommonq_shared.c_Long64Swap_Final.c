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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  b0; int /*<<< orphan*/  b7; int /*<<< orphan*/  b1; int /*<<< orphan*/  b6; int /*<<< orphan*/  b2; int /*<<< orphan*/  b5; int /*<<< orphan*/  b3; int /*<<< orphan*/  b4; } ;
typedef  TYPE_1__ qint64 ;

/* Variables and functions */

qint64 Long64Swap (qint64 ll)
{
	qint64	result;

	result.b0 = ll.b7;
	result.b1 = ll.b6;
	result.b2 = ll.b5;
	result.b3 = ll.b4;
	result.b4 = ll.b3;
	result.b5 = ll.b2;
	result.b6 = ll.b1;
	result.b7 = ll.b0;

	return result;
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
          struct TYPE_4__ ll;
        ll.b0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b7 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b1 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b6 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b5 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b3 = ((-2 * (next_i()%2)) + 1) * next_i();
        ll.b4 = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ benchRet = Long64Swap(ll);
          printf("%d\n", benchRet.b0);
          printf("%d\n", benchRet.b7);
          printf("%d\n", benchRet.b1);
          printf("%d\n", benchRet.b6);
          printf("%d\n", benchRet.b2);
          printf("%d\n", benchRet.b5);
          printf("%d\n", benchRet.b3);
          printf("%d\n", benchRet.b4);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
