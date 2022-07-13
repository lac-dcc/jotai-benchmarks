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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ Type; int Connected; } ;
struct TYPE_5__ {scalar_t__ NumSocket; TYPE_2__** Sock; } ;
typedef  TYPE_1__ SOCKSET ;
typedef  TYPE_2__ SOCK ;

/* Variables and functions */
 scalar_t__ MAX_SOCKSET_NUM ; 
 scalar_t__ SOCK_TCP ; 

void AddSockSet(SOCKSET *set, SOCK *sock)
{
	// Validate arguments
	if (set == NULL || sock == NULL)
	{
		return;
	}
	if (sock->Type == SOCK_TCP && sock->Connected == false)
	{
		return;
	}

	if (set->NumSocket >= MAX_SOCKSET_NUM)
	{
		// Upper limit
		return;
	}
	set->Sock[set->NumSocket++] = sock;
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
          int _len_set0 = 1;
          struct TYPE_5__ * set = (struct TYPE_5__ *) malloc(_len_set0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0].NumSocket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_set__i0__Sock0 = 1;
          set[_i0].Sock = (struct TYPE_6__ **) malloc(_len_set__i0__Sock0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_set__i0__Sock0; _j0++) {
            int _len_set__i0__Sock1 = 1;
            set[_i0].Sock[_j0] = (struct TYPE_6__ *) malloc(_len_set__i0__Sock1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_set__i0__Sock1; _j1++) {
              set[_i0].Sock[_j0]->Type = ((-2 * (next_i()%2)) + 1) * next_i();
        set[_i0].Sock[_j0]->Connected = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sock0 = 1;
          struct TYPE_6__ * sock = (struct TYPE_6__ *) malloc(_len_sock0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].Type = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].Connected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddSockSet(set,sock);
          for(int _aux = 0; _aux < _len_set0; _aux++) {
          free(*(set[_aux].Sock));
        free(set[_aux].Sock);
          }
          free(set);
          free(sock);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_set0 = 65025;
          struct TYPE_5__ * set = (struct TYPE_5__ *) malloc(_len_set0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0].NumSocket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_set__i0__Sock0 = 1;
          set[_i0].Sock = (struct TYPE_6__ **) malloc(_len_set__i0__Sock0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_set__i0__Sock0; _j0++) {
            int _len_set__i0__Sock1 = 1;
            set[_i0].Sock[_j0] = (struct TYPE_6__ *) malloc(_len_set__i0__Sock1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_set__i0__Sock1; _j1++) {
              set[_i0].Sock[_j0]->Type = ((-2 * (next_i()%2)) + 1) * next_i();
        set[_i0].Sock[_j0]->Connected = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sock0 = 65025;
          struct TYPE_6__ * sock = (struct TYPE_6__ *) malloc(_len_sock0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].Type = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].Connected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddSockSet(set,sock);
          for(int _aux = 0; _aux < _len_set0; _aux++) {
          free(*(set[_aux].Sock));
        free(set[_aux].Sock);
          }
          free(set);
          free(sock);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_set0 = 100;
          struct TYPE_5__ * set = (struct TYPE_5__ *) malloc(_len_set0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0].NumSocket = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_set__i0__Sock0 = 1;
          set[_i0].Sock = (struct TYPE_6__ **) malloc(_len_set__i0__Sock0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_set__i0__Sock0; _j0++) {
            int _len_set__i0__Sock1 = 1;
            set[_i0].Sock[_j0] = (struct TYPE_6__ *) malloc(_len_set__i0__Sock1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_set__i0__Sock1; _j1++) {
              set[_i0].Sock[_j0]->Type = ((-2 * (next_i()%2)) + 1) * next_i();
        set[_i0].Sock[_j0]->Connected = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sock0 = 100;
          struct TYPE_6__ * sock = (struct TYPE_6__ *) malloc(_len_sock0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].Type = ((-2 * (next_i()%2)) + 1) * next_i();
        sock[_i0].Connected = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddSockSet(set,sock);
          for(int _aux = 0; _aux < _len_set0; _aux++) {
          free(*(set[_aux].Sock));
        free(set[_aux].Sock);
          }
          free(set);
          free(sock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
