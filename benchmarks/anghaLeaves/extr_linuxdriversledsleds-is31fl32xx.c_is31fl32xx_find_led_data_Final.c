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
       0            empty\n\
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
typedef  scalar_t__ u8 ;
struct is31fl32xx_priv {size_t num_leds; struct is31fl32xx_led_data* leds; } ;
struct is31fl32xx_led_data {scalar_t__ channel; } ;

/* Variables and functions */

__attribute__((used)) static struct is31fl32xx_led_data *is31fl32xx_find_led_data(
					struct is31fl32xx_priv *priv,
					u8 channel)
{
	size_t i;

	for (i = 0; i < priv->num_leds; i++) {
		if (priv->leds[i].channel == channel)
			return &priv->leds[i];
	}

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          long channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_priv0 = 1;
          struct is31fl32xx_priv * priv = (struct is31fl32xx_priv *) malloc(_len_priv0*sizeof(struct is31fl32xx_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              priv[_i0].num_leds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__leds0 = 1;
          priv[_i0].leds = (struct is31fl32xx_led_data *) malloc(_len_priv__i0__leds0*sizeof(struct is31fl32xx_led_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__leds0; _j0++) {
              priv[_i0].leds->channel = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct is31fl32xx_led_data * benchRet = is31fl32xx_find_led_data(priv,channel);
          printf("%ld\n", (*benchRet).channel);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].leds);
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
