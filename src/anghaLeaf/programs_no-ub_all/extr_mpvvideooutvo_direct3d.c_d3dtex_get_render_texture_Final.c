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
struct d3dtex {scalar_t__ system; scalar_t__ device; } ;
typedef  int /*<<< orphan*/  d3d_priv ;
typedef  int /*<<< orphan*/  IDirect3DBaseTexture9 ;

/* Variables and functions */

__attribute__((used)) static IDirect3DBaseTexture9 *d3dtex_get_render_texture(d3d_priv *priv,
                                                        struct d3dtex *tex)
{
    return (IDirect3DBaseTexture9 *)(tex->device ? tex->device : tex->system);
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
          int _len_priv0 = 65025;
          int * priv = (int *) malloc(_len_priv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tex0 = 1;
          struct d3dtex * tex = (struct d3dtex *) malloc(_len_tex0*sizeof(struct d3dtex));
          for(int _i0 = 0; _i0 < _len_tex0; _i0++) {
            tex->system = ((-2 * (next_i()%2)) + 1) * next_i();
        tex->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = d3dtex_get_render_texture(priv,tex);
          printf("{{other_type}} %p\n", &benchRet); 
          free(priv);
          free(tex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
