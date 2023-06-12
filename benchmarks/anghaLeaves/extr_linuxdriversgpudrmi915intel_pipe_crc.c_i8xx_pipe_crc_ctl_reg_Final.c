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
typedef  int uint32_t ;
typedef  enum intel_pipe_crc_source { ____Placeholder_intel_pipe_crc_source } intel_pipe_crc_source ;

/* Variables and functions */
 int EINVAL ; 
 int INTEL_PIPE_CRC_SOURCE_AUTO ; 
#define  INTEL_PIPE_CRC_SOURCE_NONE 129 
#define  INTEL_PIPE_CRC_SOURCE_PIPE 128 
 int PIPE_CRC_ENABLE ; 
 int PIPE_CRC_INCLUDE_BORDER_I8XX ; 

__attribute__((used)) static int i8xx_pipe_crc_ctl_reg(enum intel_pipe_crc_source *source,
				 uint32_t *val)
{
	if (*source == INTEL_PIPE_CRC_SOURCE_AUTO)
		*source = INTEL_PIPE_CRC_SOURCE_PIPE;

	switch (*source) {
	case INTEL_PIPE_CRC_SOURCE_PIPE:
		*val = PIPE_CRC_ENABLE | PIPE_CRC_INCLUDE_BORDER_I8XX;
		break;
	case INTEL_PIPE_CRC_SOURCE_NONE:
		*val = 0;
		break;
	default:
		return -EINVAL;
	}

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
          int _len_source0 = 65025;
          enum intel_pipe_crc_source * source = (enum intel_pipe_crc_source *) malloc(_len_source0*sizeof(enum intel_pipe_crc_source));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_val0 = 65025;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i8xx_pipe_crc_ctl_reg(source,val);
          printf("%d\n", benchRet); 
          free(source);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_source0 = 100;
          enum intel_pipe_crc_source * source = (enum intel_pipe_crc_source *) malloc(_len_source0*sizeof(enum intel_pipe_crc_source));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_val0 = 100;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i8xx_pipe_crc_ctl_reg(source,val);
          printf("%d\n", benchRet); 
          free(source);
          free(val);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_source0 = 1;
          enum intel_pipe_crc_source * source = (enum intel_pipe_crc_source *) malloc(_len_source0*sizeof(enum intel_pipe_crc_source));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i8xx_pipe_crc_ctl_reg(source,val);
          printf("%d\n", benchRet); 
          free(source);
          free(val);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
