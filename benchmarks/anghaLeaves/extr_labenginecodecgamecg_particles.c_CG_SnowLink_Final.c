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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ qboolean ;
struct TYPE_7__ {scalar_t__ type; int snum; int /*<<< orphan*/  link; struct TYPE_7__* next; } ;
typedef  TYPE_2__ cparticle_t ;
struct TYPE_6__ {int frame; } ;
struct TYPE_8__ {TYPE_1__ currentState; } ;
typedef  TYPE_3__ centity_t ;

/* Variables and functions */
 scalar_t__ P_WEATHER ; 
 scalar_t__ P_WEATHER_TURBULENT ; 
 TYPE_2__* active_particles ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

void	CG_SnowLink (centity_t *cent, qboolean particleOn)
{
	cparticle_t		*p, *next;
	int id;

	id = cent->currentState.frame;

	for (p=active_particles ; p ; p=next)
	{
		next = p->next;
		
		if (p->type == P_WEATHER || p->type == P_WEATHER_TURBULENT)
		{
			if (p->snum == id)
			{
				if (particleOn)
					p->link = qtrue;
				else
					p->link = qfalse;
			}
		}

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
          long particleOn = 100;
          int _len_cent0 = 1;
          struct TYPE_8__ * cent = (struct TYPE_8__ *) malloc(_len_cent0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_cent0; _i0++) {
            cent[_i0].currentState.frame = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CG_SnowLink(cent,particleOn);
          free(cent);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long particleOn = 10;
          int _len_cent0 = 100;
          struct TYPE_8__ * cent = (struct TYPE_8__ *) malloc(_len_cent0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_cent0; _i0++) {
            cent[_i0].currentState.frame = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CG_SnowLink(cent,particleOn);
          free(cent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
