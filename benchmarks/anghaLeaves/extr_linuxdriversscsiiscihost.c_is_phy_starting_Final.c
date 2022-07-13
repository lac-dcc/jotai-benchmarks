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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_2__ {int current_state_id; } ;
struct isci_phy {TYPE_1__ sm; } ;
typedef  enum sci_phy_states { ____Placeholder_sci_phy_states } sci_phy_states ;

/* Variables and functions */
#define  SCI_PHY_STARTING 138 
#define  SCI_PHY_SUB_AWAIT_IAF_UF 137 
#define  SCI_PHY_SUB_AWAIT_OSSP_EN 136 
#define  SCI_PHY_SUB_AWAIT_SAS_POWER 135 
#define  SCI_PHY_SUB_AWAIT_SAS_SPEED_EN 134 
#define  SCI_PHY_SUB_AWAIT_SATA_PHY_EN 133 
#define  SCI_PHY_SUB_AWAIT_SATA_POWER 132 
#define  SCI_PHY_SUB_AWAIT_SATA_SPEED_EN 131 
#define  SCI_PHY_SUB_AWAIT_SIG_FIS_UF 130 
#define  SCI_PHY_SUB_FINAL 129 
#define  SCI_PHY_SUB_INITIAL 128 

__attribute__((used)) static bool is_phy_starting(struct isci_phy *iphy)
{
	enum sci_phy_states state;

	state = iphy->sm.current_state_id;
	switch (state) {
	case SCI_PHY_STARTING:
	case SCI_PHY_SUB_INITIAL:
	case SCI_PHY_SUB_AWAIT_SAS_SPEED_EN:
	case SCI_PHY_SUB_AWAIT_IAF_UF:
	case SCI_PHY_SUB_AWAIT_SAS_POWER:
	case SCI_PHY_SUB_AWAIT_SATA_POWER:
	case SCI_PHY_SUB_AWAIT_SATA_PHY_EN:
	case SCI_PHY_SUB_AWAIT_SATA_SPEED_EN:
	case SCI_PHY_SUB_AWAIT_OSSP_EN:
	case SCI_PHY_SUB_AWAIT_SIG_FIS_UF:
	case SCI_PHY_SUB_FINAL:
		return true;
	default:
		return false;
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
          int _len_iphy0 = 1;
          struct isci_phy * iphy = (struct isci_phy *) malloc(_len_iphy0*sizeof(struct isci_phy));
          for(int _i0 = 0; _i0 < _len_iphy0; _i0++) {
            iphy[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_phy_starting(iphy);
          printf("%d\n", benchRet); 
          free(iphy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iphy0 = 65025;
          struct isci_phy * iphy = (struct isci_phy *) malloc(_len_iphy0*sizeof(struct isci_phy));
          for(int _i0 = 0; _i0 < _len_iphy0; _i0++) {
            iphy[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_phy_starting(iphy);
          printf("%d\n", benchRet); 
          free(iphy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iphy0 = 100;
          struct isci_phy * iphy = (struct isci_phy *) malloc(_len_iphy0*sizeof(struct isci_phy));
          for(int _i0 = 0; _i0 < _len_iphy0; _i0++) {
            iphy[_i0].sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_phy_starting(iphy);
          printf("%d\n", benchRet); 
          free(iphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
