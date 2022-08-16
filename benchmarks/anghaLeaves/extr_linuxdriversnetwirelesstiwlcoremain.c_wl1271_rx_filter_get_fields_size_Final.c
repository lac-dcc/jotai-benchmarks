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
typedef  int /*<<< orphan*/  u8 ;
struct wl12xx_rx_filter_field {int dummy; } ;
struct wl12xx_rx_filter {int num_fields; TYPE_1__* fields; } ;
struct TYPE_2__ {int len; } ;

/* Variables and functions */

int wl1271_rx_filter_get_fields_size(struct wl12xx_rx_filter *filter)
{
	int i, fields_size = 0;

	for (i = 0; i < filter->num_fields; i++)
		fields_size += filter->fields[i].len +
			sizeof(struct wl12xx_rx_filter_field) -
			sizeof(u8 *);

	return fields_size;
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
          int _len_filter0 = 1;
          struct wl12xx_rx_filter * filter = (struct wl12xx_rx_filter *) malloc(_len_filter0*sizeof(struct wl12xx_rx_filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].num_fields = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_filter__i0__fields0 = 1;
          filter[_i0].fields = (struct TYPE_2__ *) malloc(_len_filter__i0__fields0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_filter__i0__fields0; _j0++) {
            filter[_i0].fields->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wl1271_rx_filter_get_fields_size(filter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_filter0; _aux++) {
          free(filter[_aux].fields);
          }
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
