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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int height; int width; } ;
struct vc_data {TYPE_1__ vc_font; } ;

/* Variables and functions */
 int FBCON_ATTRIBUTE_BOLD ; 
 int FBCON_ATTRIBUTE_REVERSE ; 
 int FBCON_ATTRIBUTE_UNDERLINE ; 

__attribute__((used)) static void ud_update_attr(u8 *dst, u8 *src, int attribute,
				  struct vc_data *vc)
{
	int i, offset = (vc->vc_font.height < 10) ? 1 : 2;
	int width = (vc->vc_font.width + 7) >> 3;
	unsigned int cellsize = vc->vc_font.height * width;
	u8 c;

	offset = offset * width;

	for (i = 0; i < cellsize; i++) {
		c = src[i];
		if (attribute & FBCON_ATTRIBUTE_UNDERLINE && i < offset)
			c = 0xff;
		if (attribute & FBCON_ATTRIBUTE_BOLD)
			c |= c << 1;
		if (attribute & FBCON_ATTRIBUTE_REVERSE)
			c = ~c;
		dst[i] = c;
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
          // static_instructions_O0 : 55
          // dynamic_instructions_O0 : 33403
          // ------------------------------- 
          // static_instructions_O1 : 46
          // dynamic_instructions_O1 : 27216
          // ------------------------------- 
          // static_instructions_O2 : 130
          // dynamic_instructions_O2 : 12142
          // ------------------------------- 
          // static_instructions_O3 : 130
          // dynamic_instructions_O3 : 12142
          // ------------------------------- 
          // static_instructions_Ofast : 130
          // dynamic_instructions_Ofast : 12142
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 27216
          // ------------------------------- 
          // static_instructions_Oz : 43
          // dynamic_instructions_Oz : 28450
          // ------------------------------- 

          int attribute = 255;
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_vc0 = 65025;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
              vc[_i0].vc_font.height = ((-2 * (next_i()%2)) + 1) * next_i();
          vc[_i0].vc_font.width = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          ud_update_attr(dst,src,attribute,vc);
          free(dst);
          free(src);
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
