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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ex_phy {int routing_attr; } ;
struct TYPE_2__ {int /*<<< orphan*/  t2t_supp; } ;
struct domain_device {TYPE_1__ ex_dev; } ;

/* Variables and functions */
#define  DIRECT_ROUTING 130 
#define  SUBTRACTIVE_ROUTING 129 
#define  TABLE_ROUTING 128 

__attribute__((used)) static char sas_route_char(struct domain_device *dev, struct ex_phy *phy)
{
	switch (phy->routing_attr) {
	case TABLE_ROUTING:
		if (dev->ex_dev.t2t_supp)
			return 'U';
		else
			return 'T';
	case DIRECT_ROUTING:
		return 'D';
	case SUBTRACTIVE_ROUTING:
		return 'S';
	default:
		return '?';
	}
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
          int _len_dev0 = 1;
          struct domain_device * dev = (struct domain_device *) malloc(_len_dev0*sizeof(struct domain_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ex_dev.t2t_supp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy0 = 1;
          struct ex_phy * phy = (struct ex_phy *) malloc(_len_phy0*sizeof(struct ex_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].routing_attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = sas_route_char(dev,phy);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(dev);
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
