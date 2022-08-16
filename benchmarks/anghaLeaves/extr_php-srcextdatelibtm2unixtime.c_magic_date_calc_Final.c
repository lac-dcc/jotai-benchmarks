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
struct TYPE_3__ {int d; int y; int m; } ;
typedef  TYPE_1__ timelib_time ;
typedef  int timelib_sll ;

/* Variables and functions */
 int EPOCH_DAY ; 

__attribute__((used)) static void magic_date_calc(timelib_time *time)
{
	timelib_sll y, ddd, mi, mm, dd, g;

	/* The algorithm doesn't work before the year 1 */
	if (time->d < -719498) {
		return;
	}

	g = time->d + EPOCH_DAY - 1;

	y = (10000 * g + 14780) / 3652425;
	ddd = g - ((365*y) + (y/4) - (y/100) + (y/400));
	if (ddd < 0) {
		y--;
		ddd = g - ((365*y) + (y/4) - (y/100) + (y/400));
	}
	mi = (100 * ddd + 52) / 3060;
	mm = ((mi + 2) % 12) + 1;
	y = y + (mi + 2) / 12;
	dd = ddd - ((mi * 306 + 5) / 10) + 1;
	time->y = y;
	time->m = mm;
	time->d = dd;
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
          int _len_time0 = 1;
          struct TYPE_3__ * time = (struct TYPE_3__ *) malloc(_len_time0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_time0; _i0++) {
            time[_i0].d = ((-2 * (next_i()%2)) + 1) * next_i();
        time[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        time[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          magic_date_calc(time);
          free(time);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
