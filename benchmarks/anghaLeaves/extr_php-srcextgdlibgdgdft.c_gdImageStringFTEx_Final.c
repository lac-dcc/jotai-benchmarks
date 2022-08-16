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
typedef  int /*<<< orphan*/  gdImage ;
typedef  int /*<<< orphan*/  gdFTStringExtraPtr ;

/* Variables and functions */

char *
gdImageStringFTEx (gdImage * im, int *brect, int fg, char *fontlist,
		 double ptsize, double angle, int x, int y, char *string,
		 gdFTStringExtraPtr strex)
{
	return "libgd was not built with FreeType font support\n";
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
          int fg = 100;
          double ptsize = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double angle = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int x = 100;
          int y = 100;
          int strex = 100;
          int _len_im0 = 1;
          int * im = (int *) malloc(_len_im0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_im0; _i0++) {
            im[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_brect0 = 1;
          int * brect = (int *) malloc(_len_brect0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_brect0; _i0++) {
            brect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fontlist0 = 1;
          char * fontlist = (char *) malloc(_len_fontlist0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fontlist0; _i0++) {
            fontlist[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_string0 = 1;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = gdImageStringFTEx(im,brect,fg,fontlist,ptsize,angle,x,y,string,strex);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(im);
          free(brect);
          free(fontlist);
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
