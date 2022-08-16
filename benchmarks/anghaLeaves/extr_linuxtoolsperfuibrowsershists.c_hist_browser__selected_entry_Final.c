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
struct hist_entry {int dummy; } ;
struct hist_browser {struct hist_entry* he_selection; } ;

/* Variables and functions */

__attribute__((used)) static struct hist_entry *hist_browser__selected_entry(struct hist_browser *browser)
{
	return browser->he_selection;
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
          int _len_browser0 = 1;
          struct hist_browser * browser = (struct hist_browser *) malloc(_len_browser0*sizeof(struct hist_browser));
          for(int _i0 = 0; _i0 < _len_browser0; _i0++) {
              int _len_browser__i0__he_selection0 = 1;
          browser[_i0].he_selection = (struct hist_entry *) malloc(_len_browser__i0__he_selection0*sizeof(struct hist_entry));
          for(int _j0 = 0; _j0 < _len_browser__i0__he_selection0; _j0++) {
            browser[_i0].he_selection->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hist_entry * benchRet = hist_browser__selected_entry(browser);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_browser0; _aux++) {
          free(browser[_aux].he_selection);
          }
          free(browser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
