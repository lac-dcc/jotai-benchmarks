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
typedef  int u8 ;
struct vc_data {int vc_itcolor; int vc_ulcolor; int vc_halfcolor; } ;
typedef  int attr ;

/* Variables and functions */
 scalar_t__ vga_can_do_color ; 

__attribute__((used)) static u8 vgacon_build_attr(struct vc_data *c, u8 color, u8 intensity,
			    u8 blink, u8 underline, u8 reverse, u8 italic)
{
	u8 attr = color;

	if (vga_can_do_color) {
		if (italic)
			attr = (attr & 0xF0) | c->vc_itcolor;
		else if (underline)
			attr = (attr & 0xf0) | c->vc_ulcolor;
		else if (intensity == 0)
			attr = (attr & 0xf0) | c->vc_halfcolor;
	}
	if (reverse)
		attr =
		    ((attr) & 0x88) | ((((attr) >> 4) | ((attr) << 4)) &
				       0x77);
	if (blink)
		attr ^= 0x80;
	if (intensity == 2)
		attr ^= 0x08;
	if (!vga_can_do_color) {
		if (italic)
			attr = (attr & 0xF8) | 0x02;
		else if (underline)
			attr = (attr & 0xf8) | 0x01;
		else if (intensity == 0)
			attr = (attr & 0xf0) | 0x08;
	}
	return attr;
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
          int color = 100;
          int intensity = 100;
          int blink = 100;
          int underline = 100;
          int reverse = 100;
          int italic = 100;
          int _len_c0 = 1;
          struct vc_data * c = (struct vc_data *) malloc(_len_c0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].vc_itcolor = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].vc_ulcolor = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].vc_halfcolor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vgacon_build_attr(c,color,intensity,blink,underline,reverse,italic);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
