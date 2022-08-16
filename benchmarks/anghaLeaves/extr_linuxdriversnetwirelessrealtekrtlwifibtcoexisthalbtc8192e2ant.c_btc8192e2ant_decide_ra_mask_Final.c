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
struct btc_coexist {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static u32 btc8192e2ant_decide_ra_mask(struct btc_coexist *btcoexist,
				       u8 ss_type, u32 ra_mask_type)
{
	u32 dis_ra_mask = 0x0;

	switch (ra_mask_type) {
	case 0: /* normal mode */
		if (ss_type == 2)
			dis_ra_mask = 0x0; /* enable 2ss */
		else
			dis_ra_mask = 0xfff00000; /* disable 2ss */
		break;
	case 1: /* disable cck 1/2 */
		if (ss_type == 2)
			dis_ra_mask = 0x00000003; /* enable 2ss */
		else
			dis_ra_mask = 0xfff00003; /* disable 2ss */
		break;
	case 2: /* disable cck 1/2/5.5, ofdm 6/9/12/18/24, mcs 0/1/2/3/4 */
		if (ss_type == 2)
			dis_ra_mask = 0x0001f1f7; /* enable 2ss */
		else
			dis_ra_mask = 0xfff1f1f7; /* disable 2ss */
		break;
	default:
		break;
	}

	return dis_ra_mask;
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
          int ss_type = 100;
          int ra_mask_type = 100;
          int _len_btcoexist0 = 1;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = btc8192e2ant_decide_ra_mask(btcoexist,ss_type,ra_mask_type);
          printf("%d\n", benchRet); 
          free(btcoexist);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int ss_type = 10;
          int ra_mask_type = 10;
          int _len_btcoexist0 = 100;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = btc8192e2ant_decide_ra_mask(btcoexist,ss_type,ra_mask_type);
          printf("%d\n", benchRet); 
          free(btcoexist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
