// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int uint16_t ;
struct rtwn_softc {int dummy; } ;

/* Variables and functions */
 scalar_t__ RTWN_IQ_CAL_MAX_TOLERANCE ; 

__attribute__((used)) static int
r88e_iq_calib_compare_results(struct rtwn_softc *sc, uint16_t tx1[2],
    uint16_t rx1[2], uint16_t tx2[2], uint16_t rx2[2])
{
	int i, tx_ok, rx_ok;

	tx_ok = rx_ok = 0;
	for (i = 0; i < 2; i++)	{
		if (tx1[i] == 0xff || tx2[i] == 0xff ||
		    rx1[i] == 0xff || rx2[i] == 0xff)
			continue;

		tx_ok = (abs(tx1[i] - tx2[i]) <= RTWN_IQ_CAL_MAX_TOLERANCE);
		rx_ok = (abs(rx1[i] - rx2[i]) <= RTWN_IQ_CAL_MAX_TOLERANCE);
	}

	return (tx_ok && rx_ok);
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
          int _len_sc0 = 1;
          struct rtwn_softc * sc = (struct rtwn_softc *) malloc(_len_sc0*sizeof(struct rtwn_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx10 = 2;
          int * tx1 = (int *) malloc(_len_tx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx10; _i0++) {
            tx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx10 = 2;
          int * rx1 = (int *) malloc(_len_rx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx10; _i0++) {
            rx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx20 = 2;
          int * tx2 = (int *) malloc(_len_tx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx20; _i0++) {
            tx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx20 = 2;
          int * rx2 = (int *) malloc(_len_rx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx20; _i0++) {
            rx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r88e_iq_calib_compare_results(sc,tx1,rx1,tx2,rx2);
          printf("%d\n", benchRet); 
          free(sc);
          free(tx1);
          free(rx1);
          free(tx2);
          free(rx2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sc0 = 65025;
          struct rtwn_softc * sc = (struct rtwn_softc *) malloc(_len_sc0*sizeof(struct rtwn_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx10 = 2;
          int * tx1 = (int *) malloc(_len_tx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx10; _i0++) {
            tx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx10 = 2;
          int * rx1 = (int *) malloc(_len_rx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx10; _i0++) {
            rx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx20 = 2;
          int * tx2 = (int *) malloc(_len_tx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx20; _i0++) {
            tx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx20 = 2;
          int * rx2 = (int *) malloc(_len_rx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx20; _i0++) {
            rx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r88e_iq_calib_compare_results(sc,tx1,rx1,tx2,rx2);
          printf("%d\n", benchRet); 
          free(sc);
          free(tx1);
          free(rx1);
          free(tx2);
          free(rx2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sc0 = 100;
          struct rtwn_softc * sc = (struct rtwn_softc *) malloc(_len_sc0*sizeof(struct rtwn_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx10 = 2;
          int * tx1 = (int *) malloc(_len_tx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx10; _i0++) {
            tx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx10 = 2;
          int * rx1 = (int *) malloc(_len_rx10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx10; _i0++) {
            rx1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx20 = 2;
          int * tx2 = (int *) malloc(_len_tx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx20; _i0++) {
            tx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx20 = 2;
          int * rx2 = (int *) malloc(_len_rx20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx20; _i0++) {
            rx2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r88e_iq_calib_compare_results(sc,tx1,rx1,tx2,rx2);
          printf("%d\n", benchRet); 
          free(sc);
          free(tx1);
          free(rx1);
          free(tx2);
          free(rx2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
