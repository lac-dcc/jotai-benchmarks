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

/* Type definitions */
struct d3d9_texture {int usage; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  D3D9_TEXTURE_MIPMAP_DIRTY ; 
 int D3DUSAGE_AUTOGENMIPMAP ; 

void d3d9_texture_flag_auto_gen_mipmap(struct d3d9_texture *texture)
{
    if (texture->usage & D3DUSAGE_AUTOGENMIPMAP)
        texture->flags |= D3D9_TEXTURE_MIPMAP_DIRTY;
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
          int _len_texture0 = 1;
          struct d3d9_texture * texture = (struct d3d9_texture *) malloc(_len_texture0*sizeof(struct d3d9_texture));
          for(int _i0 = 0; _i0 < _len_texture0; _i0++) {
            texture[_i0].usage = ((-2 * (next_i()%2)) + 1) * next_i();
        texture[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          d3d9_texture_flag_auto_gen_mipmap(texture);
          free(texture);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
