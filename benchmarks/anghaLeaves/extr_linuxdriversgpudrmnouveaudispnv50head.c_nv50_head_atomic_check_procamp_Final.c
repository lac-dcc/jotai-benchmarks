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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int procamp; } ;
struct TYPE_5__ {int cos; int sin; } ;
struct TYPE_6__ {TYPE_1__ sat; } ;
struct nv50_head_atom {TYPE_3__ set; TYPE_2__ procamp; } ;
struct TYPE_8__ {int color_vibrance; int vibrant_hue; } ;
struct nouveau_conn_atom {TYPE_4__ procamp; } ;

/* Variables and functions */

__attribute__((used)) static void
nv50_head_atomic_check_procamp(struct nv50_head_atom *armh,
			       struct nv50_head_atom *asyh,
			       struct nouveau_conn_atom *asyc)
{
	const int vib = asyc->procamp.color_vibrance - 100;
	const int hue = asyc->procamp.vibrant_hue - 90;
	const int adj = (vib > 0) ? 50 : 0;
	asyh->procamp.sat.cos = ((vib * 2047 + adj) / 100) & 0xfff;
	asyh->procamp.sat.sin = ((hue * 2047) / 100) & 0xfff;
	asyh->set.procamp = true;
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
          int _len_armh0 = 1;
          struct nv50_head_atom * armh = (struct nv50_head_atom *) malloc(_len_armh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_armh0; _i0++) {
            armh[_i0].set.procamp = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].procamp.sat.cos = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].procamp.sat.sin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].set.procamp = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].procamp.sat.cos = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].procamp.sat.sin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyc0 = 1;
          struct nouveau_conn_atom * asyc = (struct nouveau_conn_atom *) malloc(_len_asyc0*sizeof(struct nouveau_conn_atom));
          for(int _i0 = 0; _i0 < _len_asyc0; _i0++) {
            asyc[_i0].procamp.color_vibrance = ((-2 * (next_i()%2)) + 1) * next_i();
        asyc[_i0].procamp.vibrant_hue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv50_head_atomic_check_procamp(armh,asyh,asyc);
          free(armh);
          free(asyh);
          free(asyc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
