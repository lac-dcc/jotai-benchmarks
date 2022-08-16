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
struct safexcel_desc_ring {scalar_t__ write; scalar_t__ read; scalar_t__ base; scalar_t__ base_end; scalar_t__ offset; } ;
struct safexcel_crypto_priv {int dummy; } ;

/* Variables and functions */

void safexcel_ring_rollback_wptr(struct safexcel_crypto_priv *priv,
				 struct safexcel_desc_ring *ring)
{
	if (ring->write == ring->read)
		return;

	if (ring->write == ring->base)
		ring->write = ring->base_end;
	else
		ring->write -= ring->offset;
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
          int _len_priv0 = 1;
          struct safexcel_crypto_priv * priv = (struct safexcel_crypto_priv *) malloc(_len_priv0*sizeof(struct safexcel_crypto_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 1;
          struct safexcel_desc_ring * ring = (struct safexcel_desc_ring *) malloc(_len_ring0*sizeof(struct safexcel_desc_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].read = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].base_end = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          safexcel_ring_rollback_wptr(priv,ring);
          free(priv);
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
