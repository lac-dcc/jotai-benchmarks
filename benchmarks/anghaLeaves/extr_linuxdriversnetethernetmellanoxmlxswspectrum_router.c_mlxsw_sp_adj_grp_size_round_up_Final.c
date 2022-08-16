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
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static void mlxsw_sp_adj_grp_size_round_up(u16 *p_adj_grp_size)
{
	/* Valid sizes for an adjacency group are:
	 * 1-64, 512, 1024, 2048 and 4096.
	 */
	if (*p_adj_grp_size <= 64)
		return;
	else if (*p_adj_grp_size <= 512)
		*p_adj_grp_size = 512;
	else if (*p_adj_grp_size <= 1024)
		*p_adj_grp_size = 1024;
	else if (*p_adj_grp_size <= 2048)
		*p_adj_grp_size = 2048;
	else
		*p_adj_grp_size = 4096;
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
          int _len_p_adj_grp_size0 = 1;
          int * p_adj_grp_size = (int *) malloc(_len_p_adj_grp_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_adj_grp_size0; _i0++) {
            p_adj_grp_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_adj_grp_size_round_up(p_adj_grp_size);
          free(p_adj_grp_size);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_p_adj_grp_size0 = 100;
          int * p_adj_grp_size = (int *) malloc(_len_p_adj_grp_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_adj_grp_size0; _i0++) {
            p_adj_grp_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_adj_grp_size_round_up(p_adj_grp_size);
          free(p_adj_grp_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
