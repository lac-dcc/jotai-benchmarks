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
struct ra_hwdec_mapper {struct priv* priv; } ;
struct priv {int mapped; int /*<<< orphan*/  vdp_surface; } ;

/* Variables and functions */
 int /*<<< orphan*/  VDP_INVALID_HANDLE ; 

__attribute__((used)) static void mark_vdpau_objects_uninitialized(struct ra_hwdec_mapper *mapper)
{
    struct priv *p = mapper->priv;

    p->vdp_surface = VDP_INVALID_HANDLE;
    p->mapped = false;
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
          int _len_mapper0 = 1;
          struct ra_hwdec_mapper * mapper = (struct ra_hwdec_mapper *) malloc(_len_mapper0*sizeof(struct ra_hwdec_mapper));
          for(int _i0 = 0; _i0 < _len_mapper0; _i0++) {
              int _len_mapper__i0__priv0 = 1;
          mapper[_i0].priv = (struct priv *) malloc(_len_mapper__i0__priv0*sizeof(struct priv));
          for(int _j0 = 0; _j0 < _len_mapper__i0__priv0; _j0++) {
            mapper[_i0].priv->mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        mapper[_i0].priv->vdp_surface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mark_vdpau_objects_uninitialized(mapper);
          for(int _aux = 0; _aux < _len_mapper0; _aux++) {
          free(mapper[_aux].priv);
          }
          free(mapper);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
