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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct s5p_jpeg_q_data {int dummy; } ;
struct s5p_jpeg_ctx {struct s5p_jpeg_q_data cap_q; struct s5p_jpeg_q_data out_q; } ;
typedef  enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;

/* Variables and functions */
 int V4L2_BUF_TYPE_VIDEO_CAPTURE ; 
 int V4L2_BUF_TYPE_VIDEO_OUTPUT ; 

__attribute__((used)) static struct s5p_jpeg_q_data *get_q_data(struct s5p_jpeg_ctx *ctx,
					  enum v4l2_buf_type type)
{
	if (type == V4L2_BUF_TYPE_VIDEO_OUTPUT)
		return &ctx->out_q;
	if (type == V4L2_BUF_TYPE_VIDEO_CAPTURE)
		return &ctx->cap_q;

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum v4l2_buf_type type = 0;
        
          int _len_ctx0 = 65025;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].cap_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ctx[_i0].out_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct s5p_jpeg_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          free(ctx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum v4l2_buf_type type = 0;
        
          int _len_ctx0 = 100;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].cap_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ctx[_i0].out_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct s5p_jpeg_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          free(ctx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          enum v4l2_buf_type type = 0;
        
          int _len_ctx0 = 1;
          struct s5p_jpeg_ctx * ctx = (struct s5p_jpeg_ctx *) malloc(_len_ctx0*sizeof(struct s5p_jpeg_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              ctx[_i0].cap_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          ctx[_i0].out_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct s5p_jpeg_q_data * benchRet = get_q_data(ctx,type);
          printf("%d\n", (*benchRet).dummy);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
