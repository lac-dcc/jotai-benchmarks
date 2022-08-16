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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct todo_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {scalar_t__ command; } ;

/* Variables and functions */
 scalar_t__ TODO_COMMENT ; 

__attribute__((used)) static int count_commands(struct todo_list *todo_list)
{
	int count = 0, i;

	for (i = 0; i < todo_list->nr; i++)
		if (todo_list->items[i].command != TODO_COMMENT)
			count++;

	return count;
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
          int _len_todo_list0 = 1;
          struct todo_list * todo_list = (struct todo_list *) malloc(_len_todo_list0*sizeof(struct todo_list));
          for(int _i0 = 0; _i0 < _len_todo_list0; _i0++) {
            todo_list[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_todo_list__i0__items0 = 1;
          todo_list[_i0].items = (struct TYPE_2__ *) malloc(_len_todo_list__i0__items0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_todo_list__i0__items0; _j0++) {
            todo_list[_i0].items->command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = count_commands(todo_list);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_todo_list0; _aux++) {
          free(todo_list[_aux].items);
          }
          free(todo_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
