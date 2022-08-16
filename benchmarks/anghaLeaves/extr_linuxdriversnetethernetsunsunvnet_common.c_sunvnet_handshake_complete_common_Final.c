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
struct vio_driver_state {struct vio_dring_state* drings; } ;
struct vio_dring_state {int rcv_nxt; int snd_nxt; } ;

/* Variables and functions */
 size_t VIO_DRIVER_RX_RING ; 
 size_t VIO_DRIVER_TX_RING ; 

void sunvnet_handshake_complete_common(struct vio_driver_state *vio)
{
	struct vio_dring_state *dr;

	dr = &vio->drings[VIO_DRIVER_RX_RING];
	dr->rcv_nxt = 1;
	dr->snd_nxt = 1;

	dr = &vio->drings[VIO_DRIVER_TX_RING];
	dr->rcv_nxt = 1;
	dr->snd_nxt = 1;
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
          int _len_vio0 = 1;
          struct vio_driver_state * vio = (struct vio_driver_state *) malloc(_len_vio0*sizeof(struct vio_driver_state));
          for(int _i0 = 0; _i0 < _len_vio0; _i0++) {
              int _len_vio__i0__drings0 = 1;
          vio[_i0].drings = (struct vio_dring_state *) malloc(_len_vio__i0__drings0*sizeof(struct vio_dring_state));
          for(int _j0 = 0; _j0 < _len_vio__i0__drings0; _j0++) {
            vio[_i0].drings->rcv_nxt = ((-2 * (next_i()%2)) + 1) * next_i();
        vio[_i0].drings->snd_nxt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sunvnet_handshake_complete_common(vio);
          for(int _aux = 0; _aux < _len_vio0; _aux++) {
          free(vio[_aux].drings);
          }
          free(vio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
