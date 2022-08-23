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
struct gb_light {TYPE_1__* glights; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_connection* connection; } ;

/* Variables and functions */

__attribute__((used)) static struct gb_connection *get_conn_from_light(struct gb_light *light)
{
	return light->glights->connection;
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
          int _len_light0 = 1;
          struct gb_light * light = (struct gb_light *) malloc(_len_light0*sizeof(struct gb_light));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
              int _len_light__i0__glights0 = 1;
          light[_i0].glights = (struct TYPE_2__ *) malloc(_len_light__i0__glights0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_light__i0__glights0; _j0++) {
              int _len_light__i0__glights_connection0 = 1;
          light[_i0].glights->connection = (struct gb_connection *) malloc(_len_light__i0__glights_connection0*sizeof(struct gb_connection));
          for(int _j0 = 0; _j0 < _len_light__i0__glights_connection0; _j0++) {
            light[_i0].glights->connection->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct gb_connection * benchRet = get_conn_from_light(light);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_light0; _aux++) {
          free(light[_aux].glights);
          }
          free(light);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}