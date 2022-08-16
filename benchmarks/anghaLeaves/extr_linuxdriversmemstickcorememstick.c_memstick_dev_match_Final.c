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
struct memstick_device_id {int match_flags; scalar_t__ type; scalar_t__ category; scalar_t__ class; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ category; scalar_t__ class; } ;
struct memstick_dev {TYPE_1__ id; } ;

/* Variables and functions */
 int MEMSTICK_MATCH_ALL ; 

__attribute__((used)) static int memstick_dev_match(struct memstick_dev *card,
			      struct memstick_device_id *id)
{
	if (id->match_flags & MEMSTICK_MATCH_ALL) {
		if ((id->type == card->id.type)
		    && (id->category == card->id.category)
		    && (id->class == card->id.class))
			return 1;
	}

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
          int _len_card0 = 1;
          struct memstick_dev * card = (struct memstick_dev *) malloc(_len_card0*sizeof(struct memstick_dev));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].id.type = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].id.category = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].id.class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_id0 = 1;
          struct memstick_device_id * id = (struct memstick_device_id *) malloc(_len_id0*sizeof(struct memstick_device_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].match_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].category = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = memstick_dev_match(card,id);
          printf("%d\n", benchRet); 
          free(card);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
