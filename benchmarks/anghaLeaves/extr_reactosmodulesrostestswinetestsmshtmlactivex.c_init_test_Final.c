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

/* Variables and functions */
 int TEST_DISPONLY ; 
 int TEST_NOQUICKACT ; 
 int /*<<< orphan*/  TRUE ; 
 scalar_t__ activex_refcnt ; 
 int /*<<< orphan*/  have_container ; 
 int no_quickact ; 
 int plugin_behavior ; 

__attribute__((used)) static void init_test(int behavior)
{
    plugin_behavior = behavior;

    activex_refcnt = 0;
    no_quickact = behavior == TEST_NOQUICKACT || behavior == TEST_DISPONLY;
    have_container = TRUE;
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
          int behavior = 100;
          init_test(behavior);
        
        break;
    }
    // big-arr
    case 1:
    {
          int behavior = 255;
          init_test(behavior);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int behavior = 10;
          init_test(behavior);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
