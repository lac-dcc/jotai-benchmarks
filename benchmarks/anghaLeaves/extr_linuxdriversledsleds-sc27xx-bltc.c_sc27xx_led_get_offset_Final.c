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
typedef  scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ base; } ;

/* Variables and functions */
 int SC27XX_LEDS_OFFSET ; 

__attribute__((used)) static u32 sc27xx_led_get_offset(struct sc27xx_led *leds)
{
	return leds->priv->base + SC27XX_LEDS_OFFSET * leds->line;
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
          int _len_leds0 = 1;
          struct sc27xx_led * leds = (struct sc27xx_led *) malloc(_len_leds0*sizeof(struct sc27xx_led));
          for(int _i0 = 0; _i0 < _len_leds0; _i0++) {
            leds[_i0].line = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_leds__i0__priv0 = 1;
          leds[_i0].priv = (struct TYPE_2__ *) malloc(_len_leds__i0__priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_leds__i0__priv0; _j0++) {
            leds[_i0].priv->base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = sc27xx_led_get_offset(leds);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_leds0; _aux++) {
          free(leds[_aux].priv);
          }
          free(leds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
