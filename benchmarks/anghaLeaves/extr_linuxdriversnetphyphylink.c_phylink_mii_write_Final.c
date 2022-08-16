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
struct phylink {int link_an_mode; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
#define  MLO_AN_FIXED 130 
#define  MLO_AN_INBAND 129 
#define  MLO_AN_PHY 128 

__attribute__((used)) static int phylink_mii_write(struct phylink *pl, unsigned int phy_id,
			     unsigned int reg, unsigned int val)
{
	switch (pl->link_an_mode) {
	case MLO_AN_FIXED:
		break;

	case MLO_AN_PHY:
		return -EOPNOTSUPP;

	case MLO_AN_INBAND:
		break;
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
          unsigned int phy_id = 100;
          unsigned int reg = 100;
          unsigned int val = 100;
          int _len_pl0 = 1;
          struct phylink * pl = (struct phylink *) malloc(_len_pl0*sizeof(struct phylink));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].link_an_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phylink_mii_write(pl,phy_id,reg,val);
          printf("%d\n", benchRet); 
          free(pl);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int phy_id = 10;
          unsigned int reg = 10;
          unsigned int val = 10;
          int _len_pl0 = 100;
          struct phylink * pl = (struct phylink *) malloc(_len_pl0*sizeof(struct phylink));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl[_i0].link_an_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phylink_mii_write(pl,phy_id,reg,val);
          printf("%d\n", benchRet); 
          free(pl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
