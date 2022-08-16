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
struct b43_wldev {int dummy; } ;

/* Variables and functions */
#define  B43_PHYTYPE_A 138 
#define  B43_PHYTYPE_AC 137 
#define  B43_PHYTYPE_B 136 
#define  B43_PHYTYPE_G 135 
#define  B43_PHYTYPE_HT 134 
#define  B43_PHYTYPE_LCN 133 
#define  B43_PHYTYPE_LCN40 132 
#define  B43_PHYTYPE_LCNXN 131 
#define  B43_PHYTYPE_LP 130 
#define  B43_PHYTYPE_N 129 
#define  B43_PHYTYPE_SSLPN 128 

__attribute__((used)) static char *b43_phy_name(struct b43_wldev *dev, u8 phy_type)
{
	switch (phy_type) {
	case B43_PHYTYPE_A:
		return "A";
	case B43_PHYTYPE_B:
		return "B";
	case B43_PHYTYPE_G:
		return "G";
	case B43_PHYTYPE_N:
		return "N";
	case B43_PHYTYPE_LP:
		return "LP";
	case B43_PHYTYPE_SSLPN:
		return "SSLPN";
	case B43_PHYTYPE_HT:
		return "HT";
	case B43_PHYTYPE_LCN:
		return "LCN";
	case B43_PHYTYPE_LCNXN:
		return "LCNXN";
	case B43_PHYTYPE_LCN40:
		return "LCN40";
	case B43_PHYTYPE_AC:
		return "AC";
	}
	return "UNKNOWN";
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
          int phy_type = 100;
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = b43_phy_name(dev,phy_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int phy_type = 10;
          int _len_dev0 = 100;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = b43_phy_name(dev,phy_type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
