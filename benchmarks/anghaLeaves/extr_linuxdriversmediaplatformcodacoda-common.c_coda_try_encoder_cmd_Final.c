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
struct v4l2_encoder_cmd {scalar_t__ cmd; int flags; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ V4L2_ENC_CMD_STOP ; 
 int V4L2_ENC_CMD_STOP_AT_GOP_END ; 

__attribute__((used)) static int coda_try_encoder_cmd(struct file *file, void *fh,
				struct v4l2_encoder_cmd *ec)
{
	if (ec->cmd != V4L2_ENC_CMD_STOP)
		return -EINVAL;

	if (ec->flags & V4L2_ENC_CMD_STOP_AT_GOP_END)
		return -EINVAL;

	return 0;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_ec0 = 65025;
          struct v4l2_encoder_cmd * ec = (struct v4l2_encoder_cmd *) malloc(_len_ec0*sizeof(struct v4l2_encoder_cmd));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              ec[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          ec[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = coda_try_encoder_cmd(file,fh,ec);
          printf("%d\n", benchRet); 
          free(file);
          free(ec);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_ec0 = 100;
          struct v4l2_encoder_cmd * ec = (struct v4l2_encoder_cmd *) malloc(_len_ec0*sizeof(struct v4l2_encoder_cmd));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              ec[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          ec[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = coda_try_encoder_cmd(file,fh,ec);
          printf("%d\n", benchRet); 
          free(file);
          free(ec);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
              file[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * fh;
        
          int _len_ec0 = 1;
          struct v4l2_encoder_cmd * ec = (struct v4l2_encoder_cmd *) malloc(_len_ec0*sizeof(struct v4l2_encoder_cmd));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
              ec[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          ec[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = coda_try_encoder_cmd(file,fh,ec);
          printf("%d\n", benchRet); 
          free(file);
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
