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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct list_head {int /*<<< orphan*/  next; } ;

/* Variables and functions */
 unsigned long RB_PAGE_HEAD ; 
 unsigned long RB_PAGE_UPDATE ; 

__attribute__((used)) static void rb_set_list_to_head(struct ring_buffer_per_cpu *cpu_buffer,
				struct list_head *list)
{
	unsigned long *ptr;

	ptr = (unsigned long *)&list->next;
	*ptr |= RB_PAGE_HEAD;
	*ptr &= ~RB_PAGE_UPDATE;
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

    // big-arr
    case 0:
    {
          int _len_cpu_buffer0 = 65025;
          struct ring_buffer_per_cpu * cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _i0 = 0; _i0 < _len_cpu_buffer0; _i0++) {
            cpu_buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_list0 = 65025;
          struct list_head * list = (struct list_head *) malloc(_len_list0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rb_set_list_to_head(cpu_buffer,list);
          free(cpu_buffer);
          free(list);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cpu_buffer0 = 100;
          struct ring_buffer_per_cpu * cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _i0 = 0; _i0 < _len_cpu_buffer0; _i0++) {
            cpu_buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_list0 = 100;
          struct list_head * list = (struct list_head *) malloc(_len_list0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rb_set_list_to_head(cpu_buffer,list);
          free(cpu_buffer);
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
