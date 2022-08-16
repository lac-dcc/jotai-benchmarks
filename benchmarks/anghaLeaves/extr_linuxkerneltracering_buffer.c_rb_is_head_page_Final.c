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
struct ring_buffer_per_cpu {int dummy; } ;
struct list_head {scalar_t__ next; } ;
struct buffer_page {int /*<<< orphan*/  list; } ;

/* Variables and functions */
 unsigned long RB_FLAG_MASK ; 
 int RB_PAGE_MOVED ; 

__attribute__((used)) static inline int
rb_is_head_page(struct ring_buffer_per_cpu *cpu_buffer,
		struct buffer_page *page, struct list_head *list)
{
	unsigned long val;

	val = (unsigned long)list->next;

	if ((val & ~RB_FLAG_MASK) != (unsigned long)&page->list)
		return RB_PAGE_MOVED;

	return val & RB_FLAG_MASK;
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
          int _len_cpu_buffer0 = 1;
          struct ring_buffer_per_cpu * cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _i0 = 0; _i0 < _len_cpu_buffer0; _i0++) {
            cpu_buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page0 = 1;
          struct buffer_page * page = (struct buffer_page *) malloc(_len_page0*sizeof(struct buffer_page));
          for(int _i0 = 0; _i0 < _len_page0; _i0++) {
            page[_i0].list = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_list0 = 1;
          struct list_head * list = (struct list_head *) malloc(_len_list0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rb_is_head_page(cpu_buffer,page,list);
          printf("%d\n", benchRet); 
          free(cpu_buffer);
          free(page);
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
