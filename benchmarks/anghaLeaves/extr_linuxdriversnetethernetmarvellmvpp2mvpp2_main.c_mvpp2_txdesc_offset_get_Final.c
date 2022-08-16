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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {unsigned int packet_offset; } ;
struct TYPE_5__ {unsigned int packet_offset; } ;
struct mvpp2_tx_desc {TYPE_3__ pp22; TYPE_2__ pp21; } ;
struct mvpp2_port {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ hw_version; } ;

/* Variables and functions */
 scalar_t__ MVPP21 ; 

__attribute__((used)) static unsigned int mvpp2_txdesc_offset_get(struct mvpp2_port *port,
					    struct mvpp2_tx_desc *tx_desc)
{
	if (port->priv->hw_version == MVPP21)
		return tx_desc->pp21.packet_offset;
	else
		return tx_desc->pp22.packet_offset;
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
          int _len_port0 = 1;
          struct mvpp2_port * port = (struct mvpp2_port *) malloc(_len_port0*sizeof(struct mvpp2_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
              int _len_port__i0__priv0 = 1;
          port[_i0].priv = (struct TYPE_4__ *) malloc(_len_port__i0__priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_port__i0__priv0; _j0++) {
            port[_i0].priv->hw_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tx_desc0 = 1;
          struct mvpp2_tx_desc * tx_desc = (struct mvpp2_tx_desc *) malloc(_len_tx_desc0*sizeof(struct mvpp2_tx_desc));
          for(int _i0 = 0; _i0 < _len_tx_desc0; _i0++) {
            tx_desc[_i0].pp22.packet_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_desc[_i0].pp21.packet_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mvpp2_txdesc_offset_get(port,tx_desc);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].priv);
          }
          free(port);
          free(tx_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
