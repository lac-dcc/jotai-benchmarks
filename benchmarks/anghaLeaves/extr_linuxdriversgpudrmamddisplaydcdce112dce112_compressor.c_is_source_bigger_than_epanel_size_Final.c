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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_2__ {int embedded_panel_h_size; int embedded_panel_v_size; } ;
struct dce112_compressor {TYPE_1__ base; } ;

/* Variables and functions */

__attribute__((used)) static bool is_source_bigger_than_epanel_size(
	struct dce112_compressor *cp110,
	uint32_t source_view_width,
	uint32_t source_view_height)
{
	if (cp110->base.embedded_panel_h_size != 0 &&
		cp110->base.embedded_panel_v_size != 0 &&
		((source_view_width * source_view_height) >
		(cp110->base.embedded_panel_h_size *
			cp110->base.embedded_panel_v_size)))
		return true;

	return false;
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
          int source_view_width = 100;
          int source_view_height = 100;
          int _len_cp1100 = 1;
          struct dce112_compressor * cp110 = (struct dce112_compressor *) malloc(_len_cp1100*sizeof(struct dce112_compressor));
          for(int _i0 = 0; _i0 < _len_cp1100; _i0++) {
            cp110[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cp110[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_source_bigger_than_epanel_size(cp110,source_view_width,source_view_height);
          printf("%d\n", benchRet); 
          free(cp110);
        
        break;
    }
    // big-arr
    case 1:
    {
          int source_view_width = 255;
          int source_view_height = 255;
          int _len_cp1100 = 65025;
          struct dce112_compressor * cp110 = (struct dce112_compressor *) malloc(_len_cp1100*sizeof(struct dce112_compressor));
          for(int _i0 = 0; _i0 < _len_cp1100; _i0++) {
            cp110[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cp110[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_source_bigger_than_epanel_size(cp110,source_view_width,source_view_height);
          printf("%d\n", benchRet); 
          free(cp110);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int source_view_width = 10;
          int source_view_height = 10;
          int _len_cp1100 = 100;
          struct dce112_compressor * cp110 = (struct dce112_compressor *) malloc(_len_cp1100*sizeof(struct dce112_compressor));
          for(int _i0 = 0; _i0 < _len_cp1100; _i0++) {
            cp110[_i0].base.embedded_panel_h_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cp110[_i0].base.embedded_panel_v_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_source_bigger_than_epanel_size(cp110,source_view_width,source_view_height);
          printf("%d\n", benchRet); 
          free(cp110);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
