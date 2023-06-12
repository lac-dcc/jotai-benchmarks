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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ ifindex; } ;
struct ila_map {TYPE_1__ xp; } ;

/* Variables and functions */

__attribute__((used)) static inline int ila_order(struct ila_map *ila)
{
	int score = 0;

	if (ila->xp.ifindex)
		score += 1 << 1;

	return score;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ila0 = 65025;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = ila_order(ila);
          printf("%d\n", benchRet); 
          free(ila);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ila0 = 100;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = ila_order(ila);
          printf("%d\n", benchRet); 
          free(ila);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ila0 = 1;
          struct ila_map * ila = (struct ila_map *) malloc(_len_ila0*sizeof(struct ila_map));
          for(int _i0 = 0; _i0 < _len_ila0; _i0++) {
              ila[_i0].xp.ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = ila_order(ila);
          printf("%d\n", benchRet); 
          free(ila);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
