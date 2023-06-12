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
       0            empty\n\
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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_5__* layers; } ;
typedef  TYPE_4__ ccv_convnet_t ;
struct TYPE_8__ {int strides; } ;
struct TYPE_7__ {int strides; } ;
struct TYPE_9__ {TYPE_2__ pool; TYPE_1__ convolutional; } ;
struct TYPE_11__ {int type; TYPE_3__ net; } ;
typedef  TYPE_5__ ccv_convnet_layer_t ;

/* Variables and functions */
#define  CCV_CONVNET_AVERAGE_POOL 130 
#define  CCV_CONVNET_CONVOLUTIONAL 129 
#define  CCV_CONVNET_MAX_POOL 128 

__attribute__((used)) static int _ccv_convnet_derive_scale(ccv_convnet_t* convnet, int scan)
{
	int i, scale = 1;
	for (i = scan; i >= 0; i--)
	{
		ccv_convnet_layer_t* layer = convnet->layers + i;
		switch (layer->type)
		{
			case CCV_CONVNET_CONVOLUTIONAL:
				scale *= layer->net.convolutional.strides;
				break;
			case CCV_CONVNET_MAX_POOL:
			case CCV_CONVNET_AVERAGE_POOL:
				scale *= layer->net.pool.strides;
				break;
		}
	}
	return scale;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int scan = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_convnet0 = 1;
          struct TYPE_10__ * convnet = (struct TYPE_10__ *) malloc(_len_convnet0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_convnet0; _i0++) {
              int _len_convnet__i0__layers0 = 1;
          convnet[_i0].layers = (struct TYPE_11__ *) malloc(_len_convnet__i0__layers0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_convnet__i0__layers0; _j0++) {
              convnet[_i0].layers->type = ((-2 * (next_i()%2)) + 1) * next_i();
          convnet[_i0].layers->net.pool.strides = ((-2 * (next_i()%2)) + 1) * next_i();
        
          convnet[_i0].layers->net.convolutional.strides = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          }
        
          int benchRet = _ccv_convnet_derive_scale(convnet,scan);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_convnet0; _aux++) {
          free(convnet[_aux].layers);
          }
          free(convnet);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
