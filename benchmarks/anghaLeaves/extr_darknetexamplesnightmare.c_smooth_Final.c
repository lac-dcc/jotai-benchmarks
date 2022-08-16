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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int c; int h; int w; float* data; } ;
typedef  TYPE_1__ image ;

/* Variables and functions */

void smooth(image recon, image update, float lambda, int num)
{
    int i, j, k;
    int ii, jj;
    for(k = 0; k < recon.c; ++k){
        for(j = 0; j < recon.h; ++j){
            for(i = 0; i < recon.w; ++i){
                int out_index = i + recon.w*(j + recon.h*k);
                for(jj = j-num; jj <= j + num && jj < recon.h; ++jj){
                    if (jj < 0) continue;
                    for(ii = i-num; ii <= i + num && ii < recon.w; ++ii){
                        if (ii < 0) continue;
                        int in_index = ii + recon.w*(jj + recon.h*k);
                        update.data[out_index] += lambda * (recon.data[in_index] - recon.data[out_index]);
                    }
                }
            }
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
          float lambda = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int num = 100;
          struct TYPE_4__ recon;
        recon.c = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.h = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_recon_data0 = 1;
          recon.data = (float *) malloc(_len_recon_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_recon_data0; _j0++) {
            recon.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          struct TYPE_4__ update;
        update.c = ((-2 * (next_i()%2)) + 1) * next_i();
        update.h = ((-2 * (next_i()%2)) + 1) * next_i();
        update.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_update_data0 = 1;
          update.data = (float *) malloc(_len_update_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_update_data0; _j0++) {
            update.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          smooth(recon,update,lambda,num);
          free(recon.data);
          free(update.data);
        
        break;
    }
    // big-arr
    case 1:
    {
          float lambda = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int num = 255;
          struct TYPE_4__ recon;
        recon.c = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.h = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_recon_data0 = 1;
          recon.data = (float *) malloc(_len_recon_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_recon_data0; _j0++) {
            recon.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          struct TYPE_4__ update;
        update.c = ((-2 * (next_i()%2)) + 1) * next_i();
        update.h = ((-2 * (next_i()%2)) + 1) * next_i();
        update.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_update_data0 = 1;
          update.data = (float *) malloc(_len_update_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_update_data0; _j0++) {
            update.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          smooth(recon,update,lambda,num);
          free(recon.data);
          free(update.data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float lambda = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int num = 10;
          struct TYPE_4__ recon;
        recon.c = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.h = ((-2 * (next_i()%2)) + 1) * next_i();
        recon.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_recon_data0 = 1;
          recon.data = (float *) malloc(_len_recon_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_recon_data0; _j0++) {
            recon.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          struct TYPE_4__ update;
        update.c = ((-2 * (next_i()%2)) + 1) * next_i();
        update.h = ((-2 * (next_i()%2)) + 1) * next_i();
        update.w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_update_data0 = 1;
          update.data = (float *) malloc(_len_update_data0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_update_data0; _j0++) {
            update.data[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          smooth(recon,update,lambda,num);
          free(recon.data);
          free(update.data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
