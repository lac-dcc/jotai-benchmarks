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
typedef  int u8 ;
typedef  int u32 ;
typedef  enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;

/* Variables and functions */
 int I40IW_ERR_INVALID_FRAG_COUNT ; 

enum i40iw_status_code i40iw_fragcnt_to_wqesize_rq(u32 frag_cnt, u8 *wqe_size)
{
	switch (frag_cnt) {
	case 0:
	case 1:
		*wqe_size = 32;
		break;
	case 2:
	case 3:
		*wqe_size = 64;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		*wqe_size = 128;
		break;
	default:
		return I40IW_ERR_INVALID_FRAG_COUNT;
	}

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
          int frag_cnt = 100;
          int _len_wqe_size0 = 1;
          int * wqe_size = (int *) malloc(_len_wqe_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wqe_size0; _i0++) {
            wqe_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i40iw_status_code benchRet = i40iw_fragcnt_to_wqesize_rq(frag_cnt,wqe_size);
          free(wqe_size);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int frag_cnt = 10;
          int _len_wqe_size0 = 100;
          int * wqe_size = (int *) malloc(_len_wqe_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wqe_size0; _i0++) {
            wqe_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i40iw_status_code benchRet = i40iw_fragcnt_to_wqesize_rq(frag_cnt,wqe_size);
          free(wqe_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
