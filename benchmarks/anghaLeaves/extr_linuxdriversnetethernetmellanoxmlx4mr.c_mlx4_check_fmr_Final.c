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
struct mlx4_fmr {int max_pages; int page_shift; scalar_t__ maps; scalar_t__ max_maps; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int mlx4_check_fmr(struct mlx4_fmr *fmr, u64 *page_list,
				  int npages, u64 iova)
{
	int i, page_mask;

	if (npages > fmr->max_pages)
		return -EINVAL;

	page_mask = (1 << fmr->page_shift) - 1;

	/* We are getting page lists, so va must be page aligned. */
	if (iova & page_mask)
		return -EINVAL;

	/* Trust the user not to pass misaligned data in page_list */
	if (0)
		for (i = 0; i < npages; ++i) {
			if (page_list[i] & ~page_mask)
				return -EINVAL;
		}

	if (fmr->maps >= fmr->max_maps)
		return -EINVAL;

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
          int npages = 100;
          int iova = 100;
          int _len_fmr0 = 1;
          struct mlx4_fmr * fmr = (struct mlx4_fmr *) malloc(_len_fmr0*sizeof(struct mlx4_fmr));
          for(int _i0 = 0; _i0 < _len_fmr0; _i0++) {
            fmr[_i0].max_pages = ((-2 * (next_i()%2)) + 1) * next_i();
        fmr[_i0].page_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        fmr[_i0].maps = ((-2 * (next_i()%2)) + 1) * next_i();
        fmr[_i0].max_maps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_page_list0 = 1;
          int * page_list = (int *) malloc(_len_page_list0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_page_list0; _i0++) {
            page_list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_check_fmr(fmr,page_list,npages,iova);
          printf("%d\n", benchRet); 
          free(fmr);
          free(page_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}