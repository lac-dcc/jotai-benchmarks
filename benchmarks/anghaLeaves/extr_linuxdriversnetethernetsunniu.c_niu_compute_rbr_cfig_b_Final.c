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
typedef  int u64 ;
struct rx_ring_info {int rbr_block_size; int* rbr_sizes; } ;

/* Variables and functions */
 int EINVAL ; 
 int RBR_BLKSIZE_16K ; 
 int RBR_BLKSIZE_32K ; 
 int RBR_BLKSIZE_4K ; 
 int RBR_BLKSIZE_8K ; 
 int RBR_BUFSZ0_1K ; 
 int RBR_BUFSZ0_256 ; 
 int RBR_BUFSZ0_2K ; 
 int RBR_BUFSZ0_512 ; 
 int RBR_BUFSZ1_1K ; 
 int RBR_BUFSZ1_2K ; 
 int RBR_BUFSZ1_4K ; 
 int RBR_BUFSZ1_8K ; 
 int RBR_BUFSZ2_16K ; 
 int RBR_BUFSZ2_2K ; 
 int RBR_BUFSZ2_4K ; 
 int RBR_BUFSZ2_8K ; 
 int RBR_CFIG_B_BLKSIZE_SHIFT ; 
 int RBR_CFIG_B_BUFSZ0_SHIFT ; 
 int RBR_CFIG_B_BUFSZ1_SHIFT ; 
 int RBR_CFIG_B_BUFSZ2_SHIFT ; 
 int RBR_CFIG_B_VLD0 ; 
 int RBR_CFIG_B_VLD1 ; 
 int RBR_CFIG_B_VLD2 ; 

__attribute__((used)) static int niu_compute_rbr_cfig_b(struct rx_ring_info *rp, u64 *ret)
{
	u64 val = 0;

	*ret = 0;
	switch (rp->rbr_block_size) {
	case 4 * 1024:
		val |= (RBR_BLKSIZE_4K << RBR_CFIG_B_BLKSIZE_SHIFT);
		break;
	case 8 * 1024:
		val |= (RBR_BLKSIZE_8K << RBR_CFIG_B_BLKSIZE_SHIFT);
		break;
	case 16 * 1024:
		val |= (RBR_BLKSIZE_16K << RBR_CFIG_B_BLKSIZE_SHIFT);
		break;
	case 32 * 1024:
		val |= (RBR_BLKSIZE_32K << RBR_CFIG_B_BLKSIZE_SHIFT);
		break;
	default:
		return -EINVAL;
	}
	val |= RBR_CFIG_B_VLD2;
	switch (rp->rbr_sizes[2]) {
	case 2 * 1024:
		val |= (RBR_BUFSZ2_2K << RBR_CFIG_B_BUFSZ2_SHIFT);
		break;
	case 4 * 1024:
		val |= (RBR_BUFSZ2_4K << RBR_CFIG_B_BUFSZ2_SHIFT);
		break;
	case 8 * 1024:
		val |= (RBR_BUFSZ2_8K << RBR_CFIG_B_BUFSZ2_SHIFT);
		break;
	case 16 * 1024:
		val |= (RBR_BUFSZ2_16K << RBR_CFIG_B_BUFSZ2_SHIFT);
		break;

	default:
		return -EINVAL;
	}
	val |= RBR_CFIG_B_VLD1;
	switch (rp->rbr_sizes[1]) {
	case 1 * 1024:
		val |= (RBR_BUFSZ1_1K << RBR_CFIG_B_BUFSZ1_SHIFT);
		break;
	case 2 * 1024:
		val |= (RBR_BUFSZ1_2K << RBR_CFIG_B_BUFSZ1_SHIFT);
		break;
	case 4 * 1024:
		val |= (RBR_BUFSZ1_4K << RBR_CFIG_B_BUFSZ1_SHIFT);
		break;
	case 8 * 1024:
		val |= (RBR_BUFSZ1_8K << RBR_CFIG_B_BUFSZ1_SHIFT);
		break;

	default:
		return -EINVAL;
	}
	val |= RBR_CFIG_B_VLD0;
	switch (rp->rbr_sizes[0]) {
	case 256:
		val |= (RBR_BUFSZ0_256 << RBR_CFIG_B_BUFSZ0_SHIFT);
		break;
	case 512:
		val |= (RBR_BUFSZ0_512 << RBR_CFIG_B_BUFSZ0_SHIFT);
		break;
	case 1 * 1024:
		val |= (RBR_BUFSZ0_1K << RBR_CFIG_B_BUFSZ0_SHIFT);
		break;
	case 2 * 1024:
		val |= (RBR_BUFSZ0_2K << RBR_CFIG_B_BUFSZ0_SHIFT);
		break;

	default:
		return -EINVAL;
	}

	*ret = val;
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
          int _len_rp0 = 1;
          struct rx_ring_info * rp = (struct rx_ring_info *) malloc(_len_rp0*sizeof(struct rx_ring_info));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
            rp[_i0].rbr_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rp__i0__rbr_sizes0 = 1;
          rp[_i0].rbr_sizes = (int *) malloc(_len_rp__i0__rbr_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rp__i0__rbr_sizes0; _j0++) {
            rp[_i0].rbr_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = niu_compute_rbr_cfig_b(rp,ret);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rp0; _aux++) {
          free(rp[_aux].rbr_sizes);
          }
          free(rp);
          free(ret);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
