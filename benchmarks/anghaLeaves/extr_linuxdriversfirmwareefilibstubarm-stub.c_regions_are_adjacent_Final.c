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
typedef  scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ phys_addr; int num_pages; } ;
typedef  TYPE_1__ efi_memory_desc_t ;

/* Variables and functions */
 int EFI_PAGE_SIZE ; 

__attribute__((used)) static bool regions_are_adjacent(efi_memory_desc_t *left,
				 efi_memory_desc_t *right)
{
	u64 left_end;

	if (left == NULL || right == NULL)
		return false;

	left_end = left->phys_addr + left->num_pages * EFI_PAGE_SIZE;

	return left_end == right->phys_addr;
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
          int _len_left0 = 1;
          struct TYPE_4__ * left = (struct TYPE_4__ *) malloc(_len_left0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0].phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        left[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 1;
          struct TYPE_4__ * right = (struct TYPE_4__ *) malloc(_len_right0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0].phys_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        right[_i0].num_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = regions_are_adjacent(left,right);
          printf("%d\n", benchRet); 
          free(left);
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
