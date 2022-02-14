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
       0            big-arr\n\
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
struct intel_vgpu_cursor_plane_format {scalar_t__ x_hot; scalar_t__ width; scalar_t__ y_hot; scalar_t__ height; } ;

/* Variables and functions */

__attribute__((used)) static bool validate_hotspot(struct intel_vgpu_cursor_plane_format *c)
{
	if (c && c->x_hot <= c->width && c->y_hot <= c->height)
		return true;
	else
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

    // big-arr
    case 0:
    {
          int _len_c0 = 1;
          struct intel_vgpu_cursor_plane_format * c = (struct intel_vgpu_cursor_plane_format *) malloc(_len_c0*sizeof(struct intel_vgpu_cursor_plane_format));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c->x_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        c->width = ((-2 * (next_i()%2)) + 1) * next_i();
        c->y_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        c->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_hotspot(c);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
