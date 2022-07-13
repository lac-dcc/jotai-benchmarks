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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

/* Variables and functions */

__attribute__((used)) static void setup_picture(char *picture, int bpp)
{
    int i;

    switch(bpp)
    {
        case 16:
        case 32:
            /*Set the first byte in each pixel to the index of that pixel.*/
            for (i = 0; i < 4; i++)
                picture[i * (bpp / 8)] = i;
            break;
        case 24:
            picture[0] = 0;
            picture[3] = 1;
            /*Each scanline in a bitmap must be a multiple of 4 bytes long.*/
            picture[8] = 2;
            picture[11] = 3;
            break;
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
          int bpp = 100;
          int _len_picture0 = 1;
          char * picture = (char *) malloc(_len_picture0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_picture(picture,bpp);
          free(picture);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bpp = 255;
          int _len_picture0 = 65025;
          char * picture = (char *) malloc(_len_picture0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_picture(picture,bpp);
          free(picture);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bpp = 10;
          int _len_picture0 = 100;
          char * picture = (char *) malloc(_len_picture0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_picture(picture,bpp);
          free(picture);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
