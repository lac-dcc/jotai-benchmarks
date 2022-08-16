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
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {scalar_t__ status; int /*<<< orphan*/  number; } ;
typedef  TYPE_2__ TCP_Client_Connection ;

/* Variables and functions */
 size_t NUM_CLIENT_CONNECTIONS ; 

int set_tcp_connection_number(TCP_Client_Connection *con, uint8_t con_id, uint32_t number)
{
    if (con_id >= NUM_CLIENT_CONNECTIONS)
        return -1;

    if (con->connections[con_id].status == 0)
        return -1;

    con->connections[con_id].number = number;
    return 0;
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
          unsigned long con_id = 100;
          int number = 100;
          int _len_con0 = 1;
          struct TYPE_5__ * con = (struct TYPE_5__ *) malloc(_len_con0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__connections0 = 1;
          con[_i0].connections = (struct TYPE_4__ *) malloc(_len_con__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con__i0__connections0; _j0++) {
            con[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
        con[_i0].connections->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = set_tcp_connection_number(con,con_id,number);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].connections);
          }
          free(con);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
