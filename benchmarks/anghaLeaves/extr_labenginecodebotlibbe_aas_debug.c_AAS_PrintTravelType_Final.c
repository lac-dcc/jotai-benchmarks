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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */

void AAS_PrintTravelType(int traveltype)
{
#ifdef DEBUG
	char *str;
	//
	switch(traveltype & TRAVELTYPE_MASK)
	{
		case TRAVEL_INVALID: str = "TRAVEL_INVALID"; break;
		case TRAVEL_WALK: str = "TRAVEL_WALK"; break;
		case TRAVEL_CROUCH: str = "TRAVEL_CROUCH"; break;
		case TRAVEL_BARRIERJUMP: str = "TRAVEL_BARRIERJUMP"; break;
		case TRAVEL_JUMP: str = "TRAVEL_JUMP"; break;
		case TRAVEL_LADDER: str = "TRAVEL_LADDER"; break;
		case TRAVEL_WALKOFFLEDGE: str = "TRAVEL_WALKOFFLEDGE"; break;
		case TRAVEL_SWIM: str = "TRAVEL_SWIM"; break;
		case TRAVEL_WATERJUMP: str = "TRAVEL_WATERJUMP"; break;
		case TRAVEL_TELEPORT: str = "TRAVEL_TELEPORT"; break;
		case TRAVEL_ELEVATOR: str = "TRAVEL_ELEVATOR"; break;
		case TRAVEL_ROCKETJUMP: str = "TRAVEL_ROCKETJUMP"; break;
		case TRAVEL_BFGJUMP: str = "TRAVEL_BFGJUMP"; break;
		case TRAVEL_GRAPPLEHOOK: str = "TRAVEL_GRAPPLEHOOK"; break;
		case TRAVEL_JUMPPAD: str = "TRAVEL_JUMPPAD"; break;
		case TRAVEL_FUNCBOB: str = "TRAVEL_FUNCBOB"; break;
		default: str = "UNKNOWN TRAVEL TYPE"; break;
	} //end switch
	botimport.Print(PRT_MESSAGE, "%s", str);
#endif
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
          int traveltype = 100;
          AAS_PrintTravelType(traveltype);
        
        break;
    }
    // big-arr
    case 1:
    {
          int traveltype = 255;
          AAS_PrintTravelType(traveltype);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int traveltype = 10;
          AAS_PrintTravelType(traveltype);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
