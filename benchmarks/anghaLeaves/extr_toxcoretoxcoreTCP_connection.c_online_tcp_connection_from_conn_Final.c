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
struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {scalar_t__ status; scalar_t__ tcp_connection; } ;
typedef  TYPE_2__ TCP_Connection_to ;

/* Variables and functions */
 unsigned int MAX_FRIEND_TCP_CONNECTIONS ; 
 scalar_t__ TCP_CONNECTIONS_STATUS_ONLINE ; 

__attribute__((used)) static unsigned int online_tcp_connection_from_conn(TCP_Connection_to *con_to)
{
    unsigned int i, count = 0;

    for (i = 0; i < MAX_FRIEND_TCP_CONNECTIONS; ++i) {
        if (con_to->connections[i].tcp_connection) {
            if (con_to->connections[i].status == TCP_CONNECTIONS_STATUS_ONLINE) {
                ++count;
            }
        }
    }

    return count;
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
          int _len_con_to0 = 1;
          struct TYPE_5__ * con_to = (struct TYPE_5__ *) malloc(_len_con_to0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con_to0; _i0++) {
              int _len_con_to__i0__connections0 = 1;
          con_to[_i0].connections = (struct TYPE_4__ *) malloc(_len_con_to__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con_to__i0__connections0; _j0++) {
            con_to[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
        con_to[_i0].connections->tcp_connection = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = online_tcp_connection_from_conn(con_to);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_con_to0; _aux++) {
          free(con_to[_aux].connections);
          }
          free(con_to);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
