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
typedef  int /*<<< orphan*/ * BusLogic_CommandSizeBuckets_T ;

/* Variables and functions */

__attribute__((used)) static void
BusLogic_IncrementSizeBucket(BusLogic_CommandSizeBuckets_T CommandSizeBuckets,
                             unsigned int Amount)
{
  int Index = 0;
  if (Amount < 8*1024)
  {
    if (Amount < 2*1024)
        Index = (Amount < 1*1024 ? 0 : 1);
    else
        Index = (Amount < 4*1024 ? 2 : 3);
  }
  else if (Amount < 128*1024)
  {
    if (Amount < 32*1024)
        Index = (Amount < 16*1024 ? 4 : 5);
    else
        Index = (Amount < 64*1024 ? 6 : 7);
  }
  else
      Index = (Amount < 256*1024 ? 8 : 9);
  CommandSizeBuckets[Index]++;
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
          unsigned int Amount = 100;
          int _len_CommandSizeBuckets0 = 1;
          int * CommandSizeBuckets = (int *) malloc(_len_CommandSizeBuckets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CommandSizeBuckets0; _i0++) {
            CommandSizeBuckets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BusLogic_IncrementSizeBucket(CommandSizeBuckets,Amount);
          free(CommandSizeBuckets);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int Amount = 10;
          int _len_CommandSizeBuckets0 = 100;
          int * CommandSizeBuckets = (int *) malloc(_len_CommandSizeBuckets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_CommandSizeBuckets0; _i0++) {
            CommandSizeBuckets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          BusLogic_IncrementSizeBucket(CommandSizeBuckets,Amount);
          free(CommandSizeBuckets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
