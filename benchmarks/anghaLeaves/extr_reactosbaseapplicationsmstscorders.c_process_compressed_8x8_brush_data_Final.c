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
       0            big-arr\n\
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
typedef  int uint8 ;

/* Variables and functions */

__attribute__((used)) static void
process_compressed_8x8_brush_data(uint8 * in, uint8 * out, int Bpp)
{
	int x, y, pal_index, in_index, shift, do2, i;
	uint8 *pal;

	in_index = 0;
	pal = in + 16;
	/* read it bottom up */
	for (y = 7; y >= 0; y--)
	{
		/* 2 bytes per row */
		x = 0;
		for (do2 = 0; do2 < 2; do2++)
		{
			/* 4 pixels per byte */
			shift = 6;
			while (shift >= 0)
			{
				pal_index = (in[in_index] >> shift) & 3;
				/* size of palette entries depends on Bpp */
				for (i = 0; i < Bpp; i++)
				{
					out[(y * 8 + x) * Bpp + i] = pal[pal_index * Bpp + i];
				}
				x++;
				shift -= 2;
			}
			in_index++;
		}
	}
}

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
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 344294
          // ------------------------------- 
          // static_instructions_O1 : 69
          // dynamic_instructions_O1 : 82945
          // ------------------------------- 
          // static_instructions_O2 : 546
          // dynamic_instructions_O2 : 17321
          // ------------------------------- 
          // static_instructions_O3 : 851
          // dynamic_instructions_O3 : 16471
          // ------------------------------- 
          // static_instructions_Ofast : 851
          // dynamic_instructions_Ofast : 16471
          // ------------------------------- 
          // static_instructions_Os : 69
          // dynamic_instructions_Os : 82829
          // ------------------------------- 
          // static_instructions_Oz : 78
          // dynamic_instructions_Oz : 99266
          // ------------------------------- 

          int Bpp = 255;
        
          int _len_in0 = 65025;
          int * in = (int *) malloc(_len_in0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          process_compressed_8x8_brush_data(in,out,Bpp);
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
