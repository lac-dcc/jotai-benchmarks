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
typedef  int s32 ;
typedef  enum fe_stv0900_search_algo { ____Placeholder_fe_stv0900_search_algo } fe_stv0900_search_algo ;

/* Variables and functions */
#define  STV0900_BLIND_SEARCH 130 
#define  STV0900_COLD_START 129 
#define  STV0900_WARM_START 128 

__attribute__((used)) static void stv0900_get_lock_timeout(s32 *demod_timeout, s32 *fec_timeout,
					s32 srate,
					enum fe_stv0900_search_algo algo)
{
	switch (algo) {
	case STV0900_BLIND_SEARCH:
		if (srate <= 1500000) {
			(*demod_timeout) = 1500;
			(*fec_timeout) = 400;
		} else if (srate <= 5000000) {
			(*demod_timeout) = 1000;
			(*fec_timeout) = 300;
		} else {
			(*demod_timeout) = 700;
			(*fec_timeout) = 100;
		}

		break;
	case STV0900_COLD_START:
	case STV0900_WARM_START:
	default:
		if (srate <= 1000000) {
			(*demod_timeout) = 3000;
			(*fec_timeout) = 1700;
		} else if (srate <= 2000000) {
			(*demod_timeout) = 2500;
			(*fec_timeout) = 1100;
		} else if (srate <= 5000000) {
			(*demod_timeout) = 1000;
			(*fec_timeout) = 550;
		} else if (srate <= 10000000) {
			(*demod_timeout) = 700;
			(*fec_timeout) = 250;
		} else if (srate <= 20000000) {
			(*demod_timeout) = 400;
			(*fec_timeout) = 130;
		} else {
			(*demod_timeout) = 300;
			(*fec_timeout) = 100;
		}

		break;

	}

	if (algo == STV0900_WARM_START)
		(*demod_timeout) /= 2;
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
          int srate = 100;
          enum fe_stv0900_search_algo algo = 0;
          int _len_demod_timeout0 = 1;
          int * demod_timeout = (int *) malloc(_len_demod_timeout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_demod_timeout0; _i0++) {
            demod_timeout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fec_timeout0 = 1;
          int * fec_timeout = (int *) malloc(_len_fec_timeout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fec_timeout0; _i0++) {
            fec_timeout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stv0900_get_lock_timeout(demod_timeout,fec_timeout,srate,algo);
          free(demod_timeout);
          free(fec_timeout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
