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
       0            empty\n\
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
typedef  int u32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int venc_calc_bpframes(u32 gop_size, u32 conseq_b, u32 *bf, u32 *pf)
{
	u32 half = (gop_size - 1) >> 1;
	u32 b, p, ratio;
	bool found = false;

	if (!gop_size)
		return -EINVAL;

	*bf = *pf = 0;

	if (!conseq_b) {
		*pf = gop_size -  1;
		return 0;
	}

	b = p = half;

	for (; b <= gop_size - 1; b++, p--) {
		if (b % p)
			continue;

		ratio = b / p;

		if (ratio == conseq_b) {
			found = true;
			break;
		}

		if (ratio > conseq_b)
			break;
	}

	if (!found)
		return -EINVAL;

	if (b + p + 1 != gop_size)
		return -EINVAL;

	*bf = b;
	*pf = p;

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

    // empty
    case 0:
    {
          int gop_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int conseq_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bf0 = 1;
          int * bf = (int *) malloc(_len_bf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bf0; _i0++) {
            bf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pf0 = 1;
          int * pf = (int *) malloc(_len_pf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pf0; _i0++) {
            pf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = venc_calc_bpframes(gop_size,conseq_b,bf,pf);
          printf("%d\n", benchRet); 
          free(bf);
          free(pf);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
