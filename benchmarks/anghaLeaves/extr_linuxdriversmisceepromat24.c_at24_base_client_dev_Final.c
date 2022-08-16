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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct device {int dummy; } ;
struct at24_data {TYPE_2__* client; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct device dev; } ;

/* Variables and functions */

__attribute__((used)) static struct device *at24_base_client_dev(struct at24_data *at24)
{
	return &at24->client[0].client->dev;
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
          int _len_at240 = 1;
          struct at24_data * at24 = (struct at24_data *) malloc(_len_at240*sizeof(struct at24_data));
          for(int _i0 = 0; _i0 < _len_at240; _i0++) {
              int _len_at24__i0__client0 = 1;
          at24[_i0].client = (struct TYPE_4__ *) malloc(_len_at24__i0__client0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_at24__i0__client0; _j0++) {
              int _len_at24__i0__client_client0 = 1;
          at24[_i0].client->client = (struct TYPE_3__ *) malloc(_len_at24__i0__client_client0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_at24__i0__client_client0; _j0++) {
            at24[_i0].client->client->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct device * benchRet = at24_base_client_dev(at24);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_at240; _aux++) {
          free(at24[_aux].client);
          }
          free(at24);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
