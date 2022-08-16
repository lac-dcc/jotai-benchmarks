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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {char* hostName; char* mapName; int ping; char* game; scalar_t__ g_needpass; scalar_t__ g_humanplayers; scalar_t__ punkbuster; scalar_t__ netType; scalar_t__ gameType; scalar_t__ minPing; scalar_t__ maxPing; scalar_t__ maxClients; scalar_t__ clients; int /*<<< orphan*/  adr; } ;
typedef  TYPE_1__ serverInfo_t ;
typedef  int /*<<< orphan*/  netadr_t ;

/* Variables and functions */

void CL_InitServerInfo( serverInfo_t *server, netadr_t *address ) {
	server->adr = *address;
	server->clients = 0;
	server->hostName[0] = '\0';
	server->mapName[0] = '\0';
	server->maxClients = 0;
	server->maxPing = 0;
	server->minPing = 0;
	server->ping = -1;
	server->game[0] = '\0';
	server->gameType = 0;
	server->netType = 0;
	server->punkbuster = 0;
	server->g_humanplayers = 0;
	server->g_needpass = 0;
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
          int _len_server0 = 1;
          struct TYPE_3__ * server = (struct TYPE_3__ *) malloc(_len_server0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
              int _len_server__i0__hostName0 = 1;
          server[_i0].hostName = (char *) malloc(_len_server__i0__hostName0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_server__i0__hostName0; _j0++) {
            server[_i0].hostName[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_server__i0__mapName0 = 1;
          server[_i0].mapName = (char *) malloc(_len_server__i0__mapName0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_server__i0__mapName0; _j0++) {
            server[_i0].mapName[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        server[_i0].ping = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_server__i0__game0 = 1;
          server[_i0].game = (char *) malloc(_len_server__i0__game0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_server__i0__game0; _j0++) {
            server[_i0].game[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        server[_i0].g_needpass = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].g_humanplayers = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].punkbuster = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].netType = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].gameType = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].minPing = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].maxPing = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].maxClients = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].clients = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].adr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_address0 = 1;
          int * address = (int *) malloc(_len_address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_address0; _i0++) {
            address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CL_InitServerInfo(server,address);
          for(int _aux = 0; _aux < _len_server0; _aux++) {
          free(server[_aux].hostName);
          }
          for(int _aux = 0; _aux < _len_server0; _aux++) {
          free(server[_aux].mapName);
          }
          for(int _aux = 0; _aux < _len_server0; _aux++) {
          free(server[_aux].game);
          }
          free(server);
          free(address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
