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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef  enum hinic_speed { ____Placeholder_hinic_speed } hinic_speed ;

/* Variables and functions */
#define  HINIC_SPEED_1000MB_LINK 134 
#define  HINIC_SPEED_100GB_LINK 133 
#define  HINIC_SPEED_100MB_LINK 132 
#define  HINIC_SPEED_10GB_LINK 131 
#define  HINIC_SPEED_10MB_LINK 130 
#define  HINIC_SPEED_25GB_LINK 129 
#define  HINIC_SPEED_40GB_LINK 128 
 int /*<<< orphan*/  SPEED_10 ; 
 int /*<<< orphan*/  SPEED_100 ; 
 int /*<<< orphan*/  SPEED_1000 ; 
 int /*<<< orphan*/  SPEED_10000 ; 
 int /*<<< orphan*/  SPEED_100000 ; 
 int /*<<< orphan*/  SPEED_25000 ; 
 int /*<<< orphan*/  SPEED_40000 ; 
 int /*<<< orphan*/  SPEED_UNKNOWN ; 

__attribute__((used)) static void set_link_speed(struct ethtool_link_ksettings *link_ksettings,
			   enum hinic_speed speed)
{
	switch (speed) {
	case HINIC_SPEED_10MB_LINK:
		link_ksettings->base.speed = SPEED_10;
		break;

	case HINIC_SPEED_100MB_LINK:
		link_ksettings->base.speed = SPEED_100;
		break;

	case HINIC_SPEED_1000MB_LINK:
		link_ksettings->base.speed = SPEED_1000;
		break;

	case HINIC_SPEED_10GB_LINK:
		link_ksettings->base.speed = SPEED_10000;
		break;

	case HINIC_SPEED_25GB_LINK:
		link_ksettings->base.speed = SPEED_25000;
		break;

	case HINIC_SPEED_40GB_LINK:
		link_ksettings->base.speed = SPEED_40000;
		break;

	case HINIC_SPEED_100GB_LINK:
		link_ksettings->base.speed = SPEED_100000;
		break;

	default:
		link_ksettings->base.speed = SPEED_UNKNOWN;
		break;
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
          enum hinic_speed speed = 0;
          int _len_link_ksettings0 = 1;
          struct ethtool_link_ksettings * link_ksettings = (struct ethtool_link_ksettings *) malloc(_len_link_ksettings0*sizeof(struct ethtool_link_ksettings));
          for(int _i0 = 0; _i0 < _len_link_ksettings0; _i0++) {
            link_ksettings[_i0].base.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_link_speed(link_ksettings,speed);
          free(link_ksettings);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum hinic_speed speed = 0;
          int _len_link_ksettings0 = 100;
          struct ethtool_link_ksettings * link_ksettings = (struct ethtool_link_ksettings *) malloc(_len_link_ksettings0*sizeof(struct ethtool_link_ksettings));
          for(int _i0 = 0; _i0 < _len_link_ksettings0; _i0++) {
            link_ksettings[_i0].base.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_link_speed(link_ksettings,speed);
          free(link_ksettings);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
