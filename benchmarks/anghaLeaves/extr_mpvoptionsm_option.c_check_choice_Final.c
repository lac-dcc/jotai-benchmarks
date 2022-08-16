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

/* Variables and functions */

__attribute__((used)) static void check_choice(int dir, int val, bool *found, int *best, int choice)
{
    if ((dir == -1 && (!(*found) || choice > (*best)) && choice < val) ||
        (dir == +1 && (!(*found) || choice < (*best)) && choice > val))
    {
        *found = true;
        *best = choice;
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
          int dir = 100;
          int val = 100;
          int choice = 100;
          int _len_found0 = 1;
          int * found = (int *) malloc(_len_found0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_found0; _i0++) {
            found[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_best0 = 1;
          int * best = (int *) malloc(_len_best0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_best0; _i0++) {
            best[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          check_choice(dir,val,found,best,choice);
          free(found);
          free(best);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
