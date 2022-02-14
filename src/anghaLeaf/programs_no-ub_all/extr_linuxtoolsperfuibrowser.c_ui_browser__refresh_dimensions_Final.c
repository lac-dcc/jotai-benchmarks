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
struct ui_browser {int y; scalar_t__ x; scalar_t__ extra_title_lines; scalar_t__ rows; scalar_t__ height; scalar_t__ width; } ;

/* Variables and functions */
 scalar_t__ SLtt_Screen_Cols ; 
 scalar_t__ SLtt_Screen_Rows ; 

void ui_browser__refresh_dimensions(struct ui_browser *browser)
{
	browser->width = SLtt_Screen_Cols - 1;
	browser->height = browser->rows = SLtt_Screen_Rows - 2;
	browser->rows -= browser->extra_title_lines;
	browser->y = 1;
	browser->x = 0;
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
          int _len_browser0 = 1;
          struct ui_browser * browser = (struct ui_browser *) malloc(_len_browser0*sizeof(struct ui_browser));
          for(int _i0 = 0; _i0 < _len_browser0; _i0++) {
            browser->y = ((-2 * (next_i()%2)) + 1) * next_i();
        browser->x = ((-2 * (next_i()%2)) + 1) * next_i();
        browser->extra_title_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        browser->rows = ((-2 * (next_i()%2)) + 1) * next_i();
        browser->height = ((-2 * (next_i()%2)) + 1) * next_i();
        browser->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ui_browser__refresh_dimensions(browser);
          free(browser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
