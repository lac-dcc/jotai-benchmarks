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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  enum transmitter { ____Placeholder_transmitter } transmitter ;

/* Variables and functions */
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYA ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYB ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYC ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYD ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYE ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYF ; 
 int /*<<< orphan*/  ATOM_PHY_ID_UNIPHYG ; 
#define  TRANSMITTER_UNIPHY_A 134 
#define  TRANSMITTER_UNIPHY_B 133 
#define  TRANSMITTER_UNIPHY_C 132 
#define  TRANSMITTER_UNIPHY_D 131 
#define  TRANSMITTER_UNIPHY_E 130 
#define  TRANSMITTER_UNIPHY_F 129 
#define  TRANSMITTER_UNIPHY_G 128 

__attribute__((used)) static uint8_t phy_id_to_atom(enum transmitter t)
{
	uint8_t atom_phy_id;

	switch (t) {
	case TRANSMITTER_UNIPHY_A:
		atom_phy_id = ATOM_PHY_ID_UNIPHYA;
		break;
	case TRANSMITTER_UNIPHY_B:
		atom_phy_id = ATOM_PHY_ID_UNIPHYB;
		break;
	case TRANSMITTER_UNIPHY_C:
		atom_phy_id = ATOM_PHY_ID_UNIPHYC;
		break;
	case TRANSMITTER_UNIPHY_D:
		atom_phy_id = ATOM_PHY_ID_UNIPHYD;
		break;
	case TRANSMITTER_UNIPHY_E:
		atom_phy_id = ATOM_PHY_ID_UNIPHYE;
		break;
	case TRANSMITTER_UNIPHY_F:
		atom_phy_id = ATOM_PHY_ID_UNIPHYF;
		break;
	case TRANSMITTER_UNIPHY_G:
		atom_phy_id = ATOM_PHY_ID_UNIPHYG;
		break;
	default:
		atom_phy_id = ATOM_PHY_ID_UNIPHYA;
		break;
	}
	return atom_phy_id;
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
          enum transmitter t = 0;
          int benchRet = phy_id_to_atom(t);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
