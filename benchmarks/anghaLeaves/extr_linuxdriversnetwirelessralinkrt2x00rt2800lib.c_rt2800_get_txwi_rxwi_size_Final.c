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
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;

/* Variables and functions */
#define  RT3593 130 
#define  RT5592 129 
#define  RT6352 128 
 unsigned short RXWI_DESC_SIZE_4WORDS ; 
 unsigned short RXWI_DESC_SIZE_5WORDS ; 
 unsigned short RXWI_DESC_SIZE_6WORDS ; 
 unsigned short TXWI_DESC_SIZE_4WORDS ; 
 unsigned short TXWI_DESC_SIZE_5WORDS ; 

void rt2800_get_txwi_rxwi_size(struct rt2x00_dev *rt2x00dev,
			       unsigned short *txwi_size,
			       unsigned short *rxwi_size)
{
	switch (rt2x00dev->chip.rt) {
	case RT3593:
		*txwi_size = TXWI_DESC_SIZE_4WORDS;
		*rxwi_size = RXWI_DESC_SIZE_5WORDS;
		break;

	case RT5592:
	case RT6352:
		*txwi_size = TXWI_DESC_SIZE_5WORDS;
		*rxwi_size = RXWI_DESC_SIZE_6WORDS;
		break;

	default:
		*txwi_size = TXWI_DESC_SIZE_4WORDS;
		*rxwi_size = RXWI_DESC_SIZE_4WORDS;
		break;
	}
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
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
            rt2x00dev[_i0].chip.rt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_txwi_size0 = 1;
          unsigned short * txwi_size = (unsigned short *) malloc(_len_txwi_size0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_txwi_size0; _i0++) {
            txwi_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxwi_size0 = 1;
          unsigned short * rxwi_size = (unsigned short *) malloc(_len_rxwi_size0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_rxwi_size0; _i0++) {
            rxwi_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rt2800_get_txwi_rxwi_size(rt2x00dev,txwi_size,rxwi_size);
          free(rt2x00dev);
          free(txwi_size);
          free(rxwi_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
