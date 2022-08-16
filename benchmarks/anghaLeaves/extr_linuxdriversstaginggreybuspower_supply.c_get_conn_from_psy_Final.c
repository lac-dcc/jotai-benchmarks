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
struct gb_power_supply {TYPE_1__* supplies; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_connection* connection; } ;

/* Variables and functions */

__attribute__((used)) static struct gb_connection *get_conn_from_psy(struct gb_power_supply *gbpsy)
{
	return gbpsy->supplies->connection;
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
          int _len_gbpsy0 = 1;
          struct gb_power_supply * gbpsy = (struct gb_power_supply *) malloc(_len_gbpsy0*sizeof(struct gb_power_supply));
          for(int _i0 = 0; _i0 < _len_gbpsy0; _i0++) {
              int _len_gbpsy__i0__supplies0 = 1;
          gbpsy[_i0].supplies = (struct TYPE_2__ *) malloc(_len_gbpsy__i0__supplies0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gbpsy__i0__supplies0; _j0++) {
              int _len_gbpsy__i0__supplies_connection0 = 1;
          gbpsy[_i0].supplies->connection = (struct gb_connection *) malloc(_len_gbpsy__i0__supplies_connection0*sizeof(struct gb_connection));
          for(int _j0 = 0; _j0 < _len_gbpsy__i0__supplies_connection0; _j0++) {
            gbpsy[_i0].supplies->connection->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct gb_connection * benchRet = get_conn_from_psy(gbpsy);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gbpsy0; _aux++) {
          free(gbpsy[_aux].supplies);
          }
          free(gbpsy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
