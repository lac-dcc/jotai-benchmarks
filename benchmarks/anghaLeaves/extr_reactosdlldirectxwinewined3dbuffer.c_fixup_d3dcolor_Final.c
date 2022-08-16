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
typedef  int DWORD ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int fixup_d3dcolor(DWORD *dst_color)
{
    DWORD src_color = *dst_color;

    /* Color conversion like in draw_primitive_immediate_mode(). Watch out for
     * endianness. If we want this to work on big-endian machines as well we
     * have to consider more things.
     *
     * 0xff000000: Alpha mask
     * 0x00ff0000: Blue mask
     * 0x0000ff00: Green mask
     * 0x000000ff: Red mask
     */
    *dst_color = 0;
    *dst_color |= (src_color & 0xff00ff00u);         /* Alpha Green */
    *dst_color |= (src_color & 0x00ff0000u) >> 16;   /* Red */
    *dst_color |= (src_color & 0x000000ffu) << 16;   /* Blue */

    return sizeof(*dst_color);
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
          int _len_dst_color0 = 1;
          int * dst_color = (int *) malloc(_len_dst_color0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst_color0; _i0++) {
            dst_color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = fixup_d3dcolor(dst_color);
          printf("%u\n", benchRet); 
          free(dst_color);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dst_color0 = 100;
          int * dst_color = (int *) malloc(_len_dst_color0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst_color0; _i0++) {
            dst_color[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = fixup_d3dcolor(dst_color);
          printf("%u\n", benchRet); 
          free(dst_color);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
