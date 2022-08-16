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
struct hmc5843_data {TYPE_1__* variant; } ;
struct TYPE_2__ {int n_regval_to_samp_freq; int** regval_to_samp_freq; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int hmc5843_get_samp_freq_index(struct hmc5843_data *data,
				       int val, int val2)
{
	int i;

	for (i = 0; i < data->variant->n_regval_to_samp_freq; i++)
		if (val == data->variant->regval_to_samp_freq[i][0] &&
		    val2 == data->variant->regval_to_samp_freq[i][1])
			return i;

	return -EINVAL;
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
          int val = 100;
          int val2 = 100;
          int _len_data0 = 1;
          struct hmc5843_data * data = (struct hmc5843_data *) malloc(_len_data0*sizeof(struct hmc5843_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
              int _len_data__i0__variant0 = 1;
          data[_i0].variant = (struct TYPE_2__ *) malloc(_len_data__i0__variant0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_data__i0__variant0; _j0++) {
            data[_i0].variant->n_regval_to_samp_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__variant_regval_to_samp_freq0 = 1;
          data[_i0].variant->regval_to_samp_freq = (int **) malloc(_len_data__i0__variant_regval_to_samp_freq0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_data__i0__variant_regval_to_samp_freq0; _j0++) {
            int _len_data__i0__variant_regval_to_samp_freq1 = 1;
            data[_i0].variant->regval_to_samp_freq[_j0] = (int *) malloc(_len_data__i0__variant_regval_to_samp_freq1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_data__i0__variant_regval_to_samp_freq1; _j1++) {
              data[_i0].variant->regval_to_samp_freq[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = hmc5843_get_samp_freq_index(data,val,val2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].variant);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
