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
struct device_node {int dummy; } ;
struct clcd_fb {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int versatile_clcd_init_panel(struct clcd_fb *fb,
					    struct device_node *panel)
{
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
          int _len_fb0 = 1;
          struct clcd_fb * fb = (struct clcd_fb *) malloc(_len_fb0*sizeof(struct clcd_fb));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_panel0 = 1;
          struct device_node * panel = (struct device_node *) malloc(_len_panel0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_panel0; _i0++) {
            panel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = versatile_clcd_init_panel(fb,panel);
          printf("%d\n", benchRet); 
          free(fb);
          free(panel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
