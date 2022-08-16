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
struct cmac {TYPE_1__* instance; } ;
struct TYPE_2__ {int fc; } ;

/* Variables and functions */
 int DUPLEX_FULL ; 
 int SPEED_10000 ; 

__attribute__((used)) static int pm3393_get_speed_duplex_fc(struct cmac *cmac, int *speed,
				      int *duplex, int *fc)
{
	if (speed)
		*speed = SPEED_10000;
	if (duplex)
		*duplex = DUPLEX_FULL;
	if (fc)
		*fc = cmac->instance->fc;
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
          int _len_cmac0 = 1;
          struct cmac * cmac = (struct cmac *) malloc(_len_cmac0*sizeof(struct cmac));
          for(int _i0 = 0; _i0 < _len_cmac0; _i0++) {
              int _len_cmac__i0__instance0 = 1;
          cmac[_i0].instance = (struct TYPE_2__ *) malloc(_len_cmac__i0__instance0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmac__i0__instance0; _j0++) {
            cmac[_i0].instance->fc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_speed0 = 1;
          int * speed = (int *) malloc(_len_speed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_speed0; _i0++) {
            speed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_duplex0 = 1;
          int * duplex = (int *) malloc(_len_duplex0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_duplex0; _i0++) {
            duplex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fc0 = 1;
          int * fc = (int *) malloc(_len_fc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
            fc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pm3393_get_speed_duplex_fc(cmac,speed,duplex,fc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmac0; _aux++) {
          free(cmac[_aux].instance);
          }
          free(cmac);
          free(speed);
          free(duplex);
          free(fc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
