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
struct virtqueue {int dummy; } ;
struct virtblk_req {int dummy; } ;
struct scatterlist {int dummy; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static inline int virtblk_add_req_scsi(struct virtqueue *vq,
		struct virtblk_req *vbr, struct scatterlist *data_sg,
		bool have_data)
{
	return -EIO;
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
          int have_data = 100;
          int _len_vq0 = 1;
          struct virtqueue * vq = (struct virtqueue *) malloc(_len_vq0*sizeof(struct virtqueue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
            vq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbr0 = 1;
          struct virtblk_req * vbr = (struct virtblk_req *) malloc(_len_vbr0*sizeof(struct virtblk_req));
          for(int _i0 = 0; _i0 < _len_vbr0; _i0++) {
            vbr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data_sg0 = 1;
          struct scatterlist * data_sg = (struct scatterlist *) malloc(_len_data_sg0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_data_sg0; _i0++) {
            data_sg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtblk_add_req_scsi(vq,vbr,data_sg,have_data);
          printf("%d\n", benchRet); 
          free(vq);
          free(vbr);
          free(data_sg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
