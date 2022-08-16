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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vb2_queue {int io_modes; TYPE_1__* mem_ops; } ;
struct TYPE_2__ {int /*<<< orphan*/  unmap_dmabuf; int /*<<< orphan*/  map_dmabuf; int /*<<< orphan*/  detach_dmabuf; int /*<<< orphan*/  attach_dmabuf; } ;

/* Variables and functions */
 int EINVAL ; 
 int VB2_DMABUF ; 

__attribute__((used)) static int __verify_dmabuf_ops(struct vb2_queue *q)
{
	if (!(q->io_modes & VB2_DMABUF) || !q->mem_ops->attach_dmabuf ||
	    !q->mem_ops->detach_dmabuf  || !q->mem_ops->map_dmabuf ||
	    !q->mem_ops->unmap_dmabuf)
		return -EINVAL;

	return 0;
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
          int _len_q0 = 1;
          struct vb2_queue * q = (struct vb2_queue *) malloc(_len_q0*sizeof(struct vb2_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].io_modes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__mem_ops0 = 1;
          q[_i0].mem_ops = (struct TYPE_2__ *) malloc(_len_q__i0__mem_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__mem_ops0; _j0++) {
            q[_i0].mem_ops->unmap_dmabuf = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].mem_ops->map_dmabuf = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].mem_ops->detach_dmabuf = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].mem_ops->attach_dmabuf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = __verify_dmabuf_ops(q);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].mem_ops);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
