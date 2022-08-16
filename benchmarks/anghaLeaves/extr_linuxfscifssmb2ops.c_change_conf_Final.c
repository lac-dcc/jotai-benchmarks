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
struct TCP_Server_Info {int credits; int echo_credits; int oplock_credits; int echoes; int oplocks; } ;

/* Variables and functions */
 int /*<<< orphan*/  enable_oplocks ; 

__attribute__((used)) static int
change_conf(struct TCP_Server_Info *server)
{
	server->credits += server->echo_credits + server->oplock_credits;
	server->oplock_credits = server->echo_credits = 0;
	switch (server->credits) {
	case 0:
		return 0;
	case 1:
		server->echoes = false;
		server->oplocks = false;
		break;
	case 2:
		server->echoes = true;
		server->oplocks = false;
		server->echo_credits = 1;
		break;
	default:
		server->echoes = true;
		if (enable_oplocks) {
			server->oplocks = true;
			server->oplock_credits = 1;
		} else
			server->oplocks = false;

		server->echo_credits = 1;
	}
	server->credits -= server->echo_credits + server->oplock_credits;
	return server->credits + server->echo_credits + server->oplock_credits;
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
          struct TCP_Server_Info * server = (struct TCP_Server_Info *) malloc(_len_server0*sizeof(struct TCP_Server_Info));
          for(int _i0 = 0; _i0 < _len_server0; _i0++) {
            server[_i0].credits = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].echo_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].oplock_credits = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].echoes = ((-2 * (next_i()%2)) + 1) * next_i();
        server[_i0].oplocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = change_conf(server);
          printf("%d\n", benchRet); 
          free(server);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
