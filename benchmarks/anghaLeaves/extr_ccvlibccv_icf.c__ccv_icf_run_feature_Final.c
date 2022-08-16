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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {float beta; int count; int* channel; float* alpha; TYPE_1__* sat; } ;
typedef  TYPE_2__ ccv_icf_feature_t ;
struct TYPE_4__ {int x; int y; } ;

/* Variables and functions */

__attribute__((used)) static inline float _ccv_icf_run_feature(ccv_icf_feature_t* feature, float* ptr, int cols, int ch, int x, int y)
{
	float c = feature->beta;
	int q;
	for (q = 0; q < feature->count; q++)
		c += (ptr[(feature->sat[q * 2 + 1].x + x + 1 + (feature->sat[q * 2 + 1].y + y + 1) * cols) * ch + feature->channel[q]] - ptr[(feature->sat[q * 2].x + x + (feature->sat[q * 2 + 1].y + y + 1) * cols) * ch + feature->channel[q]] + ptr[(feature->sat[q * 2].x + x + (feature->sat[q * 2].y + y) * cols) * ch + feature->channel[q]] - ptr[(feature->sat[q * 2 + 1].x + x + 1 + (feature->sat[q * 2].y + y) * cols) * ch + feature->channel[q]]) * feature->alpha[q];
	return c;
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
          int cols = 100;
          int ch = 100;
          int x = 100;
          int y = 100;
          int _len_feature0 = 1;
          struct TYPE_5__ * feature = (struct TYPE_5__ *) malloc(_len_feature0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_feature0; _i0++) {
            feature[_i0].beta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        feature[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_feature__i0__channel0 = 1;
          feature[_i0].channel = (int *) malloc(_len_feature__i0__channel0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_feature__i0__channel0; _j0++) {
            feature[_i0].channel[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_feature__i0__alpha0 = 1;
          feature[_i0].alpha = (float *) malloc(_len_feature__i0__alpha0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_feature__i0__alpha0; _j0++) {
            feature[_i0].alpha[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_feature__i0__sat0 = 1;
          feature[_i0].sat = (struct TYPE_4__ *) malloc(_len_feature__i0__sat0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_feature__i0__sat0; _j0++) {
            feature[_i0].sat->x = ((-2 * (next_i()%2)) + 1) * next_i();
        feature[_i0].sat->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 1;
          float * ptr = (float *) malloc(_len_ptr0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = _ccv_icf_run_feature(feature,ptr,cols,ch,x,y);
          printf("%f\n", benchRet); 
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].channel);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].alpha);
          }
          for(int _aux = 0; _aux < _len_feature0; _aux++) {
          free(feature[_aux].sat);
          }
          free(feature);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
