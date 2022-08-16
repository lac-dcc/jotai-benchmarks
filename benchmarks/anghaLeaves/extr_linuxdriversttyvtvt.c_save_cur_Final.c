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
struct vc_data {int /*<<< orphan*/  vc_G1_charset; int /*<<< orphan*/  vc_saved_G1; int /*<<< orphan*/  vc_G0_charset; int /*<<< orphan*/  vc_saved_G0; int /*<<< orphan*/  vc_color; int /*<<< orphan*/  vc_s_color; int /*<<< orphan*/  vc_charset; int /*<<< orphan*/  vc_s_charset; int /*<<< orphan*/  vc_reverse; int /*<<< orphan*/  vc_s_reverse; int /*<<< orphan*/  vc_blink; int /*<<< orphan*/  vc_s_blink; int /*<<< orphan*/  vc_underline; int /*<<< orphan*/  vc_s_underline; int /*<<< orphan*/  vc_italic; int /*<<< orphan*/  vc_s_italic; int /*<<< orphan*/  vc_intensity; int /*<<< orphan*/  vc_s_intensity; int /*<<< orphan*/  vc_y; int /*<<< orphan*/  vc_saved_y; int /*<<< orphan*/  vc_x; int /*<<< orphan*/  vc_saved_x; } ;

/* Variables and functions */

__attribute__((used)) static void save_cur(struct vc_data *vc)
{
	vc->vc_saved_x		= vc->vc_x;
	vc->vc_saved_y		= vc->vc_y;
	vc->vc_s_intensity	= vc->vc_intensity;
	vc->vc_s_italic         = vc->vc_italic;
	vc->vc_s_underline	= vc->vc_underline;
	vc->vc_s_blink		= vc->vc_blink;
	vc->vc_s_reverse	= vc->vc_reverse;
	vc->vc_s_charset	= vc->vc_charset;
	vc->vc_s_color		= vc->vc_color;
	vc->vc_saved_G0		= vc->vc_G0_charset;
	vc->vc_saved_G1		= vc->vc_G1_charset;
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
          int _len_vc0 = 1;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].vc_G1_charset = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_saved_G1 = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_G0_charset = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_saved_G0 = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_color = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_color = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_charset = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_charset = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_reverse = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_reverse = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_blink = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_blink = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_underline = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_underline = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_italic = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_italic = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_intensity = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_s_intensity = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_saved_y = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_x = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_saved_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          save_cur(vc);
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
