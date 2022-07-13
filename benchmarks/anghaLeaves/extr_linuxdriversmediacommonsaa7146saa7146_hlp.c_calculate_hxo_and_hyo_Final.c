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
typedef  int u32 ;
struct saa7146_vv {TYPE_1__* standard; } ;
struct TYPE_2__ {int v_offset; int h_offset; } ;

/* Variables and functions */
 int MASK_B0 ; 
 int MASK_B2 ; 
 int MASK_W0 ; 

__attribute__((used)) static void calculate_hxo_and_hyo(struct saa7146_vv *vv, u32* hps_h_scale, u32* hps_ctrl)
{
	int hyo = 0, hxo = 0;

	hyo = vv->standard->v_offset;
	hxo = vv->standard->h_offset;

	*hps_h_scale	&= ~(MASK_B0 | 0xf00);
	*hps_h_scale	|= (hxo <<  0);

	*hps_ctrl	&= ~(MASK_W0 | MASK_B2);
	*hps_ctrl	|= (hyo << 12);
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
          int _len_vv0 = 1;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
              int _len_vv__i0__standard0 = 1;
          vv[_i0].standard = (struct TYPE_2__ *) malloc(_len_vv__i0__standard0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vv__i0__standard0; _j0++) {
            vv[_i0].standard->v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vv[_i0].standard->h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hps_h_scale0 = 1;
          int * hps_h_scale = (int *) malloc(_len_hps_h_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_h_scale0; _i0++) {
            hps_h_scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 1;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hxo_and_hyo(vv,hps_h_scale,hps_ctrl);
          for(int _aux = 0; _aux < _len_vv0; _aux++) {
          free(vv[_aux].standard);
          }
          free(vv);
          free(hps_h_scale);
          free(hps_ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vv0 = 65025;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
              int _len_vv__i0__standard0 = 1;
          vv[_i0].standard = (struct TYPE_2__ *) malloc(_len_vv__i0__standard0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vv__i0__standard0; _j0++) {
            vv[_i0].standard->v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vv[_i0].standard->h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hps_h_scale0 = 65025;
          int * hps_h_scale = (int *) malloc(_len_hps_h_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_h_scale0; _i0++) {
            hps_h_scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 65025;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hxo_and_hyo(vv,hps_h_scale,hps_ctrl);
          for(int _aux = 0; _aux < _len_vv0; _aux++) {
          free(vv[_aux].standard);
          }
          free(vv);
          free(hps_h_scale);
          free(hps_ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vv0 = 100;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
              int _len_vv__i0__standard0 = 1;
          vv[_i0].standard = (struct TYPE_2__ *) malloc(_len_vv__i0__standard0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vv__i0__standard0; _j0++) {
            vv[_i0].standard->v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        vv[_i0].standard->h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hps_h_scale0 = 100;
          int * hps_h_scale = (int *) malloc(_len_hps_h_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_h_scale0; _i0++) {
            hps_h_scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hps_ctrl0 = 100;
          int * hps_ctrl = (int *) malloc(_len_hps_ctrl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hps_ctrl0; _i0++) {
            hps_ctrl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calculate_hxo_and_hyo(vv,hps_h_scale,hps_ctrl);
          for(int _aux = 0; _aux < _len_vv0; _aux++) {
          free(vv[_aux].standard);
          }
          free(vv);
          free(hps_h_scale);
          free(hps_ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
