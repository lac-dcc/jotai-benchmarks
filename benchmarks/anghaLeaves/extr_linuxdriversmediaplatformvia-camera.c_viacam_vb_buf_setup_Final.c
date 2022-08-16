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
struct videobuf_queue {struct via_camera* priv_data; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;
struct via_camera {TYPE_1__ user_format; } ;

/* Variables and functions */

__attribute__((used)) static int viacam_vb_buf_setup(struct videobuf_queue *q,
		unsigned int *count, unsigned int *size)
{
	struct via_camera *cam = q->priv_data;

	*size = cam->user_format.sizeimage;
	if (*count == 0 || *count > 6)	/* Arbitrary number */
		*count = 6;
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
          struct videobuf_queue * q = (struct videobuf_queue *) malloc(_len_q0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__priv_data0 = 1;
          q[_i0].priv_data = (struct via_camera *) malloc(_len_q__i0__priv_data0*sizeof(struct via_camera));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data0; _j0++) {
            q[_i0].priv_data->user_format.sizeimage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_count0 = 1;
          unsigned int * count = (unsigned int *) malloc(_len_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          unsigned int * size = (unsigned int *) malloc(_len_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = viacam_vb_buf_setup(q,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].priv_data);
          }
          free(q);
          free(count);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
