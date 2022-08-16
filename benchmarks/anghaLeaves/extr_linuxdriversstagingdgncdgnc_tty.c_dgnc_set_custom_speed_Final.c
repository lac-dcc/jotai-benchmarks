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
typedef  int uint ;
struct channel_t {int ch_custom_speed; TYPE_1__* ch_bd; } ;
struct TYPE_2__ {int bd_dividend; } ;

/* Variables and functions */

__attribute__((used)) static void dgnc_set_custom_speed(struct channel_t *ch, uint newrate)
{
	int testdiv;
	int testrate_high;
	int testrate_low;
	int deltahigh;
	int deltalow;

	if (newrate <= 0) {
		ch->ch_custom_speed = 0;
		return;
	}

	/*
	 *  Since the divisor is stored in a 16-bit integer, we make sure
	 *  we don't allow any rates smaller than a 16-bit integer would allow.
	 *  And of course, rates above the dividend won't fly.
	 */
	if (newrate && newrate < ((ch->ch_bd->bd_dividend / 0xFFFF) + 1))
		newrate = (ch->ch_bd->bd_dividend / 0xFFFF) + 1;

	if (newrate && newrate > ch->ch_bd->bd_dividend)
		newrate = ch->ch_bd->bd_dividend;

	if (newrate > 0) {
		testdiv = ch->ch_bd->bd_dividend / newrate;

		/*
		 *  If we try to figure out what rate the board would use
		 *  with the test divisor, it will be either equal or higher
		 *  than the requested baud rate.  If we then determine the
		 *  rate with a divisor one higher, we will get the next lower
		 *  supported rate below the requested.
		 */
		testrate_high = ch->ch_bd->bd_dividend / testdiv;
		testrate_low  = ch->ch_bd->bd_dividend / (testdiv + 1);

		/*
		 *  If the rate for the requested divisor is correct, just
		 *  use it and be done.
		 */
		if (testrate_high != newrate) {
			/*
			 *  Otherwise, pick the rate that is closer
			 *  (i.e. whichever rate has a smaller delta).
			 */
			deltahigh = testrate_high - newrate;
			deltalow = newrate - testrate_low;

			if (deltahigh < deltalow)
				newrate = testrate_high;
			else
				newrate = testrate_low;
		}
	}

	ch->ch_custom_speed = newrate;
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
          int newrate = 100;
          int _len_ch0 = 1;
          struct channel_t * ch = (struct channel_t *) malloc(_len_ch0*sizeof(struct channel_t));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].ch_custom_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ch__i0__ch_bd0 = 1;
          ch[_i0].ch_bd = (struct TYPE_2__ *) malloc(_len_ch__i0__ch_bd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ch__i0__ch_bd0; _j0++) {
            ch[_i0].ch_bd->bd_dividend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dgnc_set_custom_speed(ch,newrate);
          for(int _aux = 0; _aux < _len_ch0; _aux++) {
          free(ch[_aux].ch_bd);
          }
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
