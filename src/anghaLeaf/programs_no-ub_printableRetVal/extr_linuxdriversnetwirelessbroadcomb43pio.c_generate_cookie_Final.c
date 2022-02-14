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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u16 ;
struct b43_pio_txqueue {scalar_t__ index; } ;
struct b43_pio_txpacket {int index; } ;

/* Variables and functions */

__attribute__((used)) static u16 generate_cookie(struct b43_pio_txqueue *q,
			   struct b43_pio_txpacket *pack)
{
	u16 cookie;

	/* Use the upper 4 bits of the cookie as
	 * PIO controller ID and store the packet index number
	 * in the lower 12 bits.
	 * Note that the cookie must never be 0, as this
	 * is a special value used in RX path.
	 * It can also not be 0xFFFF because that is special
	 * for multicast frames.
	 */
	cookie = (((u16)q->index + 1) << 12);
	cookie |= pack->index;

	return cookie;
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

    // big-arr
    case 0:
    {
          int _len_q0 = 1;
          struct b43_pio_txqueue * q = (struct b43_pio_txqueue *) malloc(_len_q0*sizeof(struct b43_pio_txqueue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pack0 = 1;
          struct b43_pio_txpacket * pack = (struct b43_pio_txpacket *) malloc(_len_pack0*sizeof(struct b43_pio_txpacket));
          for(int _i0 = 0; _i0 < _len_pack0; _i0++) {
            pack->index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = generate_cookie(q,pack);
          printf("%d\n", benchRet); 
          free(q);
          free(pack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
