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
struct fpga_bridge {struct altera_freeze_br_data* priv; } ;
struct altera_freeze_br_data {int enable; } ;

/* Variables and functions */

__attribute__((used)) static int altera_freeze_br_enable_show(struct fpga_bridge *bridge)
{
	struct altera_freeze_br_data *priv = bridge->priv;

	return priv->enable;
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
          int _len_bridge0 = 1;
          struct fpga_bridge * bridge = (struct fpga_bridge *) malloc(_len_bridge0*sizeof(struct fpga_bridge));
          for(int _i0 = 0; _i0 < _len_bridge0; _i0++) {
              int _len_bridge__i0__priv0 = 1;
          bridge[_i0].priv = (struct altera_freeze_br_data *) malloc(_len_bridge__i0__priv0*sizeof(struct altera_freeze_br_data));
          for(int _j0 = 0; _j0 < _len_bridge__i0__priv0; _j0++) {
            bridge[_i0].priv->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = altera_freeze_br_enable_show(bridge);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bridge0; _aux++) {
          free(bridge[_aux].priv);
          }
          free(bridge);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
