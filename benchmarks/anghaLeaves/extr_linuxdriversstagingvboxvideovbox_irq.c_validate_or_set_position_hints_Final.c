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
typedef  int u16 ;
struct vbva_modehint {int dx; int dy; int cx; int cy; scalar_t__ enabled; } ;
struct vbox_private {int num_crtcs; struct vbva_modehint* last_mode_hints; } ;

/* Variables and functions */

__attribute__((used)) static void validate_or_set_position_hints(struct vbox_private *vbox)
{
	struct vbva_modehint *hintsi, *hintsj;
	bool valid = true;
	u16 currentx = 0;
	int i, j;

	for (i = 0; i < vbox->num_crtcs; ++i) {
		for (j = 0; j < i; ++j) {
			hintsi = &vbox->last_mode_hints[i];
			hintsj = &vbox->last_mode_hints[j];

			if (hintsi->enabled && hintsj->enabled) {
				if (hintsi->dx >= 0xffff ||
				    hintsi->dy >= 0xffff ||
				    hintsj->dx >= 0xffff ||
				    hintsj->dy >= 0xffff ||
				    (hintsi->dx <
					hintsj->dx + (hintsj->cx & 0x8fff) &&
				     hintsi->dx + (hintsi->cx & 0x8fff) >
					hintsj->dx) ||
				    (hintsi->dy <
					hintsj->dy + (hintsj->cy & 0x8fff) &&
				     hintsi->dy + (hintsi->cy & 0x8fff) >
					hintsj->dy))
					valid = false;
			}
		}
	}
	if (!valid)
		for (i = 0; i < vbox->num_crtcs; ++i) {
			if (vbox->last_mode_hints[i].enabled) {
				vbox->last_mode_hints[i].dx = currentx;
				vbox->last_mode_hints[i].dy = 0;
				currentx +=
				    vbox->last_mode_hints[i].cx & 0x8fff;
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
          int _len_vbox0 = 1;
          struct vbox_private * vbox = (struct vbox_private *) malloc(_len_vbox0*sizeof(struct vbox_private));
          for(int _i0 = 0; _i0 < _len_vbox0; _i0++) {
            vbox[_i0].num_crtcs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vbox__i0__last_mode_hints0 = 1;
          vbox[_i0].last_mode_hints = (struct vbva_modehint *) malloc(_len_vbox__i0__last_mode_hints0*sizeof(struct vbva_modehint));
          for(int _j0 = 0; _j0 < _len_vbox__i0__last_mode_hints0; _j0++) {
            vbox[_i0].last_mode_hints->dx = ((-2 * (next_i()%2)) + 1) * next_i();
        vbox[_i0].last_mode_hints->dy = ((-2 * (next_i()%2)) + 1) * next_i();
        vbox[_i0].last_mode_hints->cx = ((-2 * (next_i()%2)) + 1) * next_i();
        vbox[_i0].last_mode_hints->cy = ((-2 * (next_i()%2)) + 1) * next_i();
        vbox[_i0].last_mode_hints->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          validate_or_set_position_hints(vbox);
          for(int _aux = 0; _aux < _len_vbox0; _aux++) {
          free(vbox[_aux].last_mode_hints);
          }
          free(vbox);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
