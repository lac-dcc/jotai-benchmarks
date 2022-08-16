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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  qboolean ;
struct TYPE_9__ {TYPE_2__* client; } ;
typedef  TYPE_3__ gentity_t ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ sessionTeam; } ;
struct TYPE_8__ {TYPE_1__ sess; } ;

/* Variables and functions */
 scalar_t__ GT_TEAM ; 
 TYPE_4__ g_gametype ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean OnSameTeam( gentity_t *ent1, gentity_t *ent2 ) {
	if ( !ent1->client || !ent2->client ) {
		return qfalse;
	}

	if ( g_gametype.integer < GT_TEAM ) {
		return qfalse;
	}

	if ( ent1->client->sess.sessionTeam == ent2->client->sess.sessionTeam ) {
		return qtrue;
	}

	return qfalse;
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
          int _len_ent10 = 1;
          struct TYPE_9__ * ent1 = (struct TYPE_9__ *) malloc(_len_ent10*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ent10; _i0++) {
              int _len_ent1__i0__client0 = 1;
          ent1[_i0].client = (struct TYPE_8__ *) malloc(_len_ent1__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent1__i0__client0; _j0++) {
            ent1[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ent20 = 1;
          struct TYPE_9__ * ent2 = (struct TYPE_9__ *) malloc(_len_ent20*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ent20; _i0++) {
              int _len_ent2__i0__client0 = 1;
          ent2[_i0].client = (struct TYPE_8__ *) malloc(_len_ent2__i0__client0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ent2__i0__client0; _j0++) {
            ent2[_i0].client->sess.sessionTeam = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = OnSameTeam(ent1,ent2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ent10; _aux++) {
          free(ent1[_aux].client);
          }
          free(ent1);
          for(int _aux = 0; _aux < _len_ent20; _aux++) {
          free(ent2[_aux].client);
          }
          free(ent2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
