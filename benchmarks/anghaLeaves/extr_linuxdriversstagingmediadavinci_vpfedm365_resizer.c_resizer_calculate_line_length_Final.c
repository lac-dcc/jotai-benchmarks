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
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ MEDIA_BUS_FMT_SGRBG12_1X12 ; 
 scalar_t__ MEDIA_BUS_FMT_UYVY8_2X8 ; 

__attribute__((used)) static void
resizer_calculate_line_length(u32 pix, int width, int height,
			      int *line_len, int *line_len_c)
{
	*line_len = 0;
	*line_len_c = 0;

	if (pix == MEDIA_BUS_FMT_UYVY8_2X8 ||
	    pix == MEDIA_BUS_FMT_SGRBG12_1X12) {
		*line_len = width << 1;
	} else {
		*line_len = width;
		*line_len_c = width;
	}

	/* adjust the line len to be a multiple of 32 */
	*line_len += 31;
	*line_len &= ~0x1f;
	*line_len_c += 31;
	*line_len_c &= ~0x1f;
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
          long pix = 100;
          int width = 100;
          int height = 100;
          int _len_line_len0 = 1;
          int * line_len = (int *) malloc(_len_line_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_line_len0; _i0++) {
            line_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_line_len_c0 = 1;
          int * line_len_c = (int *) malloc(_len_line_len_c0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_line_len_c0; _i0++) {
            line_len_c[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resizer_calculate_line_length(pix,width,height,line_len,line_len_c);
          free(line_len);
          free(line_len_c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
