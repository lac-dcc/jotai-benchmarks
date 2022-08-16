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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int* vec3_t ;
struct TYPE_5__ {int painTime; scalar_t__ painDirection; } ;
struct TYPE_6__ {TYPE_1__ pe; } ;
typedef  TYPE_2__ centity_t ;
struct TYPE_7__ {int time; } ;

/* Variables and functions */
 int PAIN_TWITCH_TIME ; 
 size_t ROLL ; 
 TYPE_3__ cg ; 

__attribute__((used)) static void CG_AddPainTwitch( centity_t *cent, vec3_t torsoAngles ) {
	int		t;
	float	f;

	t = cg.time - cent->pe.painTime;
	if ( t >= PAIN_TWITCH_TIME ) {
		return;
	}

	f = 1.0 - (float)t / PAIN_TWITCH_TIME;

	if ( cent->pe.painDirection ) {
		torsoAngles[ROLL] += 20 * f;
	} else {
		torsoAngles[ROLL] -= 20 * f;
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
          int _len_cent0 = 1;
          struct TYPE_6__ * cent = (struct TYPE_6__ *) malloc(_len_cent0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_cent0; _i0++) {
            cent[_i0].pe.painTime = ((-2 * (next_i()%2)) + 1) * next_i();
        cent[_i0].pe.painDirection = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_torsoAngles0 = 1;
          int * torsoAngles = (int *) malloc(_len_torsoAngles0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_torsoAngles0; _i0++) {
            torsoAngles[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CG_AddPainTwitch(cent,torsoAngles);
          free(cent);
          free(torsoAngles);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
