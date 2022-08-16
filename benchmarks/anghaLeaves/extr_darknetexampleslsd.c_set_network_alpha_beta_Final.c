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
struct TYPE_5__ {int n; TYPE_1__* layers; } ;
typedef  TYPE_2__ network ;
struct TYPE_4__ {scalar_t__ type; float alpha; float beta; } ;

/* Variables and functions */
 scalar_t__ SHORTCUT ; 

void set_network_alpha_beta(network *net, float alpha, float beta)
{
    int i;
    for(i = 0; i < net->n; ++i){
        if(net->layers[i].type == SHORTCUT){
            net->layers[i].alpha = alpha;
            net->layers[i].beta = beta;
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
          float alpha = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float beta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_net0 = 1;
          struct TYPE_5__ * net = (struct TYPE_5__ *) malloc(_len_net0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__layers0 = 1;
          net[_i0].layers = (struct TYPE_4__ *) malloc(_len_net__i0__layers0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_net__i0__layers0; _j0++) {
            net[_i0].layers->type = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].layers->alpha = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        net[_i0].layers->beta = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          set_network_alpha_beta(net,alpha,beta);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].layers);
          }
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
