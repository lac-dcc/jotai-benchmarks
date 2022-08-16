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
struct TYPE_2__ {int lineno; int offset; } ;
struct file_finder {int lines; int height; TYPE_1__ pos; } ;

/* Variables and functions */

__attribute__((used)) static void
file_finder_move(struct file_finder *finder, int direction)
{
	if (direction < 0 && finder->pos.lineno <= -direction)
		finder->pos.lineno = 0;
	else
		finder->pos.lineno += direction;

	if (finder->pos.lineno >= finder->lines) {
		if (finder->lines > 0)
			finder->pos.lineno = finder->lines - 1;
		else
			finder->pos.lineno = 0;
        }

	if (finder->pos.offset + finder->height <= finder->pos.lineno)
		finder->pos.offset = finder->pos.lineno - (finder->height / 2);

	if (finder->pos.offset > finder->pos.lineno)
		finder->pos.offset = finder->pos.lineno;

	if (finder->lines <= finder->height)
		finder->pos.offset = 0;
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
          int direction = 100;
          int _len_finder0 = 1;
          struct file_finder * finder = (struct file_finder *) malloc(_len_finder0*sizeof(struct file_finder));
          for(int _i0 = 0; _i0 < _len_finder0; _i0++) {
            finder[_i0].lines = ((-2 * (next_i()%2)) + 1) * next_i();
        finder[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        finder[_i0].pos.lineno = ((-2 * (next_i()%2)) + 1) * next_i();
        finder[_i0].pos.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          file_finder_move(finder,direction);
          free(finder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
