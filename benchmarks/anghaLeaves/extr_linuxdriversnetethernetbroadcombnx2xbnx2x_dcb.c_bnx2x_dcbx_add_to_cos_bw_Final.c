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
typedef  scalar_t__ u8 ;
struct cos_entry_help_data {scalar_t__ cos_bw; } ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 scalar_t__ DCBX_INVALID_COS_BW ; 

__attribute__((used)) static inline void bnx2x_dcbx_add_to_cos_bw(struct bnx2x *bp,
					    struct cos_entry_help_data *data,
					    u8 pg_bw)
{
	if (data->cos_bw == DCBX_INVALID_COS_BW)
		data->cos_bw = pg_bw;
	else
		data->cos_bw += pg_bw;
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
          long pg_bw = 100;
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct cos_entry_help_data * data = (struct cos_entry_help_data *) malloc(_len_data0*sizeof(struct cos_entry_help_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].cos_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_dcbx_add_to_cos_bw(bp,data,pg_bw);
          free(bp);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
