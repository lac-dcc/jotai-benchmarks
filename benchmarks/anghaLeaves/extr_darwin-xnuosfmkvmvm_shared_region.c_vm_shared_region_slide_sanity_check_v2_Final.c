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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* vm_shared_region_slide_info_entry_v2_t ;
typedef  int uint32_t ;
typedef  int mach_vm_size_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
struct TYPE_3__ {scalar_t__ page_size; int page_starts_count; int page_extras_count; } ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_FAILURE ; 
 int /*<<< orphan*/  KERN_SUCCESS ; 
 scalar_t__ PAGE_SIZE_FOR_SR_SLIDE ; 

__attribute__((used)) static kern_return_t
vm_shared_region_slide_sanity_check_v2(vm_shared_region_slide_info_entry_v2_t s_info, mach_vm_size_t slide_info_size)
{
	if (s_info->page_size != PAGE_SIZE_FOR_SR_SLIDE) {
		return KERN_FAILURE;
	}

	/* Ensure that the slide info doesn't reference any data outside of its bounds. */

	uint32_t page_starts_count = s_info->page_starts_count;
	uint32_t page_extras_count = s_info->page_extras_count;
	mach_vm_size_t num_trailing_entries = page_starts_count + page_extras_count;
	if (num_trailing_entries < page_starts_count) {
		return KERN_FAILURE;
	}

	/* Scale by sizeof(uint16_t). Hard-coding the size simplifies the overflow check. */
	mach_vm_size_t trailing_size = num_trailing_entries << 1;
	if (trailing_size >> 1 != num_trailing_entries) {
		return KERN_FAILURE;
	}

	mach_vm_size_t required_size = sizeof(*s_info) + trailing_size;
	if (required_size < sizeof(*s_info)) {
		return KERN_FAILURE;
	}

	if (required_size > slide_info_size) {
		return KERN_FAILURE;
	}

	return KERN_SUCCESS;
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
          int slide_info_size = 100;
          int _len_s_info0 = 1;
          struct TYPE_3__ * s_info = (struct TYPE_3__ *) malloc(_len_s_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s_info0; _i0++) {
            s_info[_i0].page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s_info[_i0].page_starts_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s_info[_i0].page_extras_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vm_shared_region_slide_sanity_check_v2(s_info,slide_info_size);
          printf("%d\n", benchRet); 
          free(s_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
