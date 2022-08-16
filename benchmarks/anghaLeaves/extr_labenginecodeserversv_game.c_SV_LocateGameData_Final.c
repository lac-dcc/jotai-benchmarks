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
typedef  int /*<<< orphan*/  sharedEntity_t ;
typedef  int /*<<< orphan*/  playerState_t ;
struct TYPE_2__ {int gentitySize; int num_entities; int gameClientSize; int /*<<< orphan*/ * gameClients; int /*<<< orphan*/ * gentities; } ;

/* Variables and functions */
 TYPE_1__ sv ; 

void SV_LocateGameData( sharedEntity_t *gEnts, int numGEntities, int sizeofGEntity_t,
					   playerState_t *clients, int sizeofGameClient ) {
	sv.gentities = gEnts;
	sv.gentitySize = sizeofGEntity_t;
	sv.num_entities = numGEntities;

	sv.gameClients = clients;
	sv.gameClientSize = sizeofGameClient;
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
          int numGEntities = 100;
          int sizeofGEntity_t = 100;
          int sizeofGameClient = 100;
          int _len_gEnts0 = 1;
          int * gEnts = (int *) malloc(_len_gEnts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_gEnts0; _i0++) {
            gEnts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clients0 = 1;
          int * clients = (int *) malloc(_len_clients0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clients0; _i0++) {
            clients[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SV_LocateGameData(gEnts,numGEntities,sizeofGEntity_t,clients,sizeofGameClient);
          free(gEnts);
          free(clients);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
