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
       0            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned char* data; } ;
typedef  TYPE_1__ ddsBuffer_t ;

/* Variables and functions */

__attribute__((used)) static int DDSDecompressARGB8888( ddsBuffer_t *dds, int width, int height, unsigned char *pixels ){
	int x, y;
	unsigned char               *in, *out;


	/* setup */
	in = dds->data;
	out = pixels;

	/* walk y */
	for ( y = 0; y < height; y++ )
	{
		/* walk x */
		for ( x = 0; x < width; x++ )
		{
			*out++ = *in++;
			*out++ = *in++;
			*out++ = *in++;
			*out++ = *in++;
		}
	}

	/* return ok */
	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dds0 = 1;
          struct TYPE_3__ * dds = (struct TYPE_3__ *) malloc(_len_dds0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dds0; _i0++) {
              int _len_dds__i0__data0 = 1;
          dds[_i0].data = (unsigned char *) malloc(_len_dds__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_dds__i0__data0; _j0++) {
            dds[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_pixels0 = 1;
          unsigned char * pixels = (unsigned char *) malloc(_len_pixels0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pixels0; _i0++) {
            pixels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = DDSDecompressARGB8888(dds,width,height,pixels);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dds0; _aux++) {
          free(dds[_aux].data);
          }
          free(dds);
          free(pixels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
