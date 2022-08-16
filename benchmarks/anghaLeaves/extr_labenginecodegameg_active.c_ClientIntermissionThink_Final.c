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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int buttons; } ;
struct TYPE_6__ {TYPE_3__ cmd; } ;
struct TYPE_7__ {int /*<<< orphan*/  eFlags; } ;
struct TYPE_9__ {int oldbuttons; int buttons; int readyToExit; TYPE_1__ pers; TYPE_2__ ps; } ;
typedef  TYPE_4__ gclient_t ;

/* Variables and functions */
 int BUTTON_ATTACK ; 
 int BUTTON_USE_HOLDABLE ; 
 int /*<<< orphan*/  EF_FIRING ; 
 int /*<<< orphan*/  EF_TALK ; 

void ClientIntermissionThink( gclient_t *client ) {
	client->ps.eFlags &= ~EF_TALK;
	client->ps.eFlags &= ~EF_FIRING;

	// the level will exit when everyone wants to or after timeouts

	// swap and latch button actions
	client->oldbuttons = client->buttons;
	client->buttons = client->pers.cmd.buttons;
	if ( client->buttons & ( BUTTON_ATTACK | BUTTON_USE_HOLDABLE ) & ( client->oldbuttons ^ client->buttons ) ) {
		// this used to be an ^1 but once a player says ready, it should stick
		client->readyToExit = 1;
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
          int _len_client0 = 1;
          struct TYPE_9__ * client = (struct TYPE_9__ *) malloc(_len_client0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].oldbuttons = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].buttons = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].readyToExit = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].pers.cmd.buttons = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].ps.eFlags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ClientIntermissionThink(client);
          free(client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
