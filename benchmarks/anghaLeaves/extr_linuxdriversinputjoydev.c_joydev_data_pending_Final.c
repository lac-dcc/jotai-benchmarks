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
struct joydev_client {scalar_t__ startup; scalar_t__ head; scalar_t__ tail; struct joydev* joydev; } ;
struct joydev {scalar_t__ nabs; scalar_t__ nkey; } ;

/* Variables and functions */

__attribute__((used)) static inline int joydev_data_pending(struct joydev_client *client)
{
	struct joydev *joydev = client->joydev;

	return client->startup < joydev->nabs + joydev->nkey ||
		client->head != client->tail;
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
          struct joydev_client * client = (struct joydev_client *) malloc(_len_client0*sizeof(struct joydev_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].startup = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_client__i0__joydev0 = 1;
          client[_i0].joydev = (struct joydev *) malloc(_len_client__i0__joydev0*sizeof(struct joydev));
          for(int _j0 = 0; _j0 < _len_client__i0__joydev0; _j0++) {
            client[_i0].joydev->nabs = ((-2 * (next_i()%2)) + 1) * next_i();
        client[_i0].joydev->nkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = joydev_data_pending(client);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_client0; _aux++) {
          free(client[_aux].joydev);
          }
          free(client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
