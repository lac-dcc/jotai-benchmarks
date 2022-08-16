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
struct adf4350_state {int fpfd; int clkin; struct adf4350_platform_data* pdata; } ;
struct adf4350_platform_data {scalar_t__ ref_div2_en; scalar_t__ ref_doubler_en; } ;

/* Variables and functions */
 int ADF4350_MAX_FREQ_PFD ; 

__attribute__((used)) static int adf4350_tune_r_cnt(struct adf4350_state *st, unsigned short r_cnt)
{
	struct adf4350_platform_data *pdata = st->pdata;

	do {
		r_cnt++;
		st->fpfd = (st->clkin * (pdata->ref_doubler_en ? 2 : 1)) /
			   (r_cnt * (pdata->ref_div2_en ? 2 : 1));
	} while (st->fpfd > ADF4350_MAX_FREQ_PFD);

	return r_cnt;
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
          unsigned short r_cnt = 100;
          int _len_st0 = 1;
          struct adf4350_state * st = (struct adf4350_state *) malloc(_len_st0*sizeof(struct adf4350_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].fpfd = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].clkin = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__pdata0 = 1;
          st[_i0].pdata = (struct adf4350_platform_data *) malloc(_len_st__i0__pdata0*sizeof(struct adf4350_platform_data));
          for(int _j0 = 0; _j0 < _len_st__i0__pdata0; _j0++) {
            st[_i0].pdata->ref_div2_en = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].pdata->ref_doubler_en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = adf4350_tune_r_cnt(st,r_cnt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].pdata);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
