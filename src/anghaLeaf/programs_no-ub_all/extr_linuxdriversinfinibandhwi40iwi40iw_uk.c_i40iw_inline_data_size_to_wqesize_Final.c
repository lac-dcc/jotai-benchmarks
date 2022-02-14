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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u8 ;
typedef  int u32 ;
typedef  enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;

/* Variables and functions */
 int I40IW_ERR_INVALID_INLINE_DATA_SIZE ; 
 int I40IW_MAX_INLINE_DATA_SIZE ; 
 int I40IW_QP_WQE_MIN_SIZE ; 

enum i40iw_status_code i40iw_inline_data_size_to_wqesize(u32 data_size,
							 u8 *wqe_size)
{
	if (data_size > I40IW_MAX_INLINE_DATA_SIZE)
		return I40IW_ERR_INVALID_INLINE_DATA_SIZE;

	if (data_size <= 16)
		*wqe_size = I40IW_QP_WQE_MIN_SIZE;
	else
		*wqe_size = 64;

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

    // big-arr
    case 0:
    {
          int data_size = 255;
          int _len_wqe_size0 = 65025;
          int * wqe_size = (int *) malloc(_len_wqe_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wqe_size0; _i0++) {
            wqe_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i40iw_status_code benchRet = i40iw_inline_data_size_to_wqesize(data_size,wqe_size);
          printf("{{other_type}} %p\n", &benchRet); 
          free(wqe_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
