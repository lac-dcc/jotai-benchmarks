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
typedef  void mp_vdpau_mixer_frame ;
struct mp_image {scalar_t__ imgfmt; scalar_t__* planes; } ;

/* Variables and functions */
 scalar_t__ IMGFMT_VDPAU ; 

struct mp_vdpau_mixer_frame *mp_vdpau_mixed_frame_get(struct mp_image *mpi)
{
    if (mpi->imgfmt != IMGFMT_VDPAU)
        return NULL;
    return (void *)mpi->planes[2];
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
          int _len_mpi0 = 1;
          struct mp_image * mpi = (struct mp_image *) malloc(_len_mpi0*sizeof(struct mp_image));
          for(int _i0 = 0; _i0 < _len_mpi0; _i0++) {
            mpi[_i0].imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpi__i0__planes0 = 1;
          mpi[_i0].planes = (long *) malloc(_len_mpi__i0__planes0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mpi__i0__planes0; _j0++) {
            mpi[_i0].planes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mp_vdpau_mixer_frame * benchRet = mp_vdpau_mixed_frame_get(mpi);
          for(int _aux = 0; _aux < _len_mpi0; _aux++) {
          free(mpi[_aux].planes);
          }
          free(mpi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
