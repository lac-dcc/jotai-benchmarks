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
struct vhost_virtqueue {int /*<<< orphan*/ ** meta_iotlb; } ;

/* Variables and functions */
 int VHOST_NUM_ADDRS ; 

__attribute__((used)) static void __vhost_vq_meta_reset(struct vhost_virtqueue *vq)
{
	int j;

	for (j = 0; j < VHOST_NUM_ADDRS; j++)
		vq->meta_iotlb[j] = NULL;
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
          int _len_vq0 = 1;
          struct vhost_virtqueue * vq = (struct vhost_virtqueue *) malloc(_len_vq0*sizeof(struct vhost_virtqueue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__meta_iotlb0 = 1;
          vq[_i0].meta_iotlb = (int **) malloc(_len_vq__i0__meta_iotlb0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_vq__i0__meta_iotlb0; _j0++) {
            int _len_vq__i0__meta_iotlb1 = 1;
            vq[_i0].meta_iotlb[_j0] = (int *) malloc(_len_vq__i0__meta_iotlb1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_vq__i0__meta_iotlb1; _j1++) {
              vq[_i0].meta_iotlb[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          __vhost_vq_meta_reset(vq);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(*(vq[_aux].meta_iotlb));
        free(vq[_aux].meta_iotlb);
          }
          free(vq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
