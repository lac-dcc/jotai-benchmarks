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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int height; int width; } ;
struct vc_data {TYPE_1__ vc_font; } ;

/* Variables and functions */
 int FBCON_ATTRIBUTE_BOLD ; 
 int FBCON_ATTRIBUTE_REVERSE ; 
 int FBCON_ATTRIBUTE_UNDERLINE ; 

__attribute__((used)) static void cw_update_attr(u8 *dst, u8 *src, int attribute,
				  struct vc_data *vc)
{
	int i, j, offset = (vc->vc_font.height < 10) ? 1 : 2;
	int width = (vc->vc_font.height + 7) >> 3;
	u8 c, msk = ~(0xff >> offset);

	for (i = 0; i < vc->vc_font.width; i++) {
		for (j = 0; j < width; j++) {
			c = *src;
			if (attribute & FBCON_ATTRIBUTE_UNDERLINE && !j)
				c |= msk;
			if (attribute & FBCON_ATTRIBUTE_BOLD && i)
				c |= *(src-width);
			if (attribute & FBCON_ATTRIBUTE_REVERSE)
				c = ~c;
			src++;
			*dst++ = c;
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
          int attribute = 100;
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vc0 = 1;
          struct vc_data * vc = (struct vc_data *) malloc(_len_vc0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].vc_font.height = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vc_font.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cw_update_attr(dst,src,attribute,vc);
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
