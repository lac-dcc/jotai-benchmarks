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
typedef  int /*<<< orphan*/  uint8 ;
typedef  int /*<<< orphan*/  BRUSH ;

/* Variables and functions */

void ui_draw_text(uint8 font, uint8 flags, uint8 opcode, int mixmode,
                  int x, int y,
                  int clipx, int clipy, int clipcx, int clipcy,
                  int boxx, int boxy, int boxcx, int boxcy, BRUSH * brush,
                  int bgcolour, int fgcolour, uint8* text, uint8 length)
{
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
          int font = 100;
          int flags = 100;
          int opcode = 100;
          int mixmode = 100;
          int x = 100;
          int y = 100;
          int clipx = 100;
          int clipy = 100;
          int clipcx = 100;
          int clipcy = 100;
          int boxx = 100;
          int boxy = 100;
          int boxcx = 100;
          int boxcy = 100;
          int bgcolour = 100;
          int fgcolour = 100;
          int length = 100;
          int _len_brush0 = 1;
          int * brush = (int *) malloc(_len_brush0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_text0 = 1;
          int * text = (int *) malloc(_len_text0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_text0; _i0++) {
            text[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ui_draw_text(font,flags,opcode,mixmode,x,y,clipx,clipy,clipcx,clipcy,boxx,boxy,boxcx,boxcy,brush,bgcolour,fgcolour,text,length);
          free(brush);
          free(text);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
