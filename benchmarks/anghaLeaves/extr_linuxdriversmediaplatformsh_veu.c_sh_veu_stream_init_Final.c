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
struct sh_veu_file {int dummy; } ;
struct sh_veu_dev {struct sh_veu_file* output; struct sh_veu_file* capture; } ;
typedef  enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
#define  V4L2_BUF_TYPE_VIDEO_CAPTURE 129 
#define  V4L2_BUF_TYPE_VIDEO_OUTPUT 128 

__attribute__((used)) static int sh_veu_stream_init(struct sh_veu_dev *veu, struct sh_veu_file *veu_file,
			      enum v4l2_buf_type type)
{
	struct sh_veu_file **stream;

	switch (type) {
	case V4L2_BUF_TYPE_VIDEO_CAPTURE:
		stream = &veu->capture;
		break;
	case V4L2_BUF_TYPE_VIDEO_OUTPUT:
		stream = &veu->output;
		break;
	default:
		return -EINVAL;
	}

	if (*stream == veu_file)
		return 0;

	if (*stream)
		return -EBUSY;

	*stream = veu_file;

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
          enum v4l2_buf_type type = 0;
          int _len_veu0 = 1;
          struct sh_veu_dev * veu = (struct sh_veu_dev *) malloc(_len_veu0*sizeof(struct sh_veu_dev));
          for(int _i0 = 0; _i0 < _len_veu0; _i0++) {
              int _len_veu__i0__output0 = 1;
          veu[_i0].output = (struct sh_veu_file *) malloc(_len_veu__i0__output0*sizeof(struct sh_veu_file));
          for(int _j0 = 0; _j0 < _len_veu__i0__output0; _j0++) {
            veu[_i0].output->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_veu__i0__capture0 = 1;
          veu[_i0].capture = (struct sh_veu_file *) malloc(_len_veu__i0__capture0*sizeof(struct sh_veu_file));
          for(int _j0 = 0; _j0 < _len_veu__i0__capture0; _j0++) {
            veu[_i0].capture->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_veu_file0 = 1;
          struct sh_veu_file * veu_file = (struct sh_veu_file *) malloc(_len_veu_file0*sizeof(struct sh_veu_file));
          for(int _i0 = 0; _i0 < _len_veu_file0; _i0++) {
            veu_file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sh_veu_stream_init(veu,veu_file,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_veu0; _aux++) {
          free(veu[_aux].output);
          }
          for(int _aux = 0; _aux < _len_veu0; _aux++) {
          free(veu[_aux].capture);
          }
          free(veu);
          free(veu_file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
