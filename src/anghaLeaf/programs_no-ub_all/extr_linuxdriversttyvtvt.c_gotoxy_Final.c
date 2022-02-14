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
struct vc_data {int vc_x; int vc_cols; int vc_top; int vc_bottom; int vc_rows; int vc_y; int vc_size_row; scalar_t__ vc_need_wrap; scalar_t__ vc_origin; scalar_t__ vc_pos; scalar_t__ vc_decom; } ;

/* Variables and functions */

__attribute__((used)) static void gotoxy(struct vc_data *vc, int new_x, int new_y)
{
	int min_y, max_y;

	if (new_x < 0)
		vc->vc_x = 0;
	else {
		if (new_x >= vc->vc_cols)
			vc->vc_x = vc->vc_cols - 1;
		else
			vc->vc_x = new_x;
	}

 	if (vc->vc_decom) {
		min_y = vc->vc_top;
		max_y = vc->vc_bottom;
	} else {
		min_y = 0;
		max_y = vc->vc_rows;
	}
	if (new_y < min_y)
		vc->vc_y = min_y;
	else if (new_y >= max_y)
		vc->vc_y = max_y - 1;
	else
		vc->vc_y = new_y;
	vc->vc_pos = vc->vc_origin + vc->vc_y * vc->vc_size_row + (vc->vc_x<<1);
	vc->vc_need_wrap = 0;
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
          int new_x = 255;
          int new_y = 255;
          int _len_vc0 = 1;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc->vc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_cols = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_top = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_rows = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_size_row = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_need_wrap = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        vc->vc_decom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gotoxy(vc,new_x,new_y);
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
