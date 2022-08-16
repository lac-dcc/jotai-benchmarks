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
typedef  int u32 ;
struct atom_memory_info {scalar_t__ mem_type; } ;

/* Variables and functions */
 scalar_t__ MEM_TYPE_GDDR3 ; 

__attribute__((used)) static u32 rv770_get_mclk_split_point(struct atom_memory_info *memory_info)
{
	if (memory_info->mem_type == MEM_TYPE_GDDR3)
		return 30000;

	return 0;
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
          int _len_memory_info0 = 1;
          struct atom_memory_info * memory_info = (struct atom_memory_info *) malloc(_len_memory_info0*sizeof(struct atom_memory_info));
          for(int _i0 = 0; _i0 < _len_memory_info0; _i0++) {
            memory_info[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rv770_get_mclk_split_point(memory_info);
          printf("%d\n", benchRet); 
          free(memory_info);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_memory_info0 = 100;
          struct atom_memory_info * memory_info = (struct atom_memory_info *) malloc(_len_memory_info0*sizeof(struct atom_memory_info));
          for(int _i0 = 0; _i0 < _len_memory_info0; _i0++) {
            memory_info[_i0].mem_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rv770_get_mclk_split_point(memory_info);
          printf("%d\n", benchRet); 
          free(memory_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
