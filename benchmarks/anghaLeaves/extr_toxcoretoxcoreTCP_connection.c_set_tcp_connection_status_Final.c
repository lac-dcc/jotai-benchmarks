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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {unsigned int tcp_connection; unsigned int status; int /*<<< orphan*/  connection_id; } ;
typedef  TYPE_2__ TCP_Connection_to ;

/* Variables and functions */
 unsigned int MAX_FRIEND_TCP_CONNECTIONS ; 

__attribute__((used)) static int set_tcp_connection_status(TCP_Connection_to *con_to, unsigned int tcp_connections_number,
                                     unsigned int status, uint8_t connection_id)
{
    unsigned int i;

    for (i = 0; i < MAX_FRIEND_TCP_CONNECTIONS; ++i) {
        if (con_to->connections[i].tcp_connection == (tcp_connections_number + 1)) {

            if (con_to->connections[i].status == status) {
                return -1;
            }

            con_to->connections[i].status = status;
            con_to->connections[i].connection_id = connection_id;
            return i;
        }
    }

    return -1;
}

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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int tcp_connections_number = 100;
        
          unsigned int status = 100;
        
          int connection_id = 100;
        
          int _len_con_to0 = 1;
          struct TYPE_5__ * con_to = (struct TYPE_5__ *) malloc(_len_con_to0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con_to0; _i0++) {
              int _len_con_to__i0__connections0 = 1;
          con_to[_i0].connections = (struct TYPE_4__ *) malloc(_len_con_to__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con_to__i0__connections0; _j0++) {
              con_to[_i0].connections->tcp_connection = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->connection_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = set_tcp_connection_status(con_to,tcp_connections_number,status,connection_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_con_to0; _aux++) {
          free(con_to[_aux].connections);
          }
          free(con_to);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int tcp_connections_number = 255;
        
          unsigned int status = 255;
        
          int connection_id = 255;
        
          int _len_con_to0 = 65025;
          struct TYPE_5__ * con_to = (struct TYPE_5__ *) malloc(_len_con_to0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con_to0; _i0++) {
              int _len_con_to__i0__connections0 = 1;
          con_to[_i0].connections = (struct TYPE_4__ *) malloc(_len_con_to__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con_to__i0__connections0; _j0++) {
              con_to[_i0].connections->tcp_connection = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->connection_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = set_tcp_connection_status(con_to,tcp_connections_number,status,connection_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_con_to0; _aux++) {
          free(con_to[_aux].connections);
          }
          free(con_to);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int tcp_connections_number = 10;
        
          unsigned int status = 10;
        
          int connection_id = 10;
        
          int _len_con_to0 = 100;
          struct TYPE_5__ * con_to = (struct TYPE_5__ *) malloc(_len_con_to0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con_to0; _i0++) {
              int _len_con_to__i0__connections0 = 1;
          con_to[_i0].connections = (struct TYPE_4__ *) malloc(_len_con_to__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con_to__i0__connections0; _j0++) {
              con_to[_i0].connections->tcp_connection = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->connection_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = set_tcp_connection_status(con_to,tcp_connections_number,status,connection_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_con_to0; _aux++) {
          free(con_to[_aux].connections);
          }
          free(con_to);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int tcp_connections_number = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int connection_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_con_to0 = 1;
          struct TYPE_5__ * con_to = (struct TYPE_5__ *) malloc(_len_con_to0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_con_to0; _i0++) {
              int _len_con_to__i0__connections0 = 1;
          con_to[_i0].connections = (struct TYPE_4__ *) malloc(_len_con_to__i0__connections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_con_to__i0__connections0; _j0++) {
              con_to[_i0].connections->tcp_connection = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->status = ((-2 * (next_i()%2)) + 1) * next_i();
          con_to[_i0].connections->connection_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = set_tcp_connection_status(con_to,tcp_connections_number,status,connection_id);
          printf("%d\n", benchRet); 
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
