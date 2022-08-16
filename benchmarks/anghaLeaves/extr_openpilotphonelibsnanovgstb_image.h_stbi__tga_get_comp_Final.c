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

/* Variables and functions */
 int STBI_grey ; 
 int STBI_grey_alpha ; 
 int STBI_rgb ; 

__attribute__((used)) static int stbi__tga_get_comp(int bits_per_pixel, int is_grey, int* is_rgb16)
{
   // only RGB or RGBA (incl. 16bit) or grey allowed
   if(is_rgb16) *is_rgb16 = 0;
   switch(bits_per_pixel) {
      case 8:  return STBI_grey;
      case 16: if(is_grey) return STBI_grey_alpha;
            // else: fall-through
      case 15: if(is_rgb16) *is_rgb16 = 1;
            return STBI_rgb;
      case 24: // fall-through
      case 32: return bits_per_pixel/8;
      default: return 0;
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
          int bits_per_pixel = 100;
          int is_grey = 100;
          int _len_is_rgb160 = 1;
          int * is_rgb16 = (int *) malloc(_len_is_rgb160*sizeof(int));
          for(int _i0 = 0; _i0 < _len_is_rgb160; _i0++) {
            is_rgb16[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stbi__tga_get_comp(bits_per_pixel,is_grey,is_rgb16);
          printf("%d\n", benchRet); 
          free(is_rgb16);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bits_per_pixel = 10;
          int is_grey = 10;
          int _len_is_rgb160 = 100;
          int * is_rgb16 = (int *) malloc(_len_is_rgb160*sizeof(int));
          for(int _i0 = 0; _i0 < _len_is_rgb160; _i0++) {
            is_rgb16[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stbi__tga_get_comp(bits_per_pixel,is_grey,is_rgb16);
          printf("%d\n", benchRet); 
          free(is_rgb16);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
