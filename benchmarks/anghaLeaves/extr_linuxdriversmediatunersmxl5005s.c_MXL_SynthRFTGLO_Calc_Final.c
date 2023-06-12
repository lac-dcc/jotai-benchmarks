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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct mxl5005s_state {int Mode; int RF_LO; int RF_IN; int TG_LO; scalar_t__ IF_Mode; int Chan_Bandwidth; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;

/* Variables and functions */

__attribute__((used)) static void MXL_SynthRFTGLO_Calc(struct dvb_frontend *fe)
{
	struct mxl5005s_state *state = fe->tuner_priv;

	if (state->Mode == 1) /* Digital Mode */ {
			/* remove 20.48MHz setting for 2.6.10 */
			state->RF_LO = state->RF_IN;
			/* change for 2.6.6 */
			state->TG_LO = state->RF_IN - 750000;
	} else /* Analog Mode */ {
		if (state->IF_Mode == 0) /* Analog Zero IF mode */ {
			state->RF_LO = state->RF_IN - 400000;
			state->TG_LO = state->RF_IN - 1750000;
		} else /* Analog Low IF mode */ {
			state->RF_LO = state->RF_IN - state->Chan_Bandwidth/2;
			state->TG_LO = state->RF_IN -
				state->Chan_Bandwidth + 500000;
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              fe[_i0].tuner_priv->Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_IN = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->TG_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->IF_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->Chan_Bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          MXL_SynthRFTGLO_Calc(fe);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              fe[_i0].tuner_priv->Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_IN = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->TG_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->IF_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->Chan_Bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          MXL_SynthRFTGLO_Calc(fe);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5005s_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5005s_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
              fe[_i0].tuner_priv->Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->RF_IN = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->TG_LO = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->IF_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
          fe[_i0].tuner_priv->Chan_Bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          MXL_SynthRFTGLO_Calc(fe);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
