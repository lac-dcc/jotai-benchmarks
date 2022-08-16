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
       1            big-arr-10x\n\
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
typedef  int u32 ;
typedef  int u16 ;

/* Variables and functions */
 short BLACK ; 
 int DIFFUSING_MATRIX_HEIGHT ; 
 int DIFFUSING_MATRIX_WIDTH ; 
 short WHITE ; 
 char** diffusing_matrix ; 

__attribute__((used)) static void iterate_diffusion_matrix(u32 xres, u32 yres, int x,
				     int y, signed short *convert_buf,
				     signed short pixel, signed short error)
{
	u16 i, j;

	/* diffusion matrix row */
	for (i = 0; i < DIFFUSING_MATRIX_WIDTH; ++i)
		/* diffusion matrix column */
		for (j = 0; j < DIFFUSING_MATRIX_HEIGHT; ++j) {
			signed short *write_pos;
			signed char coeff;

			/* skip pixels out of zone */
			if (x + i < 0 || x + i >= xres || y + j >= yres)
				continue;
			write_pos = &convert_buf[(y + j) * xres + x + i];
			coeff = diffusing_matrix[i][j];
			if (-1 == coeff) {
				/* pixel itself */
				*write_pos = pixel;
			} else {
				signed short p = *write_pos + error * coeff;

				if (p > WHITE)
					p = WHITE;
				if (p < BLACK)
					p = BLACK;
				*write_pos = p;
			}
		}
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
          int xres = 100;
          int yres = 100;
          int x = 100;
          int y = 100;
          short pixel = 100;
          short error = 100;
          int _len_convert_buf0 = 1;
          short * convert_buf = (short *) malloc(_len_convert_buf0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_convert_buf0; _i0++) {
            convert_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iterate_diffusion_matrix(xres,yres,x,y,convert_buf,pixel,error);
          free(convert_buf);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int xres = 10;
          int yres = 10;
          int x = 10;
          int y = 10;
          short pixel = 10;
          short error = 10;
          int _len_convert_buf0 = 100;
          short * convert_buf = (short *) malloc(_len_convert_buf0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_convert_buf0; _i0++) {
            convert_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iterate_diffusion_matrix(xres,yres,x,y,convert_buf,pixel,error);
          free(convert_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
