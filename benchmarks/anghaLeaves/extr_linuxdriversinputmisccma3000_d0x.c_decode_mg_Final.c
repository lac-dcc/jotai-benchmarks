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
struct cma3000_accl_data {int bit_to_mg; } ;
typedef  int s8 ;

/* Variables and functions */

__attribute__((used)) static void decode_mg(struct cma3000_accl_data *data, int *datax,
				int *datay, int *dataz)
{
	/* Data in 2's complement, convert to mg */
	*datax = ((s8)*datax) * data->bit_to_mg;
	*datay = ((s8)*datay) * data->bit_to_mg;
	*dataz = ((s8)*dataz) * data->bit_to_mg;
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
          int _len_data0 = 1;
          struct cma3000_accl_data * data = (struct cma3000_accl_data *) malloc(_len_data0*sizeof(struct cma3000_accl_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].bit_to_mg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_datax0 = 1;
          int * datax = (int *) malloc(_len_datax0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_datax0; _i0++) {
            datax[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_datay0 = 1;
          int * datay = (int *) malloc(_len_datay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_datay0; _i0++) {
            datay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dataz0 = 1;
          int * dataz = (int *) malloc(_len_dataz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dataz0; _i0++) {
            dataz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_mg(data,datax,datay,dataz);
          free(data);
          free(datax);
          free(datay);
          free(dataz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
