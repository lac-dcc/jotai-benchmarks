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

/* Type definitions */
typedef  int u32 ;
struct sh_veu_dev {scalar_t__ is_2h; } ;

/* Variables and functions */

__attribute__((used)) static void sh_veu_calc_scale(struct sh_veu_dev *veu,
			      int size_in, int size_out, int crop_out,
			      u32 *mant, u32 *frac, u32 *rep)
{
	u32 fixpoint;

	/* calculate FRAC and MANT */
	*rep = *mant = *frac = 0;

	if (size_in == size_out) {
		if (crop_out != size_out)
			*mant = 1; /* needed for cropping */
		return;
	}

	/* VEU2H special upscale */
	if (veu->is_2h && size_out > size_in) {
		u32 fixpoint = (4096 * size_in) / size_out;
		*mant = fixpoint / 4096;
		*frac = (fixpoint - (*mant * 4096)) & ~0x07;

		switch (*frac) {
		case 0x800:
			*rep = 1;
			break;
		case 0x400:
			*rep = 3;
			break;
		case 0x200:
			*rep = 7;
			break;
		}
		if (*rep)
			return;
	}

	fixpoint = (4096 * (size_in - 1)) / (size_out + 1);
	*mant = fixpoint / 4096;
	*frac = fixpoint - (*mant * 4096);

	if (*frac & 0x07) {
		/*
		 * FIXME: do we really have to round down twice in the
		 * up-scaling case?
		 */
		*frac &= ~0x07;
		if (size_out > size_in)
			*frac -= 8; /* round down if scaling up */
		else
			*frac += 8; /* round up if scaling down */
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
          int size_in = 100;
          int size_out = 100;
          int crop_out = 100;
          int _len_veu0 = 1;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].is_2h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mant0 = 1;
          int * mant = (int *) malloc(_len_mant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mant0; _i0++) {
            mant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frac0 = 1;
          int * frac = (int *) malloc(_len_frac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frac0; _i0++) {
            frac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rep0 = 1;
          int * rep = (int *) malloc(_len_rep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rep0; _i0++) {
            rep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sh_veu_calc_scale(veu,size_in,size_out,crop_out,mant,frac,rep);
          free(veu);
          free(mant);
          free(frac);
          free(rep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size_in = 255;
          int size_out = 255;
          int crop_out = 255;
          int _len_veu0 = 65025;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].is_2h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mant0 = 65025;
          int * mant = (int *) malloc(_len_mant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mant0; _i0++) {
            mant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frac0 = 65025;
          int * frac = (int *) malloc(_len_frac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frac0; _i0++) {
            frac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rep0 = 65025;
          int * rep = (int *) malloc(_len_rep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rep0; _i0++) {
            rep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sh_veu_calc_scale(veu,size_in,size_out,crop_out,mant,frac,rep);
          free(veu);
          free(mant);
          free(frac);
          free(rep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size_in = 10;
          int size_out = 10;
          int crop_out = 10;
          int _len_veu0 = 100;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
            veu[_i0].is_2h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mant0 = 100;
          int * mant = (int *) malloc(_len_mant0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mant0; _i0++) {
            mant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frac0 = 100;
          int * frac = (int *) malloc(_len_frac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frac0; _i0++) {
            frac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rep0 = 100;
          int * rep = (int *) malloc(_len_rep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rep0; _i0++) {
            rep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sh_veu_calc_scale(veu,size_in,size_out,crop_out,mant,frac,rep);
          free(veu);
          free(mant);
          free(frac);
          free(rep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
