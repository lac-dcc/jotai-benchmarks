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
typedef  int /*<<< orphan*/  u32 ;
struct tda10071_dev {int /*<<< orphan*/  dvbv3_ber; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;

/* Variables and functions */

__attribute__((used)) static int tda10071_read_ber(struct dvb_frontend *fe, u32 *ber)
{
	struct tda10071_dev *dev = fe->demodulator_priv;

	*ber = dev->dvbv3_ber;
	return 0;
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
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct tda10071_dev *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct tda10071_dev));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->dvbv3_ber = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ber0 = 65025;
          int * ber = (int *) malloc(_len_ber0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ber0; _i0++) {
            ber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tda10071_read_ber(fe,ber);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ber);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct tda10071_dev *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct tda10071_dev));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->dvbv3_ber = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ber0 = 100;
          int * ber = (int *) malloc(_len_ber0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ber0; _i0++) {
            ber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tda10071_read_ber(fe,ber);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ber);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct tda10071_dev *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct tda10071_dev));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->dvbv3_ber = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ber0 = 1;
          int * ber = (int *) malloc(_len_ber0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ber0; _i0++) {
            ber[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tda10071_read_ber(fe,ber);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ber);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
