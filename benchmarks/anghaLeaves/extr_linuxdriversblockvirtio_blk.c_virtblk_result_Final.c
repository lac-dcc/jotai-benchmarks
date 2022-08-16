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
       1            big-arr-10x\n\
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
struct virtblk_req {int status; } ;
typedef  int /*<<< orphan*/  blk_status_t ;

/* Variables and functions */
 int /*<<< orphan*/  BLK_STS_IOERR ; 
 int /*<<< orphan*/  BLK_STS_NOTSUPP ; 
 int /*<<< orphan*/  BLK_STS_OK ; 
#define  VIRTIO_BLK_S_OK 129 
#define  VIRTIO_BLK_S_UNSUPP 128 

__attribute__((used)) static inline blk_status_t virtblk_result(struct virtblk_req *vbr)
{
	switch (vbr->status) {
	case VIRTIO_BLK_S_OK:
		return BLK_STS_OK;
	case VIRTIO_BLK_S_UNSUPP:
		return BLK_STS_NOTSUPP;
	default:
		return BLK_STS_IOERR;
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
          int _len_vbr0 = 1;
          struct virtblk_req * vbr = (struct virtblk_req *) malloc(_len_vbr0*sizeof(struct virtblk_req));
          for(int _i0 = 0; _i0 < _len_vbr0; _i0++) {
            vbr[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtblk_result(vbr);
          printf("%d\n", benchRet); 
          free(vbr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vbr0 = 100;
          struct virtblk_req * vbr = (struct virtblk_req *) malloc(_len_vbr0*sizeof(struct virtblk_req));
          for(int _i0 = 0; _i0 < _len_vbr0; _i0++) {
            vbr[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtblk_result(vbr);
          printf("%d\n", benchRet); 
          free(vbr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
