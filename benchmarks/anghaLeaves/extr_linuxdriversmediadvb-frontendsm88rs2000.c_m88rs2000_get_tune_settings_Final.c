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
struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct dtv_frontend_properties {int symbol_rate; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;

/* Variables and functions */

__attribute__((used)) static int m88rs2000_get_tune_settings(struct dvb_frontend *fe,
	struct dvb_frontend_tune_settings *tune)
{
	struct dtv_frontend_properties *c = &fe->dtv_property_cache;

	if (c->symbol_rate > 3000000)
		tune->min_delay_ms = 2000;
	else
		tune->min_delay_ms = 3000;

	tune->step_size = c->symbol_rate / 16000;
	tune->max_drift = c->symbol_rate / 2000;

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
            fe[_i0].dtv_property_cache.symbol_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tune0 = 1;
          struct dvb_frontend_tune_settings * tune = (struct dvb_frontend_tune_settings *) malloc(_len_tune0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_tune0; _i0++) {
            tune[_i0].min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
        tune[_i0].step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        tune[_i0].max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = m88rs2000_get_tune_settings(fe,tune);
          printf("%d\n", benchRet); 
          free(fe);
          free(tune);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
