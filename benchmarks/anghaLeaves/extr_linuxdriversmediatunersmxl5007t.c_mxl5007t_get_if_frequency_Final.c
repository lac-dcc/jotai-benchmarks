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
typedef  int u32 ;
struct mxl5007t_state {int if_freq; } ;
struct dvb_frontend {struct mxl5007t_state* tuner_priv; } ;

/* Variables and functions */
#define  MxL_IF_35_25_MHZ 138 
#define  MxL_IF_36_15_MHZ 137 
#define  MxL_IF_44_MHZ 136 
#define  MxL_IF_4_57_MHZ 135 
#define  MxL_IF_4_5_MHZ 134 
#define  MxL_IF_4_MHZ 133 
#define  MxL_IF_5_38_MHZ 132 
#define  MxL_IF_5_MHZ 131 
#define  MxL_IF_6_28_MHZ 130 
#define  MxL_IF_6_MHZ 129 
#define  MxL_IF_9_1915_MHZ 128 

__attribute__((used)) static int mxl5007t_get_if_frequency(struct dvb_frontend *fe, u32 *frequency)
{
	struct mxl5007t_state *state = fe->tuner_priv;

	*frequency = 0;

	switch (state->if_freq) {
	case MxL_IF_4_MHZ:
		*frequency = 4000000;
		break;
	case MxL_IF_4_5_MHZ:
		*frequency = 4500000;
		break;
	case MxL_IF_4_57_MHZ:
		*frequency = 4570000;
		break;
	case MxL_IF_5_MHZ:
		*frequency = 5000000;
		break;
	case MxL_IF_5_38_MHZ:
		*frequency = 5380000;
		break;
	case MxL_IF_6_MHZ:
		*frequency = 6000000;
		break;
	case MxL_IF_6_28_MHZ:
		*frequency = 6280000;
		break;
	case MxL_IF_9_1915_MHZ:
		*frequency = 9191500;
		break;
	case MxL_IF_35_25_MHZ:
		*frequency = 35250000;
		break;
	case MxL_IF_36_15_MHZ:
		*frequency = 36150000;
		break;
	case MxL_IF_44_MHZ:
		*frequency = 44000000;
		break;
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
              int _len_fe__i0__tuner_priv0 = 1;
          fe[_i0].tuner_priv = (struct mxl5007t_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl5007t_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->if_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frequency0 = 1;
          int * frequency = (int *) malloc(_len_frequency0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frequency0; _i0++) {
            frequency[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mxl5007t_get_if_frequency(fe,frequency);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].tuner_priv);
          }
          free(fe);
          free(frequency);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
