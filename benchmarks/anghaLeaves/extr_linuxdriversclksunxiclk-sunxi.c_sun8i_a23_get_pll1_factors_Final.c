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
typedef  int u8 ;
struct factors_request {int rate; int k; int p; int n; scalar_t__ m; } ;

/* Variables and functions */

__attribute__((used)) static void sun8i_a23_get_pll1_factors(struct factors_request *req)
{
	u8 div;

	/* Normalize value to a 6M multiple */
	div = req->rate / 6000000;
	req->rate = 6000000 * div;

	/* m is always zero for pll1 */
	req->m = 0;

	/* k is 1 only on these cases */
	if (req->rate >= 768000000 || req->rate == 42000000 ||
			req->rate == 54000000)
		req->k = 1;
	else
		req->k = 0;

	/* p will be 2 for divs under 20 and odd divs under 32 */
	if (div < 20 || (div < 32 && (div & 1)))
		req->p = 2;

	/* p will be 1 for even divs under 32, divs under 40 and odd pairs
	 * of divs between 40-62 */
	else if (div < 40 || (div < 64 && (div & 2)))
		req->p = 1;

	/* any other entries have p = 0 */
	else
		req->p = 0;

	/* calculate a suitable n based on k and p */
	div <<= req->p;
	div /= (req->k + 1);
	req->n = div / 4 - 1;
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
          int _len_req0 = 1;
          struct factors_request * req = (struct factors_request *) malloc(_len_req0*sizeof(struct factors_request));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        req[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sun8i_a23_get_pll1_factors(req);
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
