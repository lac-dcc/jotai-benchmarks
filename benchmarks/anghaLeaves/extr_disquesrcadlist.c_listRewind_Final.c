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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  direction; int /*<<< orphan*/  next; } ;
typedef  TYPE_1__ listIter ;
struct TYPE_6__ {int /*<<< orphan*/  head; } ;
typedef  TYPE_2__ list ;

/* Variables and functions */
 int /*<<< orphan*/  AL_START_HEAD ; 

void listRewind(list *list, listIter *li) {
    li->next = list->head;
    li->direction = AL_START_HEAD;
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
          int _len_list0 = 1;
          struct TYPE_6__ * list = (struct TYPE_6__ *) malloc(_len_list0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_li0 = 1;
          struct TYPE_5__ * li = (struct TYPE_5__ *) malloc(_len_li0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_li0; _i0++) {
            li[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
        li[_i0].next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          listRewind(list,li);
          free(list);
          free(li);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
