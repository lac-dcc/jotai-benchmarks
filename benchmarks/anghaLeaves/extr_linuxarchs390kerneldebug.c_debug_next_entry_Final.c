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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ act_entry; int act_page; scalar_t__ act_area; TYPE_2__* debug_info_snap; } ;
typedef  TYPE_1__ file_private_info_t ;
struct TYPE_5__ {scalar_t__ entry_size; int pages_per_area; scalar_t__ nr_areas; int /*<<< orphan*/  areas; } ;
typedef  TYPE_2__ debug_info_t ;

/* Variables and functions */
 scalar_t__ DEBUG_PROLOG_ENTRY ; 
 scalar_t__ PAGE_SIZE ; 

__attribute__((used)) static inline int debug_next_entry(file_private_info_t *p_info)
{
	debug_info_t *id;

	id = p_info->debug_info_snap;
	if (p_info->act_entry == DEBUG_PROLOG_ENTRY) {
		p_info->act_entry = 0;
		p_info->act_page  = 0;
		goto out;
	}
	if (!id->areas)
		return 1;
	p_info->act_entry += id->entry_size;
	/* switch to next page, if we reached the end of the page  */
	if (p_info->act_entry > (PAGE_SIZE - id->entry_size)) {
		/* next page */
		p_info->act_entry = 0;
		p_info->act_page += 1;
		if ((p_info->act_page % id->pages_per_area) == 0) {
			/* next area */
			p_info->act_area++;
			p_info->act_page = 0;
		}
		if (p_info->act_area >= id->nr_areas)
			return 1;
	}
out:
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
          int _len_p_info0 = 1;
          struct TYPE_4__ * p_info = (struct TYPE_4__ *) malloc(_len_p_info0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_p_info0; _i0++) {
            p_info[_i0].act_entry = ((-2 * (next_i()%2)) + 1) * next_i();
        p_info[_i0].act_page = ((-2 * (next_i()%2)) + 1) * next_i();
        p_info[_i0].act_area = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p_info__i0__debug_info_snap0 = 1;
          p_info[_i0].debug_info_snap = (struct TYPE_5__ *) malloc(_len_p_info__i0__debug_info_snap0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_p_info__i0__debug_info_snap0; _j0++) {
            p_info[_i0].debug_info_snap->entry_size = ((-2 * (next_i()%2)) + 1) * next_i();
        p_info[_i0].debug_info_snap->pages_per_area = ((-2 * (next_i()%2)) + 1) * next_i();
        p_info[_i0].debug_info_snap->nr_areas = ((-2 * (next_i()%2)) + 1) * next_i();
        p_info[_i0].debug_info_snap->areas = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = debug_next_entry(p_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p_info0; _aux++) {
          free(p_info[_aux].debug_info_snap);
          }
          free(p_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
