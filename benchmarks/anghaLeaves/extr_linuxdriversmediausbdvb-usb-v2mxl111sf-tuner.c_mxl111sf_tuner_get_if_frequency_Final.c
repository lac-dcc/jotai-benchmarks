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
struct mxl111sf_tuner_state {int if_freq; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; } ;

/* Variables and functions */
#define  MXL_IF_35_25 139 
#define  MXL_IF_36 138 
#define  MXL_IF_36_15 137 
#define  MXL_IF_44 136 
#define  MXL_IF_4_0 135 
#define  MXL_IF_4_5 134 
#define  MXL_IF_4_57 133 
#define  MXL_IF_5_0 132 
#define  MXL_IF_5_38 131 
#define  MXL_IF_6_0 130 
#define  MXL_IF_6_28 129 
#define  MXL_IF_7_2 128 

__attribute__((used)) static int mxl111sf_tuner_get_if_frequency(struct dvb_frontend *fe,
					   u32 *frequency)
{
	struct mxl111sf_tuner_state *state = fe->tuner_priv;

	*frequency = 0;

	switch (state->if_freq) {
	case MXL_IF_4_0:   /* 4.0   MHz */
		*frequency = 4000000;
		break;
	case MXL_IF_4_5:   /* 4.5   MHz */
		*frequency = 4500000;
		break;
	case MXL_IF_4_57:  /* 4.57  MHz */
		*frequency = 4570000;
		break;
	case MXL_IF_5_0:   /* 5.0   MHz */
		*frequency = 5000000;
		break;
	case MXL_IF_5_38:  /* 5.38  MHz */
		*frequency = 5380000;
		break;
	case MXL_IF_6_0:   /* 6.0   MHz */
		*frequency = 6000000;
		break;
	case MXL_IF_6_28:  /* 6.28  MHz */
		*frequency = 6280000;
		break;
	case MXL_IF_7_2:   /* 7.2   MHz */
		*frequency = 7200000;
		break;
	case MXL_IF_35_25: /* 35.25 MHz */
		*frequency = 35250000;
		break;
	case MXL_IF_36:    /* 36    MHz */
		*frequency = 36000000;
		break;
	case MXL_IF_36_15: /* 36.15 MHz */
		*frequency = 36150000;
		break;
	case MXL_IF_44:    /* 44    MHz */
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
          fe[_i0].tuner_priv = (struct mxl111sf_tuner_state *) malloc(_len_fe__i0__tuner_priv0*sizeof(struct mxl111sf_tuner_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__tuner_priv0; _j0++) {
            fe[_i0].tuner_priv->if_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frequency0 = 1;
          int * frequency = (int *) malloc(_len_frequency0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frequency0; _i0++) {
            frequency[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mxl111sf_tuner_get_if_frequency(fe,frequency);
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
