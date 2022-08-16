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
struct ddc_service {struct ddc* ddc_pin; } ;
struct ddc {int dummy; } ;

/* Variables and functions */

struct ddc *dal_ddc_service_get_ddc_pin(struct ddc_service *ddc_service)
{
	return ddc_service->ddc_pin;
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
          int _len_ddc_service0 = 1;
          struct ddc_service * ddc_service = (struct ddc_service *) malloc(_len_ddc_service0*sizeof(struct ddc_service));
          for(int _i0 = 0; _i0 < _len_ddc_service0; _i0++) {
              int _len_ddc_service__i0__ddc_pin0 = 1;
          ddc_service[_i0].ddc_pin = (struct ddc *) malloc(_len_ddc_service__i0__ddc_pin0*sizeof(struct ddc));
          for(int _j0 = 0; _j0 < _len_ddc_service__i0__ddc_pin0; _j0++) {
            ddc_service[_i0].ddc_pin->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ddc * benchRet = dal_ddc_service_get_ddc_pin(ddc_service);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ddc_service0; _aux++) {
          free(ddc_service[_aux].ddc_pin);
          }
          free(ddc_service);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
