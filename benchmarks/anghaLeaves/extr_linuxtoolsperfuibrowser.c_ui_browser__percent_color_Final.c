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
struct ui_browser {scalar_t__ navkeypressed; int /*<<< orphan*/  use_navkeypressed; } ;

/* Variables and functions */
 int HE_COLORSET_MEDIUM ; 
 int HE_COLORSET_NORMAL ; 
 int HE_COLORSET_SELECTED ; 
 int HE_COLORSET_TOP ; 
 double MIN_GREEN ; 
 double MIN_RED ; 

__attribute__((used)) static int ui_browser__percent_color(struct ui_browser *browser,
				     double percent, bool current)
{
	if (current && (!browser->use_navkeypressed || browser->navkeypressed))
		return HE_COLORSET_SELECTED;
	if (percent >= MIN_RED)
		return HE_COLORSET_TOP;
	if (percent >= MIN_GREEN)
		return HE_COLORSET_MEDIUM;
	return HE_COLORSET_NORMAL;
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
          double percent = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int current = 100;
          int _len_browser0 = 1;
          struct ui_browser * browser = (struct ui_browser *) malloc(_len_browser0*sizeof(struct ui_browser));
          for(int _i0 = 0; _i0 < _len_browser0; _i0++) {
            browser[_i0].navkeypressed = ((-2 * (next_i()%2)) + 1) * next_i();
        browser[_i0].use_navkeypressed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ui_browser__percent_color(browser,percent,current);
          printf("%d\n", benchRet); 
          free(browser);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
