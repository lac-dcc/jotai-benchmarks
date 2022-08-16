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
struct qup_i2c_block {int send_last_word; int tx_tags_sent; int rx_tags_fetched; int rx_bytes_read; scalar_t__ fifo_available; scalar_t__ rx_fifo_data_pos; scalar_t__ rx_fifo_data; scalar_t__ tx_fifo_free; scalar_t__ tx_fifo_data_pos; scalar_t__ tx_fifo_data; } ;

/* Variables and functions */

__attribute__((used)) static void qup_i2c_clear_blk_v2(struct qup_i2c_block *blk)
{
	blk->send_last_word = false;
	blk->tx_tags_sent = false;
	blk->tx_fifo_data = 0;
	blk->tx_fifo_data_pos = 0;
	blk->tx_fifo_free = 0;

	blk->rx_tags_fetched = false;
	blk->rx_bytes_read = false;
	blk->rx_fifo_data = 0;
	blk->rx_fifo_data_pos = 0;
	blk->fifo_available = 0;
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
          int _len_blk0 = 1;
          struct qup_i2c_block * blk = (struct qup_i2c_block *) malloc(_len_blk0*sizeof(struct qup_i2c_block));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0].send_last_word = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].tx_tags_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].rx_tags_fetched = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].rx_bytes_read = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].fifo_available = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].rx_fifo_data_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].rx_fifo_data = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].tx_fifo_free = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].tx_fifo_data_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        blk[_i0].tx_fifo_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qup_i2c_clear_blk_v2(blk);
          free(blk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
