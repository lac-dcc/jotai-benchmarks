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
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int diseq_flags; scalar_t__ decode_lock; } ;
typedef  enum fe_status { ____Placeholder_fe_status } fe_status ;

/* Variables and functions */
 int FE_HAS_CARRIER ; 
 int FE_HAS_LOCK ; 
 int FE_HAS_SIGNAL ; 
 int FE_HAS_SYNC ; 
 int FE_HAS_VITERBI ; 
 int HAS_LOCK ; 

__attribute__((used)) static int dst_read_status(struct dvb_frontend *fe, enum fe_status *status)
{
	struct dst_state *state = fe->demodulator_priv;

	*status = 0;
	if (state->diseq_flags & HAS_LOCK) {
//		dst_get_signal(state);	// don't require(?) to ask MCU
		if (state->decode_lock)
			*status |= FE_HAS_LOCK | FE_HAS_SIGNAL | FE_HAS_CARRIER | FE_HAS_SYNC | FE_HAS_VITERBI;
	}

	return 0;
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
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct dst_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct dst_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
            fe[_i0].demodulator_priv->diseq_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].demodulator_priv->decode_lock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_status0 = 1;
          enum fe_status * status = (enum fe_status *) malloc(_len_status0*sizeof(enum fe_status));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = 0;
          }
          int benchRet = dst_read_status(fe,status);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
