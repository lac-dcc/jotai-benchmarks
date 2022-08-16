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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct tas571x_private {TYPE_1__* chip; } ;
struct TYPE_2__ {int vol_reg_size; } ;

/* Variables and functions */
#define  TAS5717_CH1_LEFT_CH_MIX_REG 137 
#define  TAS5717_CH1_RIGHT_CH_MIX_REG 136 
#define  TAS5717_CH2_LEFT_CH_MIX_REG 135 
#define  TAS5717_CH2_RIGHT_CH_MIX_REG 134 
#define  TAS571X_CH1_VOL_REG 133 
#define  TAS571X_CH2_VOL_REG 132 
#define  TAS571X_CH4_SRC_SELECT_REG 131 
#define  TAS571X_INPUT_MUX_REG 130 
#define  TAS571X_MVOL_REG 129 
#define  TAS571X_PWM_MUX_REG 128 

__attribute__((used)) static int tas571x_register_size(struct tas571x_private *priv, unsigned int reg)
{
	switch (reg) {
	case TAS571X_MVOL_REG:
	case TAS571X_CH1_VOL_REG:
	case TAS571X_CH2_VOL_REG:
		return priv->chip->vol_reg_size;
	case TAS571X_INPUT_MUX_REG:
	case TAS571X_CH4_SRC_SELECT_REG:
	case TAS571X_PWM_MUX_REG:
	case TAS5717_CH1_RIGHT_CH_MIX_REG:
	case TAS5717_CH1_LEFT_CH_MIX_REG:
	case TAS5717_CH2_LEFT_CH_MIX_REG:
	case TAS5717_CH2_RIGHT_CH_MIX_REG:
		return 4;
	default:
		return 1;
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
          unsigned int reg = 100;
          int _len_priv0 = 1;
          struct tas571x_private * priv = (struct tas571x_private *) malloc(_len_priv0*sizeof(struct tas571x_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__chip0 = 1;
          priv[_i0].chip = (struct TYPE_2__ *) malloc(_len_priv__i0__chip0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__chip0; _j0++) {
            priv[_i0].chip->vol_reg_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tas571x_register_size(priv,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].chip);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
