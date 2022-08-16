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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* animations; } ;
typedef  TYPE_2__ clientInfo_t ;
struct TYPE_4__ {int firstFrame; } ;

/* Variables and functions */
 size_t TORSO_ATTACK ; 
 size_t TORSO_ATTACK2 ; 
 size_t TORSO_DROP ; 

__attribute__((used)) static int CG_MapTorsoToWeaponFrame( clientInfo_t *ci, int frame ) {

	// change weapon
	if ( frame >= ci->animations[TORSO_DROP].firstFrame 
		&& frame < ci->animations[TORSO_DROP].firstFrame + 9 ) {
		return frame - ci->animations[TORSO_DROP].firstFrame + 6;
	}

	// stand attack
	if ( frame >= ci->animations[TORSO_ATTACK].firstFrame 
		&& frame < ci->animations[TORSO_ATTACK].firstFrame + 6 ) {
		return 1 + frame - ci->animations[TORSO_ATTACK].firstFrame;
	}

	// stand attack 2
	if ( frame >= ci->animations[TORSO_ATTACK2].firstFrame 
		&& frame < ci->animations[TORSO_ATTACK2].firstFrame + 6 ) {
		return 1 + frame - ci->animations[TORSO_ATTACK2].firstFrame;
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
          int frame = 100;
          int _len_ci0 = 1;
          struct TYPE_5__ * ci = (struct TYPE_5__ *) malloc(_len_ci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
              int _len_ci__i0__animations0 = 1;
          ci[_i0].animations = (struct TYPE_4__ *) malloc(_len_ci__i0__animations0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ci__i0__animations0; _j0++) {
            ci[_i0].animations->firstFrame = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = CG_MapTorsoToWeaponFrame(ci,frame);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ci0; _aux++) {
          free(ci[_aux].animations);
          }
          free(ci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
