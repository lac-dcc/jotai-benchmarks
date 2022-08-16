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
struct dvb_frontend {struct au8522_state* demodulator_priv; } ;
struct dtv_frontend_properties {int /*<<< orphan*/  modulation; int /*<<< orphan*/  frequency; } ;
struct au8522_state {int /*<<< orphan*/  current_modulation; int /*<<< orphan*/  current_frequency; } ;

/* Variables and functions */

__attribute__((used)) static int au8522_get_frontend(struct dvb_frontend *fe,
			       struct dtv_frontend_properties *c)
{
	struct au8522_state *state = fe->demodulator_priv;

	c->frequency = state->current_frequency;
	c->modulation = state->current_modulation;

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
          fe[_i0].demodulator_priv = (struct au8522_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct au8522_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
            fe[_i0].demodulator_priv->current_modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        fe[_i0].demodulator_priv->current_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_c0 = 1;
          struct dtv_frontend_properties * c = (struct dtv_frontend_properties *) malloc(_len_c0*sizeof(struct dtv_frontend_properties));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = au8522_get_frontend(fe,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
