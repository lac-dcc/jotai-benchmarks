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
typedef  int u8 ;
struct tuner_simple_priv {int type; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;

/* Variables and functions */
#define  TUNER_PHILIPS_FCV1236D 129 
#define  TUNER_PHILIPS_TUV1236D 128 

__attribute__((used)) static void simple_set_rf_input(struct dvb_frontend *fe,
				u8 *config, u8 *cb, unsigned int rf)
{
	struct tuner_simple_priv *priv = fe->tuner_priv;

	switch (priv->type) {
	case TUNER_PHILIPS_TUV1236D:
		switch (rf) {
		case 1:
			*cb |= 0x08;
			break;
		default:
			*cb &= ~0x08;
			break;
		}
		break;
	case TUNER_PHILIPS_FCV1236D:
		switch (rf) {
		case 1:
			*cb |= 0x01;
			break;
		default:
			*cb &= ~0x01;
			break;
		}
		break;
	default:
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
          unsigned int rf = 100;
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct tuner_simple_priv *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct tuner_simple_priv));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_config0 = 1;
          int * config = (int *) malloc(_len_config0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb0 = 1;
          int * cb = (int *) malloc(_len_cb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          simple_set_rf_input(fe,config,cb,rf);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(config);
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
