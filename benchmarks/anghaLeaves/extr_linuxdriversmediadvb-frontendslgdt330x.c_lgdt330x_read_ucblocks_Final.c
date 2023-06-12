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
struct lgdt330x_state {int /*<<< orphan*/  ucblocks; } ;
struct dvb_frontend {struct lgdt330x_state* demodulator_priv; } ;

/* Variables and functions */

__attribute__((used)) static int lgdt330x_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
{
	struct lgdt330x_state *state = fe->demodulator_priv;

	*ucblocks = state->ucblocks;

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
          fe[_i0].demodulator_priv = (struct lgdt330x_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct lgdt330x_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->ucblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ucblocks0 = 65025;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = lgdt330x_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ucblocks);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct lgdt330x_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct lgdt330x_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->ucblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ucblocks0 = 100;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = lgdt330x_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ucblocks);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__demodulator_priv0 = 1;
          fe[_i0].demodulator_priv = (struct lgdt330x_state *) malloc(_len_fe__i0__demodulator_priv0*sizeof(struct lgdt330x_state));
          for(int _j0 = 0; _j0 < _len_fe__i0__demodulator_priv0; _j0++) {
              fe[_i0].demodulator_priv->ucblocks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_ucblocks0 = 1;
          int * ucblocks = (int *) malloc(_len_ucblocks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ucblocks0; _i0++) {
            ucblocks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = lgdt330x_read_ucblocks(fe,ucblocks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].demodulator_priv);
          }
          free(fe);
          free(ucblocks);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
