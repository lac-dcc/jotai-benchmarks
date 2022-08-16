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
typedef  int uint16_t ;
struct TYPE_4__ {scalar_t__ length; } ;
struct TYPE_5__ {int message_id; scalar_t__ buffer_length; int* buffer; TYPE_1__ message; } ;
typedef  TYPE_2__ mqtt_connection_t ;

/* Variables and functions */

__attribute__((used)) static uint16_t append_message_id(mqtt_connection_t* connection, uint16_t message_id)
{
  // If message_id is zero then we should assign one, otherwise
  // we'll use the one supplied by the caller
  while(message_id == 0)
    message_id = ++connection->message_id;

  if(connection->message.length + 2 > connection->buffer_length)
    return 0;

  connection->buffer[connection->message.length++] = message_id >> 8;
  connection->buffer[connection->message.length++] = message_id & 0xff;

  return message_id;
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
          int message_id = 100;
          int _len_connection0 = 1;
          struct TYPE_5__ * connection = (struct TYPE_5__ *) malloc(_len_connection0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_connection0; _i0++) {
            connection[_i0].message_id = ((-2 * (next_i()%2)) + 1) * next_i();
        connection[_i0].buffer_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_connection__i0__buffer0 = 1;
          connection[_i0].buffer = (int *) malloc(_len_connection__i0__buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_connection__i0__buffer0; _j0++) {
            connection[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        connection[_i0].message.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = append_message_id(connection,message_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_connection0; _aux++) {
          free(connection[_aux].buffer);
          }
          free(connection);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
