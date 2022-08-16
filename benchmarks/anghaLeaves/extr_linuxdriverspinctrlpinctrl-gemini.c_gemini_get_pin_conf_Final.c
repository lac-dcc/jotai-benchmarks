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
struct gemini_pmx {int nconfs; struct gemini_pin_conf* confs; } ;
struct gemini_pin_conf {unsigned int pin; } ;

/* Variables and functions */

__attribute__((used)) static const struct gemini_pin_conf *gemini_get_pin_conf(struct gemini_pmx *pmx,
							 unsigned int pin)
{
	const struct gemini_pin_conf *retconf;
	int i;

	for (i = 0; i < pmx->nconfs; i++) {
		retconf = &pmx->confs[i];
		if (retconf->pin == pin)
			return retconf;
	}
	return NULL;
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
          unsigned int pin = 100;
          int _len_pmx0 = 1;
          struct gemini_pmx * pmx = (struct gemini_pmx *) malloc(_len_pmx0*sizeof(struct gemini_pmx));
          for(int _i0 = 0; _i0 < _len_pmx0; _i0++) {
            pmx[_i0].nconfs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__confs0 = 1;
          pmx[_i0].confs = (struct gemini_pin_conf *) malloc(_len_pmx__i0__confs0*sizeof(struct gemini_pin_conf));
          for(int _j0 = 0; _j0 < _len_pmx__i0__confs0; _j0++) {
            pmx[_i0].confs->pin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct gemini_pin_conf * benchRet = gemini_get_pin_conf(pmx,pin);
          for(int _aux = 0; _aux < _len_pmx0; _aux++) {
          free(pmx[_aux].confs);
          }
          free(pmx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
