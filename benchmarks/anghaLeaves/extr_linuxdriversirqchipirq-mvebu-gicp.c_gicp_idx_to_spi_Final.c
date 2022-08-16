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
       1            linked\n\
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
struct mvebu_gicp_spi_range {int count; int start; } ;
struct mvebu_gicp {int spi_ranges_cnt; struct mvebu_gicp_spi_range* spi_ranges; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int gicp_idx_to_spi(struct mvebu_gicp *gicp, int idx)
{
	int i;

	for (i = 0; i < gicp->spi_ranges_cnt; i++) {
		struct mvebu_gicp_spi_range *r = &gicp->spi_ranges[i];

		if (idx < r->count)
			return r->start + idx;

		idx -= r->count;
	}

	return -EINVAL;
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
          int idx = 100;
          int _len_gicp0 = 1;
          struct mvebu_gicp * gicp = (struct mvebu_gicp *) malloc(_len_gicp0*sizeof(struct mvebu_gicp));
          for(int _i0 = 0; _i0 < _len_gicp0; _i0++) {
            gicp[_i0].spi_ranges_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gicp__i0__spi_ranges0 = 1;
          gicp[_i0].spi_ranges = (struct mvebu_gicp_spi_range *) malloc(_len_gicp__i0__spi_ranges0*sizeof(struct mvebu_gicp_spi_range));
          for(int _j0 = 0; _j0 < _len_gicp__i0__spi_ranges0; _j0++) {
            gicp[_i0].spi_ranges->count = ((-2 * (next_i()%2)) + 1) * next_i();
        gicp[_i0].spi_ranges->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gicp_idx_to_spi(gicp,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gicp0; _aux++) {
          free(gicp[_aux].spi_ranges);
          }
          free(gicp);
        
        break;
    }
    // linked
    case 1:
    {
          int idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gicp0 = 1;
          struct mvebu_gicp * gicp = (struct mvebu_gicp *) malloc(_len_gicp0*sizeof(struct mvebu_gicp));
          for(int _i0 = 0; _i0 < _len_gicp0; _i0++) {
            gicp[_i0].spi_ranges_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gicp__i0__spi_ranges0 = 1;
          gicp[_i0].spi_ranges = (struct mvebu_gicp_spi_range *) malloc(_len_gicp__i0__spi_ranges0*sizeof(struct mvebu_gicp_spi_range));
          for(int _j0 = 0; _j0 < _len_gicp__i0__spi_ranges0; _j0++) {
            gicp[_i0].spi_ranges->count = ((-2 * (next_i()%2)) + 1) * next_i();
        gicp[_i0].spi_ranges->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gicp_idx_to_spi(gicp,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_gicp0; _aux++) {
          free(gicp[_aux].spi_ranges);
          }
          free(gicp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
