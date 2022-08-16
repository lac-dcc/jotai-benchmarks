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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  status; scalar_t__ latent; scalar_t__ front; scalar_t__ size; scalar_t__ cts; scalar_t__ dts; } ;
typedef  TYPE_1__ mpeg_bitstream_t ;

/* Variables and functions */
 int /*<<< orphan*/  LIBCAPTION_OK ; 

void mpeg_bitstream_init(mpeg_bitstream_t* packet)
{
    packet->dts = 0;
    packet->cts = 0;
    packet->size = 0;
    packet->front = 0;
    packet->latent = 0;
    packet->status = LIBCAPTION_OK;
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
          int _len_packet0 = 1;
          struct TYPE_3__ * packet = (struct TYPE_3__ *) malloc(_len_packet0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].latent = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].front = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].cts = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].dts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mpeg_bitstream_init(packet);
          free(packet);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
