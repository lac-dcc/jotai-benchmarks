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
struct mpx_bd_entry {scalar_t__ contents; } ;

/* Variables and functions */
 unsigned long MPX_BOUNDS_TABLE_ENTRY_VALID_BIT ; 

__attribute__((used)) static inline int bd_entry_valid(struct mpx_bd_entry *bounds_dir_entry)
{
	unsigned long __bd_entry = (unsigned long)bounds_dir_entry->contents;
	return (__bd_entry & MPX_BOUNDS_TABLE_ENTRY_VALID_BIT);
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
          int _len_bounds_dir_entry0 = 1;
          struct mpx_bd_entry * bounds_dir_entry = (struct mpx_bd_entry *) malloc(_len_bounds_dir_entry0*sizeof(struct mpx_bd_entry));
          for(int _i0 = 0; _i0 < _len_bounds_dir_entry0; _i0++) {
            bounds_dir_entry[_i0].contents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bd_entry_valid(bounds_dir_entry);
          printf("%d\n", benchRet); 
          free(bounds_dir_entry);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_bounds_dir_entry0 = 100;
          struct mpx_bd_entry * bounds_dir_entry = (struct mpx_bd_entry *) malloc(_len_bounds_dir_entry0*sizeof(struct mpx_bd_entry));
          for(int _i0 = 0; _i0 < _len_bounds_dir_entry0; _i0++) {
            bounds_dir_entry[_i0].contents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bd_entry_valid(bounds_dir_entry);
          printf("%d\n", benchRet); 
          free(bounds_dir_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
